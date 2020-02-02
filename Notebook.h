#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include <string>

class Notebook : public Device
{
    std::string _drive;
    bool _convertible;

    public:

        Notebook();
        virtual ~Notebook(){}

        bool is_a_convertible();
        virtual void print();
};

#endif