#include "Accessory.h"

Accessory::Accessory(std::string model, double netPrice) 
: Article(model, netPrice)
{
    _original = true;
}

Accessory::~Accessory()
{
    std::cout << "~Accessory() ";
}

void Accessory::print()
{
    std::cout << get_model() << " (original accessory)\n";
}


