/* ==========================================================
 * d2warden
 * https://github.com/lolet/d2warden
 * ==========================================================
 * Copyright 2011-2013 Bartosz Jankowski
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
 * ========================================================== */

#ifndef D2HANDS_H__
#define D2HANDS_H__

DWORD __fastcall OnClickLoc(Game* ptGame, UnitAny* ptPlayer, SkillPacket *ptPacket, DWORD PacketLen);
DWORD __fastcall OnClickUnit(Game* ptGame, UnitAny* ptPlayer, SkillTargetPacket *ptPacket, DWORD PacketLen);

void __fastcall DAMAGE_FireEnchanted(Game *pGame, UnitAny *pUnit, int a4, int a5);
DWORD __fastcall OnD2ExPacket(Game* ptGame, UnitAny* ptPlayer, BYTE *ptPacket, DWORD PacketLen);
int __stdcall OnCreateCorpse(Game *pGame, UnitAny *pUnit, int xPos, int yPos, Room1 *pRoom);
int __stdcall GetItemCost(UnitAny *pPlayer, UnitAny *ptItem, int DiffLvl, QuestFlags *pQuestFlags, int NpcClassId, int InvPage);
BOOL __stdcall isPermStore(Game* ptGame,UnitAny* ptNPC, UnitAny* ptItem);
int __fastcall OnGameEnter(ClientData* pClient, Game* ptGame, UnitAny* ptPlayer);


void __fastcall OnMonsterDeath(UnitAny* ptKiller, UnitAny * ptVictim, Game * ptGame);
void __fastcall OnNPCHeal(UnitAny* pUnit);
int __fastcall ReparseChat(Game* pGame, UnitAny *pUnit, BYTE *ThePacket, int PacketLen);
BOOL __fastcall OnChat(UnitAny* pUnit,BYTE *ThePacket);
DWORD __fastcall SetDRCap(Attack *pAttack);
void  __stdcall OnLastHit(UnitAny* ptKiller, UnitAny * ptVictim, Damage * ptDamage);
Act* __stdcall OnActLoad (DWORD ActNumber, DWORD InitSeed, DWORD Unk0, Game *pGame, DWORD DiffLvl, DWORD* pMemPool, DWORD TownLevelId, DWORD Func1, DWORD Func2);
void __fastcall OnManaLeech(UnitAny* pAttacker, UnitAny *pDefender,DWORD ManaToLeech);
void __fastcall OnLifeLeech(UnitAny* pAttacker, UnitAny *pDefender,DWORD LifeToLeech);
BOOL __fastcall OnReceivePacket (BYTE * ThePacket, PacketData * pClient);
DWORD __stdcall OnPacketSend(DWORD unk1,DWORD ClientID,unsigned char *ThePacket,DWORD PacketLen);

int __fastcall d2warden_0X66Handler(Game* ptGame, UnitAny* ptPlayer, BYTE *ptPacket, int PacketLen);
int __fastcall d2warden_0X68Handler(PacketData *pPacket);

#endif