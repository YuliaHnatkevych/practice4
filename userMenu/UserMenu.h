//
// Created by gnatk on 23.11.2022.
//

#ifndef INC_4LAB_USERMENU_H
#define INC_4LAB_USERMENU_H


#include "../BookStorage/Logic/Library.h"
#include "../BookStorage/Logic/FileReader.h"
#include "iostream"
using namespace std;
class UserMenu {
private:
    Library library;
public:
    explicit UserMenu(const Library &library1);
    void StartWork();
    static int ReadNumber();
    bool HandleOption(int NumberOfOption);
    static void OutputOptions();
    friend ostream & operator << (ostream &output, UserMenu);
};


#endif //INC_4LAB_USERMENU_H
