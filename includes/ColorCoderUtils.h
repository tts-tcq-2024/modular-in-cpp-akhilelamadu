#ifndef COLORCODERUTILS_H
#define COLORCODERUTILS_H

#include "ColorPair.h"

namespace TelCoColorCoder 
{
    ColorPair GetColorFromPairNumber(int pairNumber);
    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
    void PrintColorReferenceManual();
}

#endif
