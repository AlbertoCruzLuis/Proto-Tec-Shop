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
        virtual ~Device();

        //Getters
        OperatingSystem get_os()
        { return _os; }

        int get_main_memory()
        { return _main_memory; }

        //Setters
        void set_os(OperatingSystem os)
        { _os = os; }

        void set_main_memory(int main_memory)
        { _main_memory = main_memory; }


        virtual void print();
};

#endif