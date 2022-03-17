//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef _LIBCPP___RANDOM_RANDOM_DEVICE_H
#define _LIBCPP___RANDOM_RANDOM_DEVICE_H

#include <__config>
#include <string>

#if !defined(_LIBCPP_HAS_NO_PRAGMA_SYSTEM_HEADER)
#pragma GCC system_header
#endif

_LIBCPP_PUSH_MACROS
#include <__undef_macros>

_LIBCPP_BEGIN_NAMESPACE_STD

#if !defined(_LIBCPP_HAS_NO_RANDOM_DEVICE)

class _LIBCPP_TYPE_VIS random_device
{
#ifdef _LIBCPP_USING_DEV_RANDOM
    int __f_;
#endif // defined(_LIBCPP_USING_DEV_RANDOM)
public:
    // types
    typedef unsigned result_type;

    // generator characteristics
    static _LIBCPP_CONSTEXPR const result_type _Min = 0;
    static _LIBCPP_CONSTEXPR const result_type _Max = 0xFFFFFFFFu;

    _LIBCPP_INLINE_VISIBILITY
    static _LIBCPP_CONSTEXPR result_type min() { return _Min;}
    _LIBCPP_INLINE_VISIBILITY
    static _LIBCPP_CONSTEXPR result_type max() { return _Max;}

    // constructors
#ifndef _LIBCPP_CXX03_LANG
    random_device() : random_device("/dev/urandom") {}
    explicit random_device(const string& __token);
#else
    explicit random_device(const string& __token = "/dev/urandom");
#endif
    ~random_device();

    // generating functions
    result_type operator()();

    // property functions
    double entropy() const _NOEXCEPT;

    random_device(const random_device&) = delete;
    void operator=(const random_device&) = delete;
};

#endif // !_LIBCPP_HAS_NO_RANDOM_DEVICE

_LIBCPP_END_NAMESPACE_STD

_LIBCPP_POP_MACROS

#endif // _LIBCPP___RANDOM_RANDOM_DEVICE_H
