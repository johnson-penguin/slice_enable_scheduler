/*******************************************************************************
################################################################################
#   Copyright (c) [2020-2021] [HCL Technologies Ltd.]                          #
#                                                                              #
#   Licensed under the Apache License, Version 2.0 (the "License");            #
#   you may not use this file except in compliance with the License.           #
#   You may obtain a copy of the License at                                    #
#                                                                              #
#       http://www.apache.org/licenses/LICENSE-2.0                             #
#                                                                              #
#   Unless required by applicable law or agreed to in writing, software        #
#   distributed under the License is distributed on an "AS IS" BASIS,          #
#   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   #
#   See the License for the specific language governing permissions and        #
#   limitations under the License.                                             #
################################################################################
*******************************************************************************/


/* This file contains SliceMeasurementEvent class for  preparing the
   Slice Measurement VES Event*/

#ifndef __SLICE_MEASUREMENT_EVENT_HPP__
#define __SLICE_MEASUREMENT_EVENT_HPP__

#include <iostream>
#include <string>
#include "VesUtils.hpp"
#include "PerfMeasurementEvent.hpp"
#include <cjson/cJSON.h>
#include "SliceMetrics.hpp"

using namespace std;


class SliceMeasurementEvent : public PerfMeasurementEvent
{
public:
    SliceMeasurementEvent();
    ~SliceMeasurementEvent();

private:
    bool prepareEventFields(const Message* msg = NULL);
};
#endif

/**********************************************************************
         End of file
**********************************************************************/
