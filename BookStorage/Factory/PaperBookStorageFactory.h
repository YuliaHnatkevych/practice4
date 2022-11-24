//
// Created by gnatk on 23.11.2022.
//

#ifndef HURMA_PAPERBOOKSTORAGEFACTORY_H
#define HURMA_PAPERBOOKSTORAGEFACTORY_H
#include <iostream>
#include "../Logic/EBookStorage.h"
#include "../Logic/PaperBookStorage.h"
#include "../Logic/BookStorage.h"


class PaperBookStorageFactory : public AbstractBookStorageFactory {
public:
    BookStorage* CreateBookStorage() override {
        return new PaperBookStorage();
    }
};

#endif //HURMA_PAPERBOOKSTORAGEFACTORY_H
