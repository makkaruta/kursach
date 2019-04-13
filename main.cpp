#include "CATALOG.h"

#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main()
{
    system("chcp 1251>nul");
    CATALOG* guide_catalog;
    guide_catalog = new CATALOG;

    guide_catalog->show();

    return 0;
}
