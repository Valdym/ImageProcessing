#pragma once
#include<Windows.h>
BYTE* LoadBMP(int% width, int% height, long% size, LPCTSTR bmpfile);
BYTE* ConvertBMPToIntensity(BYTE* Buffer, int width, int height);