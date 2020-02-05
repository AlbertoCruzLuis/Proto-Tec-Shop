#include "Notebook.h"

Notebook::Notebook(std::string model, double netPrice, int main_memory,
                    std::string drive)
: Device(model, netPrice, main_memory)
{
    _drive = drive;
    set_os(OperatingSystem::Linux);
    _convertible = false;
}

Notebook::~Notebook()
{
    std::cout << "~Notebook() ";
}

bool Notebook::is_a_convertible()
{
    return true;
}

void Notebook::print()
{
    Device::print();
    std::cout << ", ";
    if(_convertible)
        std::cout << "(convertible)";
    std::cout << _drive;
}