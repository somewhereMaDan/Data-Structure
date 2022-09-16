#include<iostream>
#include<climits>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cout << "input a size: " << endl;
  cin >> n;
  int cont = INT_MIN;
  int cont1 = INT_MAX;

  int arrayN[n];

  for (int i = 0; i < n; i++)
  {
    cin >> arrayN[i];
  }

  for (int i = 0; i < n; i++)
  {
    cout << arrayN[i] << " ";
  }
  cout << endl;

  for (int  i = 0; i < n; i++)
  {
    cont = max(cont,arrayN[i]);
    cont1 = min(cont1,arrayN[i]);
    // if (arrayN[i]>cont)
    // {
    //   cont = arrayN[i];
    // }
    // if (arrayN[i]<cont1)
    // {
    //   cont1 = arrayN[i];
    // }
  }
  cout << "Maximun: " << cont << endl;
  cout << "Minimun: " << cont1 << endl;
  

  return 0;
}
