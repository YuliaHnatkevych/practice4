//
// Created by gnatk on 21.09.2022.
//

#ifndef HURMA_BOOK_H
#define HURMA_BOOK_H


#include <string>
#include <iostream>

using namespace std;

class Book {
protected:
    string name;
    int year;
    string PublishingHouse;
    int pages;
public:
    Book( const string &name1, int year1, const string &PublishingHouse1, int pages1 );
    Book() = default;

    virtual string Info() = 0; //повна інформація про книжку
    string GetName();
    int GetYear();
    friend istream & operator >> (istream &input, Book* Book1);
};




#endif //HURMA_BOOK_H
