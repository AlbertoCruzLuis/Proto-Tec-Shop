#include "OperatingSystem.h"

std::ostream& operator<< (std::ostream& os, OperatingSystem OS)
{
    switch (OS)
    {
        case OperatingSystem::unknown : os << "unknown OS";
            break;
        case OperatingSystem::android : os << "Android OS";
            break;
        case OperatingSystem::iOS : os << "iOS";
            break;
        case OperatingSystem::macOS : os << "MacOS";
            break;
        case OperatingSystem::Linux : os << "Linux OS";
            break;
        case OperatingSystem::propietary : os << "proprietary OS";
            break;
        case OperatingSystem::Unix : os << "Unix OS";
            break;
        case OperatingSystem::windows : os << "MS Windows OS";
            break;
    }
    return os;
}