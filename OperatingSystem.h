#ifndef OPERATING_SYSTEM_H
#define OPERATING_SYSTEM_H

#include <iostream>

enum class OperatingSystem
{
    unknown,
    android, 
    iOS, 
    macOS, 
    Linux, 
    propietary, 
    Unix, 
    windows 
};

std::ostream& operator<< (std::ostream&, OperatingSystem);

#endif
