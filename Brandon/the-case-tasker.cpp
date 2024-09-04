#include<iostream>
using namespace std;
int main ()
{
    char yourLetterGrade = 'A';
    switch (yourLetterGrade)
    {
        case 'A':
            cout<<"Pass\n";
        case 'F':
            cout<<"Fail\n"; 
            break;   
        default:
            cout<<"Umm Wow?";
            break;
    }
}

//Desired output: Pass