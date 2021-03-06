/****************************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/
//===----------------------------------------------------------------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is dual licensed under the MIT and the University of Illinois Open
// Source Licenses. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

// <string>

// template<> struct char_traits<char32_t>

// static constexpr int_type not_eof(int_type c);

#include <string>
#include <cassert>
#include "libcxx_tc_common.h"

#include "test_macros.h"

int tc_libcxx_strings_char_traits_specializations_char32_t_not_eof(void)
{
#ifndef _LIBCPP_HAS_NO_UNICODE_CHARS
#if TEST_STD_VER >= 11
    TC_ASSERT_EXPR(std::char_traits<char32_t>::not_eof(U'a') == U'a');
    TC_ASSERT_EXPR(std::char_traits<char32_t>::not_eof(U'A') == U'A');
#endif
    TC_ASSERT_EXPR(std::char_traits<char32_t>::not_eof(0) == 0);
    TC_ASSERT_EXPR(std::char_traits<char32_t>::not_eof(std::char_traits<char32_t>::eof()) !=
           std::char_traits<char32_t>::eof());
#endif  // _LIBCPP_HAS_NO_UNICODE_CHARS
    TC_SUCCESS_RESULT();
    return 0;
}
