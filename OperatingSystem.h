#ifndef OPERATING_SYSTEM_H
#define OPERATING_SYSTEM_H

enum class OperatingSystem
{
    unknown, android, iOS, macOS, linux, propietary, Unix, windows
};

ostream& operator<<(ostream& os)
{
    if(OperatingSystem::unknown) 
        os << "unknown OS\n";
    else if(OperatingSystem::android) 
        os << "Android OS\n";
    else if(OperatingSystem::iOS) 
        os << "iOS\n";
    else if(OperatingSystem::macOS) 
        os << "MacOS\n";
    else if(OperatingSystem::linux) 
        os << "Linux OS\n";
    else if(OperatingSystem::propietary) 
        os << "proprietary OS\n";
    else if(OperatingSystem::Unix) 
        os << "Unix OS\n";
    else if(OperatingSystem::windows) 
        os << "MS Windows OS\n";
}

#endif
