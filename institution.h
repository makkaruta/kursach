#pragma once

#include <string>

using namespace std;

struct RECORD{
    string vendor_code;
    int quantity;
};


class INSTITUTION{
protected:
    int amount;
    RECORD *store;
    INSTITUTION *next;
public:
    setNext();
    virtual bool product_search(string temp_code) = 0;
};
