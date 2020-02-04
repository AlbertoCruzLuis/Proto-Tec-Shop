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

        int get_amount()
        { return _amount; }

        Article* get_article()
        { return _article; }

        //Setters
        void set_amount(int amount)
        { _amount = amount; }

        void set_article(Article* article)
        { _article = article; }

        virtual void print();
};

#endif