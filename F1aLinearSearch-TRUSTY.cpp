#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

//ALGORITHM: ITERATIVE LINEAR SEARCH
//TEAM: TRUSTY JADEN WILLIAMS ASHIERA PRESTON

void show(string, int[], int);
int itrLinearSearch(int[], int, int);
void printSearch(int, int, string);
int* pRand(int);

int main()
{
    int test[20] = {67,22,95,11,56,78,33,89,44,5,70,14,99,38,73,20,81,50,7,65};
    int* arr0 = {};
    int* arr1 = pRand(1);
    int* arr2 = pRand(2);
    int* arr10 = pRand(10);
    int* arr100 = pRand(100);
    int* arr1000 = pRand(1000);

    int* cases[] = {test, arr0, arr1, arr2, arr10, arr100, arr1000};
    int keys[10] = {67, 14, 25, 65, 80, 78, 7, 98, 100, 32};

    show("\nSIZE 0", arr0, 0);
    show("\nSIZE 1", arr1, 1);
    show("\nSIZE 2", arr2, 2);
    show("\nSIZE 10", arr10, 10);
    //show("\nSIZE 100", arr100, 100);
    //show("\nSIZE 1000", arr1000, 1000);
    show("\nTEST ARRAY", test, 20);

    cout << endl;
    show("KEYS", keys, 10);

    cout << endl;

    cout << endl << "\n==========RESULTS==========\n" << endl;

    //Search test array
    for(int i=0; i < 10; i++)
    {
        printSearch(itrLinearSearch(test, 20, keys[i]), keys[i], "TEST ARRAY");
    }

    cout << endl << endl;

    //Search array of size 0
    for(int i=0; i < 10; i++)
    {
        printSearch(itrLinearSearch(arr0, 0, keys[i]), keys[i], "SIZE 0");
    }

    cout << endl << endl;

    //Search array of size 1
    for(int i=0; i < 10; i++)
    {
        printSearch(itrLinearSearch(arr1, 1, keys[i]), keys[i], "SIZE 1");
    }

    cout << endl << endl;

    //Search array of size 2
    for(int i=0; i < 10; i++)
    {
        printSearch(itrLinearSearch(arr2, 2, keys[i]), keys[i],"SIZE 2");
    }

    cout << endl << endl;

    //Search array of size 10
    for(int i=0; i < 10; i++)
    {
        printSearch(itrLinearSearch(arr10, 10, keys[i]), keys[i],"SIZE 10");
    }

    //Search array of size 100, DO NOT PRINT
    for(int i=0; i < 10; i++)
    {
        itrLinearSearch(arr100, 100, keys[i]);
    }

    //Search array of size 1000, DO NOT PRINT
    for(int i=0; i < 10; i++)
    {
        itrLinearSearch(arr1000, 1000, keys[i]);
    }

    cout << endl << "(c) 2024 TRUSTY  Jaden Williams Ashiera Preston\n  ";

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
int itrLinearSearch(int array[], int size, int key)
{
    for(int i=0; i < size; i++)
    {
        if(array[i] == key)
            return i;
    }
        return -1;// Element not found
}

//SEARCH RESULT PRINT
void printSearch(int position, int key, string label)
{
    cout << label << ": \n"; 
    if (position == -1)
        cout << setw(3) << key << " -- MISSING" << endl;
    else
        cout << setw(3) << key << " -- FOUND AT INDEX: " << position << endl;
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
