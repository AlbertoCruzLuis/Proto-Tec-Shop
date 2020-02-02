#include "Notebook.h"
#include "Device.h"

Notebook::Notebook(std::string model, double netPrice, int main_memory,
                    std::string drive)
: Device(model, netPrice, main_memory)
{
    _drive = drive;
    set_os(OperatingSystem::linux);
    _convertible = false;
}

bool Notebook::is_a_convertible()
{
    return true;
}

virtual void Notebook::print()
{
    print();
    if(_convertible)
        std::cout << "(convertible)" << _drive << std::endl;
}