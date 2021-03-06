#ifndef SHOPPING_CART_H
#define SHOPPING_CART_H

#include <iostream>
#include <iomanip>
#include <math.h>
#include "InCart.h"

class ShoppingCart
{
    InCart* _articles;
    int _minFreeShipping;
    double _sumNetPrice;
    double _sumGrossPrice;

    public:

        ShoppingCart();
        ~ShoppingCart();

        //Setters
        void set_minFreeShipping(int minFreeShipping)
        { _minFreeShipping = minFreeShipping; }


        void add_article(int, Article*);
        virtual void print();

};

#endif