#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
    _sumNetPrice = 0;
    _sumGrossPrice = 0;
    _minFreeShipping = 1000;
    _articles = nullptr;
}

ShoppingCart::~ShoppingCart()
{
    std::cout << "~ShoppingCart()";
    delete _articles;
    std::cout << " delete article: \n"; 
}

void ShoppingCart::add_article(int amount, Article* article)
{
    _articles = new InCart();
    _articles->set_article(article);
    _articles->set_amount(amount);

    //Actualising the two sum variables
    _sumNetPrice += article->get_netPrice() * amount;
    _sumGrossPrice += (article->get_grossPrice() * amount);
}

void ShoppingCart::print()
{
    system("clear");

    std::cout << std::setfill('+') << std::setw(80) << "\n\n";
    std::cout << _articles->get_amount() << " " << 
    _articles->get_article()->get_model() << "\n\n";

    std::cout << std::right << std::setfill(' ') << std::setw(55) <<
    std::fixed << std::setprecision(2) <<
    _articles->get_article()->get_grossPrice() << " EUR" << std::setw(15) << 
    _articles->get_article()->get_grossPrice() * _articles->get_amount()  <<
    " EUR" << "\n\n";

    //Line separator(-)
    std::cout << std::right << std::setw(65) << std::setfill(' ') << " " <<
    std::setw(15) << std::setfill('-') << "\n\n";

    //sum net price
    std::cout << std::right << std::setfill(' ') << std::setw(64) <<
    "sum net price:" << std::setw(10) << _sumNetPrice << " EUR" << "\n\n";

    //tax
    std::cout << std::right << std::setfill(' ') << std::setw(64) <<
    "tax:" << std::setw(10) << _sumNetPrice *
     _articles->get_article()->get_taxRate()/100 << " EUR" << "\n\n";

    //sum gross price
    std::cout << std::right << std::setfill(' ') << std::setw(64) <<
    "sum gross price:" << std::setw(10) << _sumGrossPrice  << " EUR" << "\n\n";

    //Line separator(-)
    std::cout << std::right << std::setw(65) << std::setfill(' ') << " " <<
    std::setw(15) << std::setfill('-') << "\n\n";

    //Shipping Cost 5.90 EUR
    double ShippingCost = 5.90;
    std::cout << std::right << std::setfill(' ') << std::setw(64) <<
    "shipping:" << std::setw(10) << ShippingCost << " EUR\n\n";

    //Line separator(=)
    std::cout << std::right << std::setw(65) << std::setfill(' ') << " " <<
    std::setw(15) << std::setfill('=') << "\n\n";
}