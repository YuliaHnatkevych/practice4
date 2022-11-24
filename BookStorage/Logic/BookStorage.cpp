//
// Created by gnatk on 21.09.2022.
//

#include "BookStorage.h"
#include <fstream>
using namespace std;

string BookStorage::AllBooks() {
    string AllBooksInfo;
    for (int i = 0; i < Data.size(); ++i) {
        AllBooksInfo += to_string(i + 1) + ". " +  Data[i]-> Info();
    }
    return AllBooksInfo;
}
string BookStorage::AllBooksForTxt() {
    string AllBooksInfo;
    for (int i = 0; i < Data.size(); ++i) {
        AllBooksInfo += Data[i]-> Info();
    }
    AllBooksInfo.pop_back();
    return AllBooksInfo;
}
string BookStorage::OldestBook(){
    int TheSmallestYear = 0;
    for (int i = 0; i < Data.size(); ++i) {
        if (Data[i]-> GetYear() < Data[TheSmallestYear]-> GetYear()) {
            TheSmallestYear = i;
        }
    }
    return Data[TheSmallestYear]-> Info();
}
string BookStorage::NewestBook() {
    int TheBigestYear = 0;
    for (int i = 0; i < Data.size(); ++i) {
        if (Data[i]->GetYear() > Data[TheBigestYear]->GetYear()) {
            TheBigestYear = i;
        }
    }
    return Data[TheBigestYear]->Info();
}
vector<Book*> &BookStorage::GetLibrary() {
    return Data;
}
void BookStorage::AddToFile(string FileName) {
    string Library = this-> AllBooksForTxt();
    ofstream file;
    file.open(FileName);
    file << Library;
    file.close();
}

bool BookStorage::Equals(Book *Obj1, Book *Obj2) {
    return Obj1->GetName() == Obj2->GetName();
}
