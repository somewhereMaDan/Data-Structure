#include <iostream>
using namespace std;

void sort(int a[], int n){
    int i,j, key;
    for (int i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j = j - 1;
        }
        a[j+1] = key;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {8,6,5,10,9};
    int n = sizeof(a);
    sort(a,n);
    
    return 0;
}
