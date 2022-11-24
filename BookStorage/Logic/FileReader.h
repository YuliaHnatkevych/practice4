//
// Created by gnatk on 21.09.2022.
//

#ifndef HURMA_FILEREADER_H
#define HURMA_FILEREADER_H

#include "../Obj/Book.h"
#include "../Obj/PaperBook.h"
#include "../Obj/EBook.h"
#include <vector>
#include <fstream>

class FileReader {
public:
    static vector<PaperBook> ReadFromPaperFile();
    static vector<EBook> ReadFromEFile();

    static void AddInPaperFile(string Library);
    static void AddInEFile(string Library);

};


#endif //HURMA_FILEREADER_H
