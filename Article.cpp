#include "Article.h"

Article::Article(std::string model, double netPrice, float taxRate)
{
    _model = model;
    _netPrice = netPrice;
    _taxRate = 19;  //Default percentage
}