#include <iostream>
#include "ShoppingCart.h"
#include "Accessory.h"

int main()
{
    ShoppingCart ShoppingCartObj;

    ShoppingCartObj.set_minFreeShipping(500);

    //Create Article YOOLOX 10k Wireless Powerbank Qi
    Accessory* Yoolox = new Accessory("YOOLOX 10k Wireless Powerbank Qi",
                                    31.08);

    ShoppingCartObj.add_article(3,Yoolox);

    ShoppingCartObj.print();

    return 0;
}