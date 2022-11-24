//
// Created by gnatk on 22.11.2022.
//

#ifndef HURMA_PAPERBOOKSTORAGE_H
#define HURMA_PAPERBOOKSTORAGE_H

#include "BookStorage.h"
#include "../Factory/AbstractBookStorageFactory.h"
#include <fstream>

class PaperBookStorage : public BookStorage {
public:
    void ReadFromFile(string FileName) override;
    /*PaperBookStorage(BookStorageFactory* Factory) {
        this = Factory-> CreateBookStorage();
    }*/
    PaperBookStorage() = default;
};


#endif //HURMA_PAPERBOOKSTORAGE_H
