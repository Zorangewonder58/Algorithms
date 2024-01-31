#include <iostream>
using namespace std;

void printArray(string label, int array[], int size)
{
    cout << label << ": "; 

    for(int i=0; i<size; i++)
    {
        cout << array[i] << " "; 
    }
}



int main()
{
    int example[5] = {0,1,2,3,4,5};

    printArray("Example", example, 5);
    return 0;
}