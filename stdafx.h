#pragma once

#include "targetver.h"

#include <windows.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <string>

#include "irremote.h"
#include "LIRCDefines.h" //get this from winlirc ( http://sourceforge.net/projects/winlirc/ ) 
//#include "hardware.h"  //and this also

extern HINSTANCE hInstance;

void XTrace0(LPCTSTR lpszText);
void XTrace(LPCTSTR lpszFormat, ...);

#ifdef _DEBUG
# define __FILEW_SHORT__ (wcsrchr(__FILEW__, '\\') ? wcsrchr(__FILEW__, '\\') + 1 : __FILEW__)
# define trace(format, ...) XTrace(L"File: %s, Line: %i, Func: %s: " ## format ## L"\n", __FILEW_SHORT__, __LINE__, __FUNCTIONW__, __VA_ARGS__)
#else
# define trace(...) 
#endif
