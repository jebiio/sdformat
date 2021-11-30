/*
 * Copyright (C) 2021 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
*/

#ifndef SDF_PARSER_MODEL_HH_
#define SDF_PARSER_MODEL_HH_

#include <string>

#include <pxr/usd/usd/stage.h>

#include "sdf/Model.hh"

namespace usd
{
  /// \brief Parse an SDF model into a USD stage.
  /// \param[in] _model The SDF model to parse.
  /// \param[in] _stage The stage that should contain the USD representation
  /// of _model.
  /// \param[in] _path The USD path of the parsed model in _stage, which must be
  /// a valid USD path.
  /// \return True if _model was succesfully parsed into _stage with a path of
  /// _path. False otherwise.
  bool ParseSdfModel(const sdf::Model &_model, pxr::UsdStageRefPtr &_stage,
      const std::string &_path);
}

#endif