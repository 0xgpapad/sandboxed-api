// Copyright 2019 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <glog/logging.h>
#include "sandboxed_api/examples/sum/lib/sum_params.pb.h"

extern "C" int sumproto(const sumsapi::SumParamsProto* params) {
  LOG(INFO) << "Param is " << params->DebugString();
  return params->a() + params->b() + params->c();
}
