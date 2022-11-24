//
// Created by gnatk on 21.09.2022.
//

#ifndef HURMA_BOOKSTORAGE_H
#define HURMA_BOOKSTORAGE_H


#include <vector>
#include "../Obj/Book.h"
#include "../Obj/PaperBook.h"
#include "../Obj/EBook.h"
#include "../Interface/List.cpp"

using namespace std;


class BookStorage : public List<Book*> {
public:
    string AllBooks();
    string AllBooksForTxt();
    string OldestBook();
    string NewestBook();
    vector<Book*> &GetLibrary();
    void AddToFile(string FileName) override;
    bool Equals(Book* Obj1, Book* Obj2) override;
};


#endif //HURMA_BOOKSTORAGE_H
