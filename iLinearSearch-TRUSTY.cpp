#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

//ALGORITHM: INSTRUMENTED ITERATIVE LINEAR SEARCH
//TEAM: TRUSTY JADEN WILLIAMS ASHIERA PRESTON

void show(string, int[], int);
int iLinearSearch(int[], int, int, int&);
void printSearch(int, int, string, string);
void printInstrumentedSearch(string, int, string, int, int);
int* pRand(int);

int main()
{
    //DECLARATIONS AND INITIALIZATIONS

    //Array of size 0
    int arr0[0] = {};

    //Array of size 1
    int arr1[1] = {14};

    //Array of size 2 
    int arr2[2] = {20, 7};

    //Array of size 8 
    int arr8[8] = {90, 25, 43, 5, 7, 21, 61, 75};

    //Array of size 16
    int* arr16 = pRand(16);

    //Array of size 64 
    int* arr64 = pRand(64);

    //Array of size 128 
    int* arr128 = pRand(128);

    int compares;

    //Array of test cases
    int* cases[] = {arr0, arr1, arr2, arr8, arr16, arr64, arr128};

    int keys[10] = {49, 32, 21, 70, 75, 55, 14, 7, 59, 90};

    show("\nSIZE 0", arr0, 0);
    show("\nSIZE 1", arr1, 1);
    show("\nSIZE 2", arr2, 2);
    show("\nSIZE 8", arr8, 8);
    show("\nSIZE 16", arr16, 16);
    //show("\nSIZE 64", arr64, 64);
    //show("\nSIZE 128", arr128, 128);

    show("\nKEYS", keys, 10);

    cout << endl << "\n===================Instrumented Search RESULTS======================\n" << endl;

    cout << endl << "\n=======================SEARCH CASE SIZE 0===========================\n" << endl;

    //Search array of size 0
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array0[0]", compares, iLinearSearch(arr0, 0, keys[i], compares));
        cout << endl;
    }

    cout << endl << "\n=========================SEARCH CASE SIZE 1=========================\n" << endl;

    //Search array of size 1
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array1[1]", compares, iLinearSearch(arr1, 1, keys[i], compares));
        cout << endl;
    }

    cout << endl << "\n=========================SEARCH CASE SIZE 2=========================\n" << endl;

    //Search array of size 2
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array2[2]", compares, iLinearSearch(arr2, 2, keys[i], compares));
        cout << endl;
    }

    cout << endl << "\n=========================SEARCH CASE SIZE 8=========================\n" << endl;

    //Search array of size 8
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array8[8]", compares, iLinearSearch(arr8, 8, keys[i], compares));
        cout << endl;
    }

    cout << endl << "\n=========================SEARCH CASE SIZE 16========================\n" << endl;

    //Search array of size 16
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array16[16]", compares, iLinearSearch(arr16, 16, keys[i], compares));
        cout << endl;
    }

    cout << endl << "\n=========================SEARCH CASE SIZE 64========================\n" << endl;

    //Search array of size 64
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array64[64]", compares, iLinearSearch(arr64, 64, keys[i], compares));
        cout << endl;
    }

    cout << endl << "\n=========================SEARCH CASE SIZE 128=======================\n" << endl;

    //Search array of size 128
    for(int i=0; i < 10; i++)
    {
        compares = 0;
        printInstrumentedSearch("iLinearSearch", keys[i], "Array128[128]", compares, iLinearSearch(arr128, 128, keys[i], compares));
        cout << endl;
    }


    return 0;
}

//ARRAY PRINTING FUNCTION
void show(string label, int array[], int size)
{
    cout << label << ": "; 

    for(int i=0; i<size; i++)
    {
        cout << array[i] << " "; 
    }

    cout << "END\n";
}

//ITERATIVE LINEAR SEARCH
int iLinearSearch(int array[], int size, int key, int &compares)
{
    for(int i=0; i < size; i++)
    {
        compares++;
        if(array[i] == key)
            return i;
    }
        return -1;// Element not found
}

//SEARCH RESULT PRINT
void printSearch(int position, int key, string label, string searchtype)
{
    cout << label << ": \n"; 
    if (position == -1)
        cout << setw(3) << key << " -- MISSING USING " << searchtype<< endl;
    else
        cout << setw(3) << key << " -- FOUND USING " << searchtype <<  " AT INDEX: " << position << endl;
}

void printInstrumentedSearch(string label, int key, string arrayname, int compares, int position)
{
    if(position != -1)
        cout << label << ": KEY " << key << " FOUND in ARRAY " << arrayname << ": " << compares << " COMPARES";
    else 
        cout << label << ": KEY " << key << " MISSING from ARRAY " << arrayname << ": " << compares << " COMPARES";
}

//PSEUDORANDOM ARRAY GENERATOR
int* pRand(int size) {
    random_device rd;
    mt19937 gen(rd());
    int* random_numbers = new int[size];
    uniform_int_distribution<int> distribution(0, 100);
    for (int i = 0; i < size; ++i) {
        random_numbers[i] = distribution(gen);
    }

    return random_numbers;
}


