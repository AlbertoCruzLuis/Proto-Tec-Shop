#ifndef ACCESSORY_H
#define ACCESSORY_H

#include <iostream>
#include "Article.h"

class Accessory : public Article
{
    bool _original;

    public:

        Accessory();
        Accessory(std::string, double);
        virtual ~Accessory();

        virtual void print();
};

#endif