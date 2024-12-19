//------------------------------------------------------------------------
// Copyright(c) 2024 redetach.
//------------------------------------------------------------------------

#pragma once

#include "pluginterfaces/base/funknown.h"
#include "pluginterfaces/vst/vsttypes.h"

namespace redetach {
//------------------------------------------------------------------------
static const Steinberg::FUID kMultiDistProcessorUID (0xDCA545FC, 0x4C295BB9, 0x8B1D32A3, 0x30159777);
static const Steinberg::FUID kMultiDistControllerUID (0xA8302113, 0x68BC572E, 0x8E298696, 0x1B17B93C);

#define MultiDistVST3Category "Fx"

//------------------------------------------------------------------------
} // namespace redetach
