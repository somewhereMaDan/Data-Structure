#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
  string s1 = "fam"; 
  string s2 = "ily";

// APPEND
  s1.append(s2); // s1 = s1 + s2
  cout << s1;

  cout << "\n" << s1[1];

  // CLEAR,EMPTY
  string abc = "yuvrgbyuadrvafgbykg vuirhnfgi";
  abc.clear();
  cout << abc << endl;
  if (abc.empty())
  {
    cout << "abc string is empty" << endl;
  }

  // COMPARE
  if (!s1.compare(s2))
  {
    cout << "strings are equal" << endl;
  }else{ cout << "not equal" << endl ; }

  // ERASE
  string f1 = "nincompoop";
  f1.erase(2,3);
  cout << f1 << endl;
  
  // FIND
  cout << f1.find("poop") << endl;

  // INSERT
  f1.insert(2,"lol");
  cout << f1 << endl;
  cout << f1.length() << endl;

  for (int i = 0; i < f1.length(); i++)
  {
    cout << f1[i] << endl;
  }
  
  // SUBSTRING
  string sub = f1.substr(5,5);
  cout << sub << endl;

  // CONVERSION
  string conv = "717";
  int x = stoi(conv);
  cout << x+4 << endl;

  int y = 717;
  cout << to_string(x) + "2" << endl;

  // SORT
  string srt = "madan";
  sort(srt.begin(), srt.end());
  cout << srt << endl;

  string str;
  // string str1(5,'n');
  getline(cin, str); // this will not continue in a whole line without ignoring a space
  // cin >> str; if we use this input will be ignored after a space
  cout << str << endl;

  return 0;
}
