// wrapResourceManager.cpp
// This is generated code, do not edit
// Copyright (c) 2018, Lawrence Livermore National Security, LLC.
// Produced at the Lawrence Livermore National Laboratory
//
// Created by David Beckingsale, david@llnl.gov
// LLNL-CODE-747640
//
// All rights reserved.
//
// This file is part of Umpire.
//
// For details, see https://github.com/LLNL/Umpire
// Please also see the LICENSE file for MIT license.
#include "wrapResourceManager.h"
#include <stdlib.h>
#include <string>
#include "umpire/Allocator.hpp"
#include "umpire/ResourceManager.hpp"

// splicer begin class.ResourceManager.CXX_definitions
// splicer end class.ResourceManager.CXX_definitions

extern "C" {

// splicer begin class.ResourceManager.C_definitions
// splicer end class.ResourceManager.C_definitions

umpire_resourcemanager * umpire_resourcemanager_get_instance(
    umpire_resourcemanager * SHC_rv)
{
// splicer begin class.ResourceManager.method.get_instance
    umpire::ResourceManager & SHCXX_rv =
        umpire::ResourceManager::getInstance();
    SHC_rv->addr = static_cast<void *>(&SHCXX_rv);
    SHC_rv->idtor = 0;
    return SHC_rv;
// splicer end class.ResourceManager.method.get_instance
}

umpire_allocator * umpire_resourcemanager_get_allocator_by_name(
    umpire_resourcemanager * self, const char * name,
    umpire_allocator * SHC_rv)
{
// splicer begin class.ResourceManager.method.get_allocator_by_name
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    umpire::Allocator * SHCXX_rv = new umpire::Allocator;
    const std::string SH_name(name);
    *SHCXX_rv = SH_this->getAllocator(SH_name);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 0;
    return SHC_rv;
// splicer end class.ResourceManager.method.get_allocator_by_name
}

umpire_allocator * umpire_resourcemanager_get_allocator_by_name_bufferify(
    umpire_resourcemanager * self, const char * name, int Lname,
    umpire_allocator * SHC_rv)
{
// splicer begin class.ResourceManager.method.get_allocator_by_name_bufferify
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    umpire::Allocator * SHCXX_rv = new umpire::Allocator;
    const std::string SH_name(name, Lname);
    *SHCXX_rv = SH_this->getAllocator(SH_name);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 0;
    return SHC_rv;
// splicer end class.ResourceManager.method.get_allocator_by_name_bufferify
}

umpire_allocator * umpire_resourcemanager_get_allocator_by_id(
    umpire_resourcemanager * self, const int id,
    umpire_allocator * SHC_rv)
{
// splicer begin class.ResourceManager.method.get_allocator_by_id
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    umpire::Allocator * SHCXX_rv = new umpire::Allocator;
    *SHCXX_rv = SH_this->getAllocator(id);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 0;
    return SHC_rv;
// splicer end class.ResourceManager.method.get_allocator_by_id
}

umpire_allocator * umpire_resourcemanager_get_allocatorfor_ptr(
    umpire_resourcemanager * self, void * ptr,
    umpire_allocator * SHC_rv)
{
// splicer begin class.ResourceManager.method.get_allocatorfor_ptr
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    umpire::Allocator * SHCXX_rv = new umpire::Allocator;
    *SHCXX_rv = SH_this->getAllocator(ptr);
    SHC_rv->addr = static_cast<void *>(SHCXX_rv);
    SHC_rv->idtor = 0;
    return SHC_rv;
// splicer end class.ResourceManager.method.get_allocatorfor_ptr
}

void umpire_resourcemanager_copy_all(umpire_resourcemanager * self,
    void * src_ptr, void * dst_ptr)
{
// splicer begin class.ResourceManager.method.copy_all
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    SH_this->copy(src_ptr, dst_ptr);
    return;
// splicer end class.ResourceManager.method.copy_all
}

void umpire_resourcemanager_copy_with_size(
    umpire_resourcemanager * self, void * src_ptr, void * dst_ptr,
    size_t size)
{
// splicer begin class.ResourceManager.method.copy_with_size
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    SH_this->copy(src_ptr, dst_ptr, size);
    return;
// splicer end class.ResourceManager.method.copy_with_size
}

void umpire_resourcemanager_memset_0(umpire_resourcemanager * self,
    void * ptr, int val)
{
// splicer begin class.ResourceManager.method.memset_0
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    SH_this->memset(ptr, val);
    return;
// splicer end class.ResourceManager.method.memset_0
}

void umpire_resourcemanager_memset_1(umpire_resourcemanager * self,
    void * ptr, int val, size_t length)
{
// splicer begin class.ResourceManager.method.memset_1
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    SH_this->memset(ptr, val, length);
    return;
// splicer end class.ResourceManager.method.memset_1
}

void * umpire_resourcemanager_reallocate(umpire_resourcemanager * self,
    void * src_ptr, size_t size)
{
// splicer begin class.ResourceManager.method.reallocate
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    void * SHC_rv = SH_this->reallocate(src_ptr, size);
    return SHC_rv;
// splicer end class.ResourceManager.method.reallocate
}

void umpire_resourcemanager_deallocate(umpire_resourcemanager * self,
    void * ptr)
{
// splicer begin class.ResourceManager.method.deallocate
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    SH_this->deallocate(ptr);
    return;
// splicer end class.ResourceManager.method.deallocate
}

size_t umpire_resourcemanager_get_size(umpire_resourcemanager * self,
    void * ptr)
{
// splicer begin class.ResourceManager.method.get_size
    umpire::ResourceManager *SH_this =
        static_cast<umpire::ResourceManager *>(self->addr);
    size_t SHC_rv = SH_this->getSize(ptr);
    return SHC_rv;
// splicer end class.ResourceManager.method.get_size
}

}  // extern "C"
