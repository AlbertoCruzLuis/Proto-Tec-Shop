#ifndef ARTICLE_H
#define ARTICLE_H

#include <iostream>
#include <string>

class Article
{
    std::string _model;
    double _netPrice;    
    int _taxRate; //As a percentage(%)

    public:

        Article();
        Article(std::string, double);
        virtual ~Article();

        //Getters
        std::string get_model()
        { return _model; }

        double get_netPrice()
        { return _netPrice; }

        double get_grossPrice()
        { return _netPrice + (_netPrice * _taxRate)/100; }

        int get_taxRate()
        { return _taxRate; }

        //Setters
        void set_model(std::string model)
        { _model = model; }

        void set_netPrice(double netPrice)
        { _netPrice = netPrice; }
        

        virtual void print() = 0;

};

#endif