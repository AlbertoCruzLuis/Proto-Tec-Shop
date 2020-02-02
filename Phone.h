#ifndef PHONE_H
#define PHONE_H

class Phone : public Device
{
    public:

        Phone();
        virtual ~Phone(){}

        virtual void print();
};

#endif