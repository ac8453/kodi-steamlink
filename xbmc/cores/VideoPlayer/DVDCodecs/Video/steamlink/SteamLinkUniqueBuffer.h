/*
 *  Copyright (C) 2016-2018 Team Kodi
 *  Copyright (C) 2016-2018 Valve Corporation
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include <memory>
#include <stdint.h>

namespace KODI
{
namespace STEAMLINK
{

struct SteamLinkBufferFree
{
  void operator()(void* x);
};

using SteamLinkUniqueBuffer = std::unique_ptr<uint8_t[], SteamLinkBufferFree>;

}
}
