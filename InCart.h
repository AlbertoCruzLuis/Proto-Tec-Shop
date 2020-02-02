#ifndef INCART_H
#define INCART_H

#include <iostream>
#include "Article.h"

class InCart 
{
    Article* _article;
    int _amount;
    InCart* _next;

    public:

        InCart();
        virtual ~InCart(){}

        //Getters
        InCart* get_next()
        { return _next; }

        virtual void print();
};

#endif