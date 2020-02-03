#include "InCart.h"

InCart::InCart()
{
    _amount = 0;
    _next = nullptr;
}

void InCart::print()
{
    std::cout << _amount << std::endl;
    //Mostar single gross price and total
}