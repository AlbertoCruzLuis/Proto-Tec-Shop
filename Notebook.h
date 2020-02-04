#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <string>
#include "Device.h"

class Notebook : public Device
{
    std::string _drive;
    bool _convertible;

    public:

        Notebook();
        Notebook(std::string, double, int, std::string);
        virtual ~Notebook(){}

        bool is_a_convertible();
        virtual void print();
};

#endif