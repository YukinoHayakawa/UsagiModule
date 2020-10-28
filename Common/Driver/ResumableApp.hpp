﻿#pragma once

#include <Usagi/Entity/EntityDatabase.hpp>
#include <Usagi/Runtime/Memory/PagedStorage.hpp>

namespace usagi
{
class ResumableAppBase
{
protected:
    std::filesystem::path mBaseFolder;

    static constexpr auto EXT_META = ".yaml";
    static constexpr auto EXT_STORAGE = ".dat";
    static constexpr auto FILENAME_ENTITY_DATABASE = "database";
    static constexpr auto PATH_COMPONENTS = "components";

    std::filesystem::path path_edb() const
    {
        auto path = mBaseFolder / FILENAME_ENTITY_DATABASE;
        path.replace_extension(EXT_STORAGE);
        return path;
    }

    explicit ResumableAppBase(std::filesystem::path base_folder)
        : mBaseFolder(std::move(base_folder))
    {
        create_directories(mBaseFolder);
        create_directories(mBaseFolder / PATH_COMPONENTS);
    }
};

template <Component... EnabledComponents>
class ResumableApp
    : ResumableAppBase
    , EntityDatabaseFileBacked<EnabledComponents...>
{
public:
    using DatabaseT = EntityDatabaseFileBacked<EnabledComponents...>;

protected:
    using StorageT = typename DatabaseT::EntityPageStorageT;

    // entity database
    constexpr static std::uint16_t MAGIC_CHECK = 0xDB01;

    void init_entity_page_storage()
    {
        const bool exists = DatabaseT::entity_pages().init(path_edb());
        StorageT::template push_header<MAGIC_CHECK>(DatabaseT::mMeta, exists);
    }

    template <Component C>
    void init_component_storage()
    {
        // todo: file name should follow certain format
        auto path = mBaseFolder / PATH_COMPONENTS / typeid(C).name();
        path.replace_extension(EXT_STORAGE);
        DatabaseT::template component_storage<C>().init(std::move(path));
    }

public:
    explicit ResumableApp(std::filesystem::path base_folder)
        : ResumableAppBase(std::move(base_folder))
    {
        init_entity_page_storage();
        (..., init_component_storage<EnabledComponents>());
    }

    ~ResumableApp()
    {
        StorageT::template pop_header<MAGIC_CHECK>(DatabaseT::mMeta, true);
    }

    DatabaseT & database() { return *this; }
};
}