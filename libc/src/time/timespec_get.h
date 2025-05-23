//===-- Implementation header of timespec_get -------------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_SRC_TIME_TIMESPEC_GET_H
#define LLVM_LIBC_SRC_TIME_TIMESPEC_GET_H

#include "hdr/types/struct_timespec.h"
#include "src/__support/macros/config.h"

namespace LIBC_NAMESPACE_DECL {

int timespec_get(struct timespec *ts, int base);

} // namespace LIBC_NAMESPACE_DECL

#endif // LLVM_LIBC_SRC_TIME_TIMESPEC_GET_H
