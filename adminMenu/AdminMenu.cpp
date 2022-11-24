//
// Created by gnatk on 21.09.2022.
//

#include "AdminMenu.h"

using namespace std;
AdminMenu::AdminMenu(const Library &library1){
    library = library1;
}
bool operator== (Book* Obj1, Book& Obj2) {
    return Obj1-> GetName() == Obj2.GetName();
}

void AdminMenu::StartWork() {
    cout << "~~Назва книгарні: " + library.GetName() +  " | Засновник книгарні: " + library.GetFounder()
         << "~~" << endl;
    while (true) {
        cout << *this;
        if (!HandleOption(ReadNumber())) {
            break;
        }

    }

}
int AdminMenu::ReadNumber() {
    int n;
    cin >> n;
    return n;
}
bool AdminMenu::HandleOption(int NumberOfOption) {
    string Name;
    string PublishingHouse;
    string NameOfBook;
    PaperBook* paperBook;
    EBook* eBook;
    switch (NumberOfOption) {
        case 1:
            cout << "Введіть дані книги, яку хочете розмістити на продаж" << endl;
            paperBook = new PaperBook;
            cin >> paperBook;
            library += (paperBook);
            library.GetPaperBookStorage()-> AddToFile("C:/Users/gnatk/CLionProjects/4lab/BookStorage/Files/PaperBook.txt");
            break;
        case 2:
            cout << "Введіть дані книги, яку хочете розмістити на сайт" << endl;
            eBook = new EBook;
            cin >> eBook;
            library += (eBook);
            library.GetPaperBookStorage()-> AddToFile("C:/Users/gnatk/CLionProjects/4lab/BookStorage/Files/EBook.txt");
            break;
        case 4:
            try {
                library.GetEBookStorage()->ReadFromFile("C:/Users/gnatk/CLionProjects/4lab/BookStorage/Files/EBook.txt");
                library.GetPaperBookStorage()->ReadFromFile("C:/Users/gnatk/CLionProjects/4lab/BookStorage/Files/PaperBook.txt");
            }
            catch (const string &e) {
                cout << e << endl;
                break;
            }
            cout << "Всі електронні книги: \n" << library.AllEBooks() << endl;
            cout << "Всі паперові книги: \n" << library.AllPaperBooks() << endl;
            break;
        case 5:
            cout << library.OldestEBook() << endl;
            break;
        case 6:
            cout << library.OldestPaperBook() << endl;
            break;
        case 7:
            cout << library.NewestEBook() << endl;
            break;
        case 8:
            cout << library.NewestPaperBook() << endl;
            break;
        case 9:
            return false;
    }
    return true;

}
void AdminMenu::OutputOptions() {
    string Options = "1 - Розмістити книги з складу на продаж"
                     "\n2 - Розмістити електронну книгу на сайт"
                     "\n4 - Виведення всіх книг"
                     "\n5 - Найстаріша електронна книга у книгарні"
                     "\n6 - Найстаріша паперова книга у книгарні"
                     "\n7 - Найновіша електронна книга у книгарні"
                     "\n8 - Найновіша паперова книга у книгарні"
                     "\n9 - Припинити роботу \n";
    cout << Options << endl;
    cout << "Виберіть опцію, яку хочете виконати: ";
}
ostream & operator << (ostream &output, AdminMenu){
    AdminMenu::OutputOptions();
    return output;
}

BookStorageGeneral AdminMenu::CreatePaperBook() {
    return new PaperBookStorageFactory;
}

BookStorageGeneral AdminMenu::CreateEBook() {
    return new EBookStorageFactory;
}
