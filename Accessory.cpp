#include "Accessory.h"

Accessory::Accessory(std::string model, double netPrice) 
: Article(model, netPrice)
{
    _original = true;
}

void Accessory::print()
{
    std::cout << get_model() << " (original accessory)\n";
}


