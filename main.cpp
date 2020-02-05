#include <iostream>
#include "ShoppingCart.h"
#include "Accessory.h"
#include "Phone.h"
#include "Notebook.h"

int main()
{
    ShoppingCart ShoppingCartObj;

    ShoppingCartObj.set_minFreeShipping(500);

    //Create Accessory YOOLOX 10k Wireless Powerbank Qi
    Accessory* Yoolox = new Accessory("YOOLOX 10k Wireless Powerbank Qi",
                                    31.08, false);

    ShoppingCartObj.add_article(3,Yoolox);

    ShoppingCartObj.print();

    //Create Phone Samsung Galaxy S10+ SM-G975F/DS Dual SIM
    Phone* Samsung = new Phone("Samsung Galaxy S10+ SM-G975F/DS Dual SIM",
                            661.67);
    Samsung->set_main_memory(8);

    ShoppingCartObj.add_article(1,Samsung);

    //Create Phone Apple iPhone 11 Pro 256GB
    Phone* iPhone = new Phone("Apple iPhone 11 Pro 256GB",
                            1097.47);
    iPhone->set_os(OperatingSystem::iOS);

    ShoppingCartObj.add_article(2,iPhone);

    //Create Notebook ASUS ROG Strix Scar III G731
    Notebook* Asus = new Notebook("ASUS ROG Strix Scar III G731",
                                1586.55,16,"512GB SSD + 1TB SSHD");
    Asus->set_os(OperatingSystem::windows);

    ShoppingCartObj.add_article(1,Asus);

    ShoppingCartObj.print();


    return 0;
}