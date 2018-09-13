// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

namespace CryAudio
{
namespace Impl
{
namespace PortAudio
{
class CCVars final
{
public:

	CCVars(CCVars const&) = delete;
	CCVars(CCVars&&) = delete;
	CCVars& operator=(CCVars const&) = delete;
	CCVars& operator=(CCVars&&) = delete;

	CCVars() = default;

	void RegisterVariables();
	void UnregisterVariables();
};

extern CCVars g_cvars;
} // namespace PortAudio
} // namespace Impl
} // namespace CryAudio