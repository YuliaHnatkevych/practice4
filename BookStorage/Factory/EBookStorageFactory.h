//
// Created by gnatk on 23.11.2022.
//

#ifndef HURMA_EBOOKSTORAGEFACTORY_H
#define HURMA_EBOOKSTORAGEFACTORY_H
#include <iostream>
#include "../Logic/EBookStorage.h"
#include "../Logic/PaperBookStorage.h"
#include "../Logic/BookStorage.h"
class EBookStorageFactory : public AbstractBookStorageFactory {
public:
    BookStorage* CreateBookStorage() override {
        return new EBookStorage();
    }
};
#endif //HURMA_EBOOKSTORAGEFACTORY_H
