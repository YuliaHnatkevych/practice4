//
// Created by gnatk on 22.11.2022.
//

#include "EBookStorage.h"

void EBookStorage::ReadFromFile(string FileName) {
    ifstream file;
    file.open(FileName);
    if (file.peek() == ifstream::traits_type::eof()) {
        throw string("Файл не найдено або пустий\n");
    }
    Data.clear();
    while (!file.eof()) {
        string Name;
        int Year;
        string PublishingHouse;
        int Pages;
        string LinkOnBook;
        string FormatOfDownloading;
        file >> Name >> Year >> PublishingHouse >> Pages >> LinkOnBook >> FormatOfDownloading;
        Data.push_back(new EBook(Name, Year, PublishingHouse, Pages, LinkOnBook, FormatOfDownloading));
    }
    file.close();
}