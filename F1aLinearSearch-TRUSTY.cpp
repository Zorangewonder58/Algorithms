#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

//ALGORITHM: ITERATIVE LINEAR SEARCH
//TEAM: TRUSTY JADEN WILLIAMS ASHIERA PRESTON

void show(string, int[], int);
int itrLinearSearch(int[], int, int);
void printSearch(int, int);
int* pRand(int);

int main()
{
    int test[20] = {67,22,95,11,56,78,33,89,44,5,70,14,99,38,73,20,81,50,7,65};
    //int arr0[] = {};
    //int* arr1 = pRand(1);
    //int* arr1 = pRand(1);
    int keys[10] = {67, 90, 25, 65, 63, 76, 7, 99, 100, 32};

    show("\nTEST ARRAY", test, 20);
    cout << endl;
    show("KEYS", keys, 10);

    cout << endl;

    cout << endl << "\n==========RESULTS==========\n" << endl;

    for(int i=0; i < 10; i++)
    {
        printSearch(itrLinearSearch(test, 20, keys[i]), keys[i]);
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

    cout << "END";
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
void printSearch(int position, int key)
{
    if (position == -1)
        cout << setw(3) << key << " -- MISSING" << endl;
    else
        cout << setw(3) << key << " -- FOUND AT INDEX: " << position << endl;
}

//PSEUDORANDOM ARRAY GENERATOR
/*int* pRand(int size) {
    random_device rd;
    mt19937 gen(rd());
    int* random_numbers = new int[size];
    uniform_int_distribution<int> distribution(0, 100);
    for (int i = 0; i < size; ++i) {
        random_numbers[i] = distribution(gen);
    }

    return random_numbers;
}*/
