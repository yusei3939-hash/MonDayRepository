#include <iostream>

using namespace std;

int main() {

    int numbers[5] = { 35, 82, 17, 96, 54 };
    int* pNumber = numbers;
    int  maxNumber= *pNumber;

    for (int i = 1; i < 5; i++) 
    {

        if ( maxNumber < * (pNumber + i))
        {

            maxNumber = *(pNumber + i);

        }

    }

    cout << "Å‘å’l: " << maxNumber << endl;

    return 0;

}

