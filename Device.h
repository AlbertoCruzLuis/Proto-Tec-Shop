#ifndef DEVICE_H
#define DEVICE_H

#include "Article.h"
#include "OperatingSystem.h"

class Device : public Article
{
    int _main_memory;
    OperatingSystem _os;

    public:

        Device();
        Device(std::string, double, int);
        virtual ~Device(){}

        //Getters
        OperatingSystem get_os()
        { return _os; }

        //Setters
        void set_os(OperatingSystem os)
        { _os = os; }

        virtual void print();
};

#endif