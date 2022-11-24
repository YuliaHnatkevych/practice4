//
// Created by gnatk on 22.11.2022.
//

#ifndef HURMA_EBOOKSTORAGE_H
#define HURMA_EBOOKSTORAGE_H

#include "BookStorage.h"
#include "../Factory/AbstractBookStorageFactory.h"
#include <fstream>
class EBookStorage : public BookStorage {
public:
    void ReadFromFile(string FileName) override;
/*EBookStorage(EBookStorageFactory* Factory) {
    this = Factory-> CreateBookStorage();
}*/
};


#endif //HURMA_EBOOKSTORAGE_H
