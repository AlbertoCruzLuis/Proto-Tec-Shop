#include <iostream>
#include "ShoppingCart.cpp"
#include "Accessory.cpp"

int main()
{
    ShoppingCart ShoppingCartObj;

    ShoppingCartObj.set_minFreeShipping(500);

    //Create Article YOOLOX 10k Wireless Powerbank Qi
    Accessory* Yoolox = new Accessory();
    //Yoolox->set_model("YOOLOX 10k Wireless Powerbank Qi");
    //Yoolox->set_netPrice(31.08);

    //ShoppingCartObj.add_article(3,Yoolox);

    return 0;
}