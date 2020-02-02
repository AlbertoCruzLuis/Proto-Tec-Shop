#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>
#include <string>

class Article
{
    std::string _model;
    double _netPrice;    
    float _taxRate; //As a percentage(%)

    public:

        Article();
        virtual ~Article(){}

        //Getters
        std::string get_model()
        { return _model; }

        double get_netPrice()
        { return _netPrice; }

        double get_grossPrice()
        { return _netPrice + _taxRate; }

        //Setters
        void set_model(std::string model)
        { _model = model; }

        void set_netPrice(double netPrice)
        { _netPrice = netPrice; }
        

        virtual print() = 0;

};

#endif