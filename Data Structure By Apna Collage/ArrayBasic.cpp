#include <iostream>
#include<climits>
#define SIZE 50
using namespace std;

int main(int argc, char const *argv[])
{
    int array[40];
    int i,min,max,size;

    cout << "Enter the size of array"<< endl;
    cin >> size;

    cout << "Enter "<< size << " elements of an array: " << endl;

    for (i = 0; i < size; i++)
    {
        cin >> array[i];

        max = array[0];
        min = array[0];
    }
    for (i = 1; i < size; i++) // i initial value is 1 because we already out the 0 index value in max,min
    {
        if (array[i] > max)
        {
            max = array[i];
        }else if (array[i] < min)
        {
            min = array[i];
        }   
    }
    cout << endl;
    cout << "Maximun value of the array is: " << max << endl;
    cout << "Minimun value of the array is: " << min << endl;

    return 0;
}

