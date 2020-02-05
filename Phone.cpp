#include "Phone.h"

Phone::Phone(std::string model, double netPrice) 
: Device(model, netPrice, 4)
{
    set_os(OperatingSystem::android);
}

Phone::~Phone()
{
    std::cout << "~Phone() ";
}

void Phone::print()
{
    Device::print();
    std::cout << " phone";
}