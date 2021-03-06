// Copyright 2008 Dolphin Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "Common/CommonTypes.h"
#include "Core/HW/DSPHLE/UCodes/UCodes.h"

namespace DSP::HLE
{
class DSPHLE;

// Computes two 32 bit integers to be returned to the game, based on the
// provided crypto parameters at the provided MRAM address. The integers are
// written back to RAM at the dest address provided in the crypto parameters.
void ProcessGBACrypto(u32 address);

struct GBAUCode : public UCodeInterface
{
  GBAUCode(DSPHLE* dsphle, u32 crc);

  void Initialize() override;
  void HandleMail(u32 mail) override;
  void Update() override;
};
}  // namespace DSP::HLE
