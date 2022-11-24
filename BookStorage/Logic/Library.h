//
// Created by gnatk on 21.09.2022.
//

#ifndef HURMA_LIBRARY_H
#define HURMA_LIBRARY_H

#include "BookStorage.h"
#include "PaperBookStorage.h"
#include "EBookStorage.h"
#include "../Factory/PaperBookStorageFactory.h"
#include "../Factory/EBookStorageFactory.h"

class Library {
private:
    BookStorage* PaperBookStorage;
    BookStorage* EBookStorage;
    string Name;
    string Founder;
    //AbstractBookStorageFactory* Factory;
public:
    Library(const string &Name1, const string &Founder1);
    Library()= default;

    void AddBook(PaperBook* Book1);
    void operator += (PaperBook* Book1);
    void AddBook(EBook* Book1);
    void operator += (EBook* Book1);
    void DeleteEBook(Book* Book);
    void DeletePaperBook(Book* Book);
    string AllEBooks();
    string AllPaperBooks();
    string AllEBooksForTxt();
    string AllPaperBooksForTxt();
    string GetName();
    string GetFounder();
    string OldestEBook();
    string OldestPaperBook();
    string NewestEBook();
    string NewestPaperBook();
    //vector<EBook> &GetELibrary();
    //vector<PaperBook> &GetPaperLibrary();
    BookStorage* GetPaperBookStorage(){
        return PaperBookStorage;
    }
    BookStorage* GetEBookStorage(){
        return EBookStorage;
    }
    void CreateEBookList(AbstractBookStorageFactory* Factory){
        EBookStorage = Factory->CreateBookStorage();
    }
    void CreatePaperBookList(AbstractBookStorageFactory* Factory){
        PaperBookStorage = Factory->CreateBookStorage();
    }

};


#endif //HURMA_LIBRARY_H
