#include "OperatingSystem.h"

std::ostream& operator<<(std::ostream& os, OperatingSystem OS)
{
    switch (OS)
    {
        case unknown : os << "unknown OS";
            break;
        case android : os << "Android OS";
            break;
        case iOS : os << "iOS";
            break;
        case macOS : os << "MacOS";
            break;
        case Linux : os << "Linux OS";
            break;
        case propietary : os << "proprietary OS";
            break;
        case Unix : os << "Unix OS";
            break;
        case windows : os << "MS Windows OS";
            break;
    }
    return os;
}