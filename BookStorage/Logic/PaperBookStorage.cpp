//
// Created by gnatk on 22.11.2022.
//

#include "PaperBookStorage.h"

void PaperBookStorage::ReadFromFile(string FileName) {
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
        string BookFormat;
        double Weight;
        file >> Name >> Year >> PublishingHouse >> Pages >>  BookFormat >> Weight;
        Data.push_back(new PaperBook(Name, Year, PublishingHouse, Pages, BookFormat, Weight));
    }
    file.close();
}
