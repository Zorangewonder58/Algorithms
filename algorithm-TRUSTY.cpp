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
    int example[5] = {0,1,63,90,4};
    int keys[5] = {0, 90, 25, 33, 63};

    printArray("Example", example, 5);
    printArray("Keys", keys, 5);

    for(int i=0; i < 5; i++)
    {
        PrintSearch(ItrLinearSearch(example, 5, keys[i]), keys[i]);
    }

    cout << endl << " (c) 2024 TRUSTY  Jaden Williams Ashiera Preston  ";

    



    

    return 0;
}