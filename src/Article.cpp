#include "Article.h"

Article::Article(std::string model, double netPrice)
{
    _model = model;
    _netPrice = netPrice;
    _taxRate = 19;  //Default percentage
}

Article::~Article()
{
    std::cout << "~Article() ";
    std::cout << get_model() << "\n\n";
}