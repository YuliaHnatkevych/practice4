//
// Created by gnatk on 22.11.2022.
//

#ifndef HURMA_IFILEOPERATIONAL_H
#define HURMA_IFILEOPERATIONAL_H
#include <string>
using namespace std;
class IFileOperational {
public:
    virtual void ReadFromFile(string FileName) = 0;
    virtual void AddToFile(string FileName) = 0;
};
#endif //HURMA_IFILEOPERATIONAL_H
