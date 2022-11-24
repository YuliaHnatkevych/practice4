//
// Created by gnatk on 23.11.2022.
//


#ifndef HURMA_ABSTRACTBOOKSTORAGEFACTORY_H
#define HURMA_ABSTRACTBOOKSTORAGEFACTORY_H
#include <iostream>
#include "../Logic/EBookStorage.h"
#include "../Logic/PaperBookStorage.h"
#include "../Logic/BookStorage.h"


class AbstractBookStorageFactory {
public:
    virtual BookStorage* CreateBookStorage() = 0;
    AbstractBookStorageFactory() = default;
};

#endif //HURMA_ABSTRACTBOOKSTORAGEFACTORY_H
