#include <string>
#pragma once
//��������� ��� ������������ ������ sort() � �����������.
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
