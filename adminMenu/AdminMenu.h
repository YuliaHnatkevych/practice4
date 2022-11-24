//
// Created by gnatk on 23.11.2022.
//

#ifndef INC_4LAB_ADMINMENU_H
#define INC_4LAB_ADMINMENU_H


#include "../BookStorage/Logic/Library.h"
#include "../BookStorage/Logic/FileReader.h"
#include "iostream"
#include "../BookStorage/Factory/BookStorageGeneral.h"
using namespace std;
class AdminMenu {
private:
    Library library;
public:
    explicit AdminMenu(const Library &library1);
    void StartWork();
    static int ReadNumber();
    bool HandleOption(int NumberOfOption);
    static void OutputOptions();
    friend ostream & operator << (ostream &output, AdminMenu);
    BookStorageGeneral CreatePaperBook();
    BookStorageGeneral CreateEBook();
};





#endif //INC_4LAB_ADMINMENU_H
