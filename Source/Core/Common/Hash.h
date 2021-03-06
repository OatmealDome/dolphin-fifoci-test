// Copyright 2008 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <cstddef>
#include <string_view>

#include "Common/CommonTypes.h"

namespace Common
{
u32 HashFletcher(const u8* data_u8, size_t length);  // FAST. Length & 1 == 0.
u32 HashAdler32(const u8* data, size_t len);         // Fairly accurate, slightly slower
u32 HashEctor(const u8* ptr, size_t length);         // JUNK. DO NOT USE FOR NEW THINGS
u64 GetHash64(const u8* src, u32 len, u32 samples);
void SetHash64Function();

u32 ComputeCRC32(std::string_view data);
u32 ComputeCRC32(const u8* ptr, u32 length);
u32 StartCRC32();
u32 UpdateCRC32(u32 crc, const u8* ptr, u32 length);
}  // namespace Common
