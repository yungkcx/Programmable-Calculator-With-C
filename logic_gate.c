#include "code.h"

bool AND(bool a, bool b)
{
    return a & b;
}

bool OR(bool a, bool b)
{
    return a | b;
}

bool inverter(bool a)
{
    return !a;
}

bool NOR(bool a, bool b)
{
    return inverter(OR(a, b));
}

bool NAND(bool a, bool b)
{
    return inverter(AND(a, b));
}

bool XOR(bool a, bool b)
{
    return a ^ b;
}
