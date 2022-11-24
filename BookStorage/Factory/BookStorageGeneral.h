//
// Created by gnatk on 23.11.2022.
//

#ifndef INC_4LAB_BOOKSTORAGEFACTORY_H
#define INC_4LAB_BOOKSTORAGEFACTORY_H
#include "../Logic/BookStorage.h"
#include "AbstractBookStorageFactory.h"

class BookStorageGeneral {
private:
    BookStorageGeneral *bookStorageFactory;
    BookStorage *bookStorage;
public:
    BookStorageGeneral(AbstractBookStorageFactory* Factory){
        bookStorage = Factory->CreateBookStorage();
    }
    ~BookStorageGeneral(){
        delete bookStorageFactory;
        delete bookStorage;
    }
    BookStorage* GetBookStorage(){
        return bookStorage;
    }

};


#endif //INC_4LAB_BOOKSTORAGEFACTORY_H
