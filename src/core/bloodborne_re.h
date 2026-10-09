// SPDX-FileCopyrightText: Copyright 2026 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <cstdint>
#include <optional>
#include <string>
#include <string_view>

namespace Core::Bloodborne {

std::optional<std::string> GetSeamlessHostPlacementHeader();
bool SetSeamlessHostPlacementHeader(std::string_view value);
void ClearSeamlessHostPlacementHeader();
void TraceMatching2LeaveRoom(std::uintptr_t return_address, std::uint64_t room_id);
void InstallSeamlessCoopPatches();
// Asks the game to use a multiplayer bell (goods ID) as if the player had rung it. Safe to call
// from any thread; the use is dispatched on the game thread.
void RequestBellUse(std::int32_t goods_id);
// Asks the game to end the current multiplayer session (host: sends the guest home; guest:
// leaves). Safe to call from any thread.
void RequestSessionStop();
void InstallReverseEngineeringTrace();

} // namespace Core::Bloodborne
