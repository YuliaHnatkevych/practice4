cmake_minimum_required(VERSION 3.21)
project(BookStorage)

set(CMAKE_CXX_STANDARD 20)

set(BOOKSTORAGE
        Obj/Book.cpp
        Obj/Book.h
        Obj/EBook.h
        Obj/EBook.cpp
        Obj/PaperBook.cpp
        Obj/PaperBook.h
        Logic/BookStorage.cpp
        Logic/BookStorage.h
        Logic/EBookStorage.cpp
        Logic/EBookStorage.h
        Logic/FileReader.cpp
        Logic/FileReader.h
        Logic/Library.h
        Logic/Library.cpp
        Logic/PaperBookStorage.cpp
        Logic/PaperBookStorage.h
        Interface/IFileOperational.h
        Interface/List.cpp
        Factory/AbstractBookStorageFactory.h
        Factory/EBookStorageFactory.h
        Factory/PaperBookStorageFactory.h
        Factory/BookStorageGeneral.h
        )
add_library(BookStorage STATIC ${BOOKSTORAGE})