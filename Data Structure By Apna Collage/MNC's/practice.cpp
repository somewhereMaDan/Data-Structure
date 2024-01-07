#include <iostream>
using namespace std;

class practice
{
private:
    int a, b;
public:
    void one(){
        int x,y;
        cin >> x;
        cin >> y;
        a = x;
        b = y;
        // cout << a;
    }
    void show(){
        cout << a << endl;
        cout << b;
    }
};
int main(int argc, char const *argv[])
{
    practice p;
    p.one();
    p.show();
    return 0;
}


