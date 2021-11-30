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

#ifndef SDF_PARSER_VISUAL_HH_
#define SDF_PARSER_VISUAL_HH_

#include <string>

#include <pxr/usd/usd/stage.h>

#include "sdf/Visual.hh"

namespace usd
{
  /// \brief Parse an SDF visual into a USD stage.
  /// \param[in] _visual The SDF visual to parse.
  /// \param[in] _stage The stage that should contain the USD representation
  /// of _visual.
  /// \param[in] _path The USD path of the parsed visual in _stage, which must be
  /// a valid USD path.
  /// \return True if _visual was succesfully parsed into _stage with a path of
  /// _path. False otherwise.
  bool ParseSdfVisual(const sdf::Visual &_visual, pxr::UsdStageRefPtr &_stage,
      const std::string &_path);
}

#endif