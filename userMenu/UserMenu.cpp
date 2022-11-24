//
// Created by gnatk on 21.09.2022.
//

#include "UserMenu.h"

using namespace std;

UserMenu::UserMenu(const Library &library1){
    library = library1;
}
bool operator== (Book* Obj1, Book& Obj2) {
    return Obj1-> GetName() == Obj2.GetName();
}

void UserMenu::StartWork() {
    cout << "~~Назва книгарні: " + library.GetName() +  " | Засновник книгарні: " + library.GetFounder()
         << "~~" << endl;
    while (true) {
        cout << *this;
        if (!HandleOption(ReadNumber())) {
            break;
        }

    }

}
int UserMenu::ReadNumber() {
    int n;
    cin >> n;
    return n;
}
bool UserMenu::HandleOption(int NumberOfOption) {
    string Name;
    string PublishingHouse;
    string NameOfBook;
    PaperBook* book;
    switch (NumberOfOption) {
        case 1:
            cout << "Введіть дані електронної книжки, яку хочете позичити у книгарні:" << endl;
            cout << "Назва книжки: ";
            cin >> Name;
            try {
                library.DeleteEBook(new EBook(Name, 0, " ", 0, " ", " "));
                library.GetEBookStorage()->AddToFile("C:/Users/gnatk/CLionProjects/4lab/BookStorage/Files/EBook.txt");
            }
            catch (const string &e){
                cout << e << endl;
            }
            break;
        case 2:
            cout << "Введіть дані паперової книжки, яку хочете позичити у книгарні:" << endl;
            cout << "Назва книжки: ";
            cin >> Name;
            try {
                library.DeletePaperBook(new PaperBook(Name, 0, " ", 0, " ", 0));
                library.GetPaperBookStorage()-> AddToFile("C:/Users/gnatk/CLionProjects/4lab/BookStorage/Files/PaperBook.txt");
            }
            catch (const string &e){
                cout << e << endl;
            }
            break;
        case 3:
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
        case 4:
            cout << library.OldestEBook() << endl;
            break;
        case 5:
            cout << library.OldestPaperBook() << endl;
            break;
        case 6:
            cout << library.NewestEBook() << endl;
            break;
        case 7:
            cout << library.NewestPaperBook() << endl;
            break;
        case 8:
            return false;
    }
    return true;

}
void UserMenu::OutputOptions() {
    string Options =
                     "\n1 - Купити електронну книгу у книгарні"
                     "\n2 - Купити паперову книгу у книгарні"
                     "\n3 - Виведення всіх книг"
                     "\n4 - Найстаріша електронна книга у книгарні"
                     "\n5 - Найстаріша паперова книга у книгарні"
                     "\n6 - Найновіша електронна книга у книгарні"
                     "\n7 - Найновіша паперова книга у книгарні"
                     "\n8 - Припинити роботу \n";
    cout << Options << endl;
    cout << "Виберіть опцію, яку хочете виконати: ";
}
ostream & operator << (ostream &output, UserMenu){
    UserMenu::OutputOptions();
    return output;
}
