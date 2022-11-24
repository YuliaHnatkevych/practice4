//
// Created by gnatk on 12.10.2022.
//

#ifndef HURMA_PAPERBOOK_H
#define HURMA_PAPERBOOK_H

#include "Book.h"
using namespace std;
#include <iostream>
#include <string>

class PaperBook : public Book {
private:
    string BookFormat;
    double Weight;
public:
    PaperBook(const string &name1, int year1, const string &PublishingHouse1,
              int pages1, string BookFormat1, double Weight1);
    string Info() override;
    PaperBook() = default;
    friend istream & operator >> (istream &input, PaperBook* PaperBook1);
};


#endif //HURMA_PAPERBOOK_H
