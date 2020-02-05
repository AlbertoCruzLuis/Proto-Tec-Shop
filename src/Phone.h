#ifndef PHONE_H
#define PHONE_H

#include "Device.h"

class Phone : public Device
{
    public:

        Phone();
        Phone(std::string, double);
        virtual ~Phone();

        virtual void print();
};

#endif