#ifndef OPERATING_SYSTEM_H
#define OPERATING_SYSTEM_H

enum class OperatingSystem
{
    unknown, android, iOS, macOS, linux, propietary, Unix, windows
};

ostream& operator<<(ostream& os, OperatingSystem OS)
{
    if(OS::unknown) 
        os << "unknown OS\n";
    else if(OS::android) 
        os << "Android OS\n";
    else if(OS::iOS) 
        os << "iOS\n";
    else if(OS::macOS) 
        os << "MacOS\n";
    else if(OS::linux) 
        os << "Linux OS\n";
    else if(OS::propietary) 
        os << "proprietary OS\n";
    else if(OS::Unix) 
        os << "Unix OS\n";
    else if(OS::windows) 
        os << "MS Windows OS\n";
}

#endif
