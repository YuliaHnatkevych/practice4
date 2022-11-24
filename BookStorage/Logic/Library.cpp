//
// Created by gnatk on 21.09.2022.
//

#include "Library.h"
Library::Library(const string &Name1, const string &Founder1) {
        Name = Name1;
        Founder = Founder1;
    CreateEBookList(new EBookStorageFactory());
    CreatePaperBookList(new PaperBookStorageFactory());
}

void Library::AddBook(PaperBook* Book1) {
    PaperBookStorage->Add(Book1);
}
void Library::AddBook(EBook* Book1) {
    EBookStorage-> Add(Book1);
}
void Library::operator +=(PaperBook* Book1){
    AddBook(Book1);
}
void Library::operator +=(EBook* Book1){
    AddBook(Book1);
}
void Library::DeleteEBook(Book* Book) {
    EBookStorage-> Delete(Book);
}
void Library::DeletePaperBook(Book* Book) {
    PaperBookStorage-> Delete(Book);
}
string Library::AllEBooks() {
    return EBookStorage->AllBooks();
}
string Library::AllPaperBooks() {
    return PaperBookStorage-> AllBooks();
}
string Library::AllEBooksForTxt(){
    return EBookStorage-> AllBooksForTxt();
}
string Library::AllPaperBooksForTxt(){
    return PaperBookStorage-> AllBooksForTxt();
}
string Library::GetName() {
    return Name;
}
string Library::GetFounder() {
    return Founder;
}
string Library::OldestEBook(){
    return EBookStorage-> OldestBook();
}
string Library::OldestPaperBook(){
    return PaperBookStorage-> OldestBook();
}
string Library::NewestEBook(){
    return EBookStorage-> NewestBook();
}
string Library::NewestPaperBook(){
    return PaperBookStorage-> NewestBook();
}
/*vector<EBook> &Library::GetELibrary(){
    return EBookStorage-> GetLibrary();
}*/
/*
vector<PaperBook> &Library::GetPaperLibrary(){
    return Storage.GetPaperLibrary();
}*/
