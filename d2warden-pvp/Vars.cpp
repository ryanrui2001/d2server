#include "stdafx.h"
#include "Vars.h"

int WardenUpTime;
hWarden_Struct hWarden;
HANDLE DumpHandle = 0;
HANDLE hEvent = 0;

CRITICAL_SECTION MEM_CRITSECT;
CRITICAL_SECTION LOG_CS;
DWORD MOD_Length = 0;
unsigned char *MOD_Enrypted = 0;
BYTE Max_Players;
int ExpRange;
int DmgRekord;
BYTE AllowTourMode;
BYTE AllowVanilla;
BYTE AllowGU;
BYTE AllowHB;
BYTE MoveToTown;
BYTE DropEarGold;
BYTE StrBugFix;
BYTE FFAMode;
BYTE EnableSeed;
BYTE AllowD2Ex;
BYTE AllowNLWW;
BYTE DetectTrick;
std::string ClansURL;
std::string ConfigFile;
std::string UpdateURL;
std::string DmgOwner;
std::string GSName;
std::map<std::string,BYTE> ColorSet;
std::list<std::string> Admins;

bool Warden_Enable;
Vote * sVote = 0;
unsigned char AE_Packet00[40];
BYTE TeleChars[7];
int DumpInterval;
unsigned StatID = 0;
BYTE DesyncFix = 0;
unsigned int AfkDrop = 0;
UnitAny* ptMonster;
UnitAny* glptItem;

int PNo = 1;

int SellCount = 0;
BYTE EnableWE = 0;
int NextDC = 0;
int MinSell = 0;
int MaxSell = 0;
int InfoDelay = 0;
WEITem WItem;


