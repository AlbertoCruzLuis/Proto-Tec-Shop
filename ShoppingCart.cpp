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
    std::cout << "~ShoppingCart()\n\n";
    InCart* aux = _articles , *next = nullptr;
   /* while (aux->get_next() != nullptr)
    {
        aux = aux->get_next();
    }*/
    
    while(aux != nullptr)
    {
        next = aux->get_next();
        std::cout << " delete article: ";
        delete(aux);
        aux = next;
    }
}

void ShoppingCart::add_article(int amount, Article* article)
{
    InCart* NewCart = new InCart();
    if(_articles == nullptr)
    {
        //Add first cart to the shop
        NewCart->set_next(_articles);
        _articles = NewCart;
    }else
    {
        //Add other cart to the shop
        InCart* aux = _articles;
        while(aux->get_next() != nullptr)
        {
            aux = aux->get_next();
        }
        aux->set_next(NewCart);
    }

    NewCart->set_article(article);
    NewCart->set_amount(amount);
    NewCart->set_next(nullptr);

    //Actualising the two sum variables
    _sumNetPrice += article->get_netPrice() * amount;
    _sumGrossPrice += (article->get_grossPrice() * amount);
    
}

void ShoppingCart::print()
{
    //system("clear");

    //Your ShoppingCart
    std::string Title1 = "P R O T O - T E C - S H O P";   
    std::string Title2 = "Y O U R   S H O P P I N G C A R T";
    std::cout << std::setfill('+') << std::setw(80) << "\n\n";
    std::cout << "+" << std::setfill(' ') << std::setw((40 + Title1.size()/2)) 
    << Title1 << std::setw(24) << "+" << "\n\n";
    std::cout << "+" << std::setw((40 + Title2.size()/2)) << Title2 <<
    std::setw(21) << "+" << "\n\n";
    std::cout << std::setfill('+') << std::setw(80) << "\n\n";

    //Info for each Article
    InCart* aux = _articles;
    while (aux != nullptr)
    {
        aux->print();
        aux = aux->get_next();
    }

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

    //Shipping Cost 5.90 EUR or FREE
    double ShippingCost;
    if( _sumGrossPrice < _minFreeShipping )
        ShippingCost = 5.90;
    else
        ShippingCost = 0.00;
    
    std::cout << std::right << std::setfill(' ') << std::setw(64) <<
    "shipping:" << std::setw(10) << ShippingCost << " EUR\n\n";

    //Line separator(-)
    std::cout << std::right << std::setw(65) << std::setfill(' ') << " " <<
    std::setw(15) << std::setfill('-') << "\n\n";

    //Total Price
    double Total = _sumGrossPrice + ShippingCost;
    std::cout << std::right << std::setfill(' ') << std::setw(64) <<
    "total:" << std::setw(10) << Total << " EUR\n\n";

    //Line separator(=)
    std::cout << std::right << std::setw(65) << std::setfill(' ') << " " <<
    std::setw(15) << std::setfill('=') << "\n\n";
}