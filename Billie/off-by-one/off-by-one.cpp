/*
    Rebel Game Devs - Involvement Fair C++ Challenge
*/

#include <cstdlib>
#include <iostream>
#include "helper.h"
using namespace std;

int main()
{
    // Sets up an array with ten elements
    int array[10];
    generate_random_array(array, 10);

    // Your code starts here

    // Print out the contents of our array
    cout << "The listed array contains the following:\n";
    for (int i : array)
    {
        cout << i << ", ";
    }
    cout << endl;

    // Print out a specific element of the array
    auto final_array_value = array[10];
    cout << "Accessing the last element of the array: " << final_array_value << endl;

    // Your code ends here

    #pragma region
    if (test_array_result(array, 10, final_array_value))
    {
        cout << "Correct!" << endl;
    }
    else
    {
        cout << "Incorrect!" << endl;
        return EXIT_FAILURE;
    }
    #pragma endregion

    return EXIT_SUCCESS;
}