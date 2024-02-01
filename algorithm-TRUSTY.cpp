#include <iostream>
using namespace std;

//ALGORITHM: ITERATIVE LINEAR SEARCH
//TEAM: TRUSTY JADEN WILLIAMS ASHIERA PRESTON


//ARRAY PRINTING FUNCTION
void printArray(string label, int array[], int size)
{
    cout << label << ": "; 

    for(int i=0; i<size; i++)
    {
        cout << array[i] << " "; 
    }
}

//ITERATIVE LINEAR SEARCH
int ItrLinearSearch(int array[], int size, int key)
{
    for(int i=0; i < size; i++)
    {
        if(array[i] == key)
            return i;
    }
        return -1;// Element not found
}

//SEARCH RESULT PRINT
void PrintSearch(int position, int key)
{
    if(position == -1)
        cout  << key << " MISSING" << endl;
    else
        cout << key << " FOUND AT INDEX: " << position << endl;


}


int main()
{
    int example[20] = {67,22,95,11,56,78,33,89,44,5,70,14,99,38,73,20,81,50,7,65};
    int keys[10] = {67, 90, 25, 65, 63, 76, 7, 99, 100, 32};

    printArray("Example", example, 20);
    cout << endl;
    printArray("Keys", keys, 10);

    cout << endl;

    cout << endl << "========RESULTS========" << endl;

    for(int i=0; i < 10; i++)
    {
        PrintSearch(ItrLinearSearch(example, 20, keys[i]), keys[i]);
    }

    cout << endl << " (c) 2024 TRUSTY  Jaden Williams Ashiera Preston  ";

    



    

    return 0;
}