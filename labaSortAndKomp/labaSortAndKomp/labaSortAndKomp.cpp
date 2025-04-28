

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

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
    string name;
    int mark;

};


void SortDocuments(vector<Document>& matched_documents) 
{
    sort(
        matched_documents.begin(), matched_documents.end(),
        [](const Document& lhs, const Document& rhs) 
        {
            if (lhs.rating == rhs.rating) 
            {

                return lhs.relevance > rhs.relevance;
            }

            else 
            {

                return lhs.rating > rhs.rating;

            }

            
        }
    );
        
}
void SortDocumentsTwo(vector<Document>& matched_documents)
{
    sort(
        matched_documents.begin(), matched_documents.end(),
        [](const Document& lhs, const Document& rhs)
        {
            return make_pair(lhs.rating, lhs.relevance) > make_pair(rhs.rating, rhs.relevance);


        }
    );

}
void SortDocumentsTree(vector<DocumentTwo>& matched_documents)
{
    sort(
        matched_documents.begin(), matched_documents.end(),
        [](const DocumentTwo& lhs, const DocumentTwo& rhs)
        {
            if (lhs.rating == rhs.rating)
            {

                return lhs.status < rhs.status;
            }

            else
            {

                return lhs.rating > rhs.rating;

            }


        }
    );

}


pair<bool,double> CalcMedian(vector<double>sample) {
    double x;
    pair<bool, double> a;
    
    if (not sample.empty()) 
    {
        if (sample.size() % 2 == 0) {
            x = (sample[sample.size() / 2 - 1] + sample[sample.size() / 2]) / 2;
            a.first = true;
            a.second = x;
        }
        else
        {
            x = sample[round(sample.size()/2)];
            a.first = true;
            a.second = x;
        }
    }
    else
    {
        a.first = false;
        a.second = 0;
    }

    return a;
}

void LabaOneTaskOne() {
    int count;
    vector <pair<int, string >> peoples;
    cout << "this is task 1 laba 1\n";
    cout << "enter peoples count\n";
    cin >> count;
    for (int i = 0;i < count; i++) 
    {
        string name;
        int age;
        cout << "enter name\n";
        cin >> name;
        cout << "enter age\n";
        cin >> age;
        pair<int, string> a = { age,name };
        peoples.push_back(a);

    }
    sort(peoples.begin(), peoples.end());
    reverse(peoples.begin(), peoples.end());
    for (const auto& element : peoples) 
    {
        std::cout << element.second << endl;
    }

    
}
void LabaOneTaskTwo() {

    cout << "this is task 2 laba 1";
    int size;
    cin >> size;
    vector<double> samples;
    for (int i = 0; i < size; ++i) {
        double sample;
        cin >> sample;
        samples.push_back(sample);
    }
    pair<bool, double> result = CalcMedian(samples);
    if (result.first) {
        cout << result.second << endl;
    }
    else {
        cout << "Empty vector"s << endl;
    }
    
}
void LabaOneTaskTree() {
    cout << "this is task 3 laba 1";
    vector<int> array{ 12, 2145, 8, 4016, 4, 2, 1, 1000, 3, 10004,10 ,15, 235, 6 };
    for (int i = 0; i < array.size(); i++) {
        for (int y = 0; y < array.size()-1;y++) 
        {
            if (array[y] > array[y + 1]) 
            {
                int temp = array[y];
                array[y] = array[y + 1];
                array[y + 1] = temp;

            }

        }
    }
    for (const auto& element : array) {
        cout << element << endl;
    }

}
void LabaTwoTaskOne() {
    cout << "this is task 1 laba 2";
    vector<Document> documents = {
{100, 0.5, 4},
{101, 1.2, 4},
{102, 0.3, 5}
    };
    SortDocuments(documents);
    for (const Document& document : documents) {
        cout << document.id << ' '
            << document.relevance << ' '
            << document.rating << endl;
    }




}
void LabTwoTaskTwo() {
    cout << "this is task 2 laba 2\n";
    vector<Document> documents = {
{100, 0.5, 4},
{101, 1.2, 4},
{102, 0.3, 5}
    };
    SortDocumentsTwo(documents);
    for (const Document& document : documents) {
        cout << document.id << ' '
            << document.relevance << ' '
            << document.rating << endl;
    }
   
}
void LabaTwoTaskTree() {
    cout << "this is task 3 laba 2\n";

    vector<DocumentTwo> documents = {
{100, 0, 0.5, 4},
{101, 1, 0.5, 4},
{102, 0, 1.2, 4},
{103, 2, 1.2, 4},
{104, 0, 0.3, 5}
    };
    SortDocumentsTree(documents);
    for (const DocumentTwo& document : documents) {
        cout << document.id << ' '
            << document.status << ' '
            << document.relevance << ' '
            << document.rating << endl;
    }
}
void LabaTwoTaskFour() {
    string name;
    int mark;
    cout << "this is task 4 laba 2\n";
    vector <Puple> students;
    int count;
    cout << "inter student count\n";
    cin >> count;
    for (int i = 0; i < count;i++) 
    {
        cout << "name\n";
        cin >> name;
        cout << "mark\n";
        cin >> mark;
        Puple student;
        student.mark = mark;
        student.name = name;
        students.push_back(student);
        

    }
    sort(students.begin(), students.end(), []
    (const Puple& lhs, const Puple& rhs)
        {
            return lhs.mark > rhs.mark;

        });
    for (const Puple& element : students) {
        cout << element.mark << " " << element.name << endl;
    }


}




int main()
{
    cout << "choose laba 1-2\n";
    int x;
    cin >> x;
    if (x == 1) 
    {
        cout << "choose task 1-3\n";
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            LabaOneTaskOne();
            break;
        case 2:
            LabaOneTaskTwo();
            break;
        case 3:
            LabaOneTaskTree();
            break;
        default:
            break;
        }
    
    }
    else if (x == 2) 
    {
        cout << "choose task 1-4\n";
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            LabaTwoTaskOne();
            break;
        case 2:
            LabTwoTaskTwo();
            break;
        case 3:
            LabaTwoTaskTree();
            break;
        case 4:
            LabaTwoTaskFour();
            break;
        default:
            break;
        }
    
    }
     
}

