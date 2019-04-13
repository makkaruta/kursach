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
    string choise, temp;
    int ch;
    CATALOG *guide_catalog;
    SHOP *shop1;
    SHOP *shop2;
    SHOP *shop3;
    WAREHOUSE *warehouse1;

    guide_catalog = new CATALOG;
    shop1 = new SHOP("shop1.txt", "Буквоед");
    shop2 = new SHOP("shop2.txt", "Дом книги");
    shop3 = new SHOP("shop3.txt", "Читай-город");
    warehouse1 = new WAREHOUSE("warehouse.txt");
    shop1->set_next(shop2);
    shop2->set_next(shop3);
    shop3->set_next(warehouse1);

    cout << "Добро пожаловать! На этом сервисе собраны путеводители по Санкт-Петербургу из разных магазинов!" << endl << endl;
    guide_catalog->show();
    cout << "Вы хотите сделать заказ? (Да/Нет)" << endl;
    cin >> choise;
    while (choise != "Нет" && choise != "нет")
    {
        cout << "\tПожалуйста, введите номер путеводителя, который вас заинтересовал: ";
        cin >> ch;
        if(ch > guide_catalog->get_amount())
        {
            cout << "К сожалению, такого товара нет в каталоге." << endl;
        }
        else
        {
            cout << "\tВы выбрали: " << guide_catalog->get_name(ch) << endl;
            temp = guide_catalog->get_vendor_code(ch);
            if(shop1->product_search(temp) == true)
            {
                guide_catalog->purchased(ch);
                cout << "\tБлагодарим за использование нашего сервиса." << endl;
            }
        }
        cout << "Хотите заказать что-то ещё? (Да/Нет)" << endl;
        cin >> choise;
    }
    cout << "До свидания!" << endl;
    return 0;
}
