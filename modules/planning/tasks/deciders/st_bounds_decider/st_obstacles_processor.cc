/******************************************************************************
 * Copyright 2019 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 **/

#include "modules/planning/tasks/deciders/st_bounds_decider/st_obstacles_processor.h"

namespace apollo {
namespace planning {

using apollo::common::Status;

// TODO(jiacheng): implement this.
STObstaclesProcessor::STObstaclesProcessor() {}

// TODO(jiacheng): implement this.
Status STObstaclesProcessor::MapObstaclesToSTBoundary(
    PathDecision* const path_decision) {
  return Status::OK();
}

// TODO(jiacheng): implement this.
std::pair<double, double>
    STObstaclesProcessor::GetRegularBoundaryFromObstacles(double t) {
  return 0.0;
}

// TODO(jiacheng): implement this.
std::pair<double, double>
    STObstaclesProcessor::GetFallbackBoundaryFromObstacles(double t) {
  return 0.0;
}

}
}