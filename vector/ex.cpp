#include<iostream>
#include<vector>
using namespace std;

int main(int argc, char const *argv[])
{
  vector<int> vec;

  cout << "size: " << vec.size() << endl;
  cout << "capacity: " << vec.capacity() << endl;

  // when size is greater than capacity the capacity gets doubled
  vec.push_back(1);
  cout << "size: " << vec.size() << endl;
  cout << "capacity: " << vec.capacity() << endl;

  vec.push_back(1);
  cout << "size: " << vec.size() << endl;
  cout << "capacity: " << vec.capacity() << endl;

  vec.push_back(1);
  cout << "size: " << vec.size() << endl;
  cout << "capacity: " << vec.capacity() << endl;

  vec.push_back(1);
  cout << "size: " << vec.size() << endl;
  cout << "capacity: " << vec.capacity() << endl;

  vec.push_back(1);
  cout << "size: " << vec.size() << endl;
  cout << "capacity: " << vec.capacity() << endl;
  return 0;
}
