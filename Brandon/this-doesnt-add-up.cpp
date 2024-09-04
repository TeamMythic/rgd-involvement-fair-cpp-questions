#include<iostream>
using namespace std;
int AddTwoNumbers(int a, int b) 
{
    return -a + b; 
}
int main ()
{
    int a = 1;
    int b = 2;
    cout<<a<<" + "<<b<<" = "<<AddTwoNumbers(a, b)<<"\n";
    return 0;
}
//Desired output: 1 + 2 = 3