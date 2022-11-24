//
// Created by gnatk on 12.10.2022.
//

#include "EBook.h"
EBook::EBook(const string &name1, int year1, const string &PublishingHouse1, int pages1, string LinkOnBook1,
             string FormatOfDownloading1): Book(name1, year1, PublishingHouse1, pages1) {
    LinkOnBook = LinkOnBook1;
    FormatOfDownloading = FormatOfDownloading1;
}
string EBook::Info() {
    string FullInfo;
    FullInfo += name + " " + to_string(year) + " " + PublishingHouse + " " + to_string(pages) + " " + LinkOnBook + " "
            + FormatOfDownloading + "\n";
    return FullInfo;
}
istream & operator >> (istream &input, EBook* EBook1){
    cout << "Назва книжки: ";
    cin >> EBook1-> name;
    cout << "Рік видання: ";
    cin >> EBook1-> year;
    cout << "Видавництво: ";
    cin >> EBook1-> PublishingHouse;
    cout << "Кількість сторінок: ";
    cin >> EBook1-> pages;
    cout << "Посилання: ";
    cin >> EBook1-> LinkOnBook;
    cout << "Формат для скачування: ";
    cin >> EBook1-> FormatOfDownloading;
}