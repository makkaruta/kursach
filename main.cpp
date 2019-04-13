#include "catalog.h"
#include "shop.h"
#include "warehouse.h"

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251>nul");
    CATALOG *guide_catalog;
    SHOP *shop1;
    SHOP *shop2;
    SHOP *shop3;
    WAREHOUSE *warehouse1;

    guide_catalog = new CATALOG;

    guide_catalog->show();

    shop1 = new SHOP("shop1.txt", "Буквоед");
    shop2 = new SHOP("shop2.txt", "Дом книги");
    shop3 = new SHOP("shop3.txt", "Читай-город");
    warehouse1 = new WAREHOUSE("warehouse.txt");
    return 0;
}
