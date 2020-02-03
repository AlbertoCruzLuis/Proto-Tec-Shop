#include "ShoppingCart.h"

ShoppingCart::ShoppingCart()
{
    _sumNetPrice = 0;
    _sumGrossPrice = 0;
    _minFreeShipping = 1000;
}

ShoppingCart::~ShoppingCart()
{
    std::cout << "~ShoppingCart()";
    delete _articles;
    std::cout << "delete article: "; 
}

void ShoppingCart::add_article(int amount, Article* article)
{
    _articles = new InCart();

    //Actualising the two sum variables
    _sumNetPrice += article->get_netPrice();
    _sumGrossPrice += article->get_grossPrice();
}

void ShoppingCart::print()
{
    std::cout << _sumNetPrice << std::endl;
    std::cout << _sumGrossPrice << std::endl;

    //Shipping Cost 5.90 EUR
    std::cout << "shipping: 5.90 EUR\n";
}