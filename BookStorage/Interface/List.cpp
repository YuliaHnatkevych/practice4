#include <iostream>
#include <vector>
#include "IFileOperational.h"

using namespace std;


template <typename T> class List : public IFileOperational{
protected:
    vector<T> Data; //зберігає любий об'єкт
public:
    void Add(T Obj) { //додавання об'єкта в вектор
        Data.push_back(Obj);
    }

    void Delete(T Obj) { //видалення з вектора
        unsigned int BeginSize = Data.size();
        for (int i = 0; i < Data.size(); ++i) {
            if (Equals(Data[i], Obj)) {
                Data.erase(Data.begin() + i);
                i--;
            }
        }
        if (Data.size() == BeginSize) {
            throw string ("Не знайдено такого об'єкта");
        }
    }
    virtual bool Equals(T Obj1, T Obj2) = 0;
};