//
// Created by gnatk on 21.09.2022.
//

#include "Book.h"
Book::Book(const string &name1, int year1, const string &PublishingHouse1, int pages1) {
    name = name1;
    year = year1;
    PublishingHouse = PublishingHouse1;
    pages = pages1;
}
string Book::GetName() {
    return name;
}
int Book::GetYear() {
    return year;
}
istream & operator >> (istream &input, Book* Book1){
    cout << "Введіть дані книжки, яку хочете надати книгарні:" << endl;
    cout << "Назва книжки: ";
    cin >> Book1-> name;
    cout << "Рік видання: ";
    cin >> Book1-> year;
    cout << "Видавництво: ";
    cin >> Book1-> PublishingHouse;
    cout << "Кількість сторінок: ";
    cin >> Book1-> pages;
    return input;
}