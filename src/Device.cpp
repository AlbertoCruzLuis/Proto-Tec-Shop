#include "Device.h"

Device::Device(std::string model, double netPrice, int main_memory)
: Article(model, netPrice)
{
    _main_memory = main_memory;
    _os = OperatingSystem::unknown;
}

Device::~Device()
{
    std::cout << "~Device() ";
}

void Device::print()
{
    std::cout << get_model() << ", RAM " << _main_memory << "GB, " << get_os();
}