//
// Created by gnatk on 21.09.2022.
//

#include "FileReader.h"
#include <fstream>
using namespace std;

void FileReader::AddInPaperFile(string Library) {
    ofstream file;
    file.open("PaperBook.txt");
    file << Library;
    file.close();
}
vector<PaperBook> FileReader::ReadFromPaperFile() {
    vector<PaperBook> result;
    ifstream file;
    file.open("PaperBook.txt");
    if (file.peek() == ifstream::traits_type::eof()) {
        throw string("Файл не найдено або пустий\n");
    }
    while (!file.eof()) {
        string Name;
        int Year;
        string PublishingHouse;
        int Pages;
        string BookFormat;
        double Weight;
        file >> Name >> Year >> PublishingHouse >> Pages >>  BookFormat >> Weight;
        result.emplace_back(Name, Year, PublishingHouse, Pages, BookFormat, Weight);
    }
    file.close();
    return result;
}
void FileReader::AddInEFile(string Library) {
    ofstream file;
    file.open("EBook.txt");
    file << Library;
    file.close();
}
vector<EBook> FileReader::ReadFromEFile() {
    vector<EBook> result;
    ifstream file;
    file.open("EBook.txt");
    if (file.peek() == ifstream::traits_type::eof()) {
        throw string("Файл не найдено або пустий\n");
    }
    while (!file.eof()) {
        string Name;
        int Year;
        string PublishingHouse;
        int Pages;
        string LinkOnBook;
        string FormatOfDownloading;
        file >> Name >> Year >> PublishingHouse >> Pages >> LinkOnBook >> FormatOfDownloading;
        result.emplace_back(Name, Year, PublishingHouse, Pages, LinkOnBook, FormatOfDownloading);
    }
    file.close();
    return result;
}