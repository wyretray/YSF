/*
*  Version: MPL 1.1
*
*  The contents of this file are subject to the Mozilla Public License Version
*  1.1 (the "License"); you may not use this file except in compliance with
*  the License. You may obtain a copy of the License at
*  http://www.mozilla.org/MPL/
*
*  Software distributed under the License is distributed on an "AS IS" basis,
*  WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
*  for the specific language governing rights and limitations under the
*  License.
*
*  The Original Code is the YSI 2.0 SA:MP plugin.
*
*  The Initial Developer of the Original Code is Alex "Y_Less" Cole.
*  Portions created by the Initial Developer are Copyright (C) 2008
*  the Initial Developer. All Rights Reserved. The development was abandobed
*  around 2010, afterwards kurta999 has continued it.
*
*  Contributor(s):
*
*	0x688, balika011, Gamer_Z, iFarbod, karimcambridge, Mellnik, P3ti, Riddick94
*	Slice, sprtik, uint32, Whitetigerswt, Y_Less, ziggi and complete SA-MP community
*
*  Special Thanks to:
*
*	SA:MP Team past, present and future
*	Incognito, maddinat0r, OrMisicL, Zeex
*
*/

#ifndef YSF_HOOKS_H
#define YSF_HOOKS_H

#include <sampgdk/sampgdk.h>

extern AMX_NATIVE 
	pDestroyObject, 
	pDestroyPlayerObject, 
	pTogglePlayerControllable, 
	pSetPlayerWorldBounds, 
	pSetPlayerTeam, 
	pSetPlayerSkin, 
	pSetPlayerFightingStyle, 
	pSetPlayerName, 
	pSetVehicleToRespawn, 
	pChangeVehicleColor, 
	pDestroyVehicle, 
	pAttachObjectToPlayer;

extern char gRecordingDataPath[MAX_PATH];

void InstallPreHooks();
void InstallPostHooks();
void UninstallHooks();

#endif
