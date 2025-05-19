#include <string>
#pragma once
//структура для лабораторной работы sort() и компораторы.
namespace structures 
{
    struct Document {
        int id;
        double relevance;
        int rating;
    };
    struct DocumentTwo {
        int id;
        int status;
        double relevance;
        int rating;
    };
    struct Puple
    {
        std::string name;
        int mark;
    };
}
