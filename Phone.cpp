#include "Phone.h"
#include "Device.h"

Phone::Phone(std::string model, double netPrice) 
: Device(model, netPrice, 4)
{
    set_os(OperatingSystem::android)
}

virtual void Phone::print()
{
    Device::print();
    std::cout << "phone\n";
}