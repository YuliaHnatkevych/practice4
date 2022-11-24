//
// Created by gnatk on 12.10.2022.
//

#ifndef HURMA_EBOOK_H
#define HURMA_EBOOK_H

#include "Book.h"
using namespace std;
#include <string>
#include <iostream>

class EBook : public Book {
private:
    string LinkOnBook;
    string FormatOfDownloading;
public:
    EBook(const string &name1, int year1, const string &PublishingHouse1,
          int pages1, string LinkOnBook1, string FormatOfDownloading1);
    string Info() override;
    EBook() = default;
    friend istream & operator >> (istream &input, EBook* EBook1);
};


#endif //HURMA_EBOOK_H
