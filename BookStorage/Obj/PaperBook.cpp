//
// Created by gnatk on 12.10.2022.
//

#include "PaperBook.h"
PaperBook::PaperBook(const string &name1, int year1, const string &PublishingHouse1, int pages1, string BookFormat1,
                     double Weight1): Book(name1, year1, PublishingHouse1, pages1) {
    BookFormat = BookFormat1;
    Weight = Weight1;
}
string PaperBook::Info() {
    string FullInfo;
    FullInfo += name + " " + to_string(year) + " " + PublishingHouse + " " + to_string(pages) + " " + BookFormat + " "
            + to_string(Weight) + "\n";
    return FullInfo;
}
istream & operator >> (istream &input, PaperBook* PaperBook1){
    cout << "Назва книжки: ";
    cin >> PaperBook1-> name;
    cout << "Рік видання: ";
    cin >> PaperBook1-> year;
    cout << "Видавництво: ";
    cin >> PaperBook1-> PublishingHouse;
    cout << "Кількість сторінок: ";
    cin >> PaperBook1-> pages;
    cout << "Формат книги: ";
    cin >> PaperBook1-> BookFormat;
    cout << "Маса: ";
    cin >> PaperBook1-> Weight;
}