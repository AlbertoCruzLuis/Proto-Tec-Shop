#include "InCart.h"

InCart::InCart()
{
    _amount = 0;
    _next = nullptr;
}

InCart::~InCart()
{
    std::cout << "~Incart() " << get_amount() << " ";
    delete _article;
}

void InCart::print()
{
    //Amount and Name of Model
    std::cout << get_amount() << " ";
    _article->print();
    std::cout << "\n\n";

    //Price for one Article and Total of Article
    std::cout << std::right << std::setfill(' ') << std::setw(55) <<
    std::fixed << std::setprecision(2) <<
    get_article()->get_grossPrice() << " EUR" << std::setw(15) << 
    get_article()->get_grossPrice() * get_amount()  << " EUR" << "\n\n";
}