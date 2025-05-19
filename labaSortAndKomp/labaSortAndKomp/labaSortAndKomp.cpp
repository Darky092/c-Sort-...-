#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include "functions.h"
#include "accumulateFunctions.h"
using namespace std;



int main()
{
    cout << "choose laba 1-3\n";
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
    else if (x == 3)
    {
        cout << "laba accumulate()\n";
        cout << "choose task 1-3\n";
        int x;
        cin >> x;
        switch (x)
        {
        case 1:
            TaskOne();
            break;
        case 2:
            TaskTwo();
            break;
        case 3:
            TaskThree();
            break;
        default:
            break;
        }

    }
     
}

