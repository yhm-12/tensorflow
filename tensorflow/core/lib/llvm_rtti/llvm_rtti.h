/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/
#ifndef TENSORFLOW_CORE_LIB_CORE_LLVM_RTTI_H_
#define TENSORFLOW_CORE_LIB_CORE_LLVM_RTTI_H_

#include "third_party/llvm/llvm-project/llvm/include/llvm/Support/Casting.h"

namespace tensorflow {
using llvm::dyn_cast;
using llvm::isa;
}  // namespace tensorflow

#endif  // TENSORFLOW_CORE_LIB_CORE_LLVM_RTTI_H_