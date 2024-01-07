#include <iostream>
using namespace std;
   
int main(){
    int count, i;
    string input[100], word;

    cout << "For searching an element ----> " << endl;
    cout << "\nEnter Number of Elements in Array : ";
    cin >> count;
     
    cout << "\nEnter any " << count << " Words \n";
      
    // Read array elements
    for(i = 0; i < count; i++){
        cout << "\n["<<i<<"] -> ";
        cin >> input[i];
    }
      
    cout << "\nEnter a word to search in array : ";
    cin >> word;
      
    // search num in inputArray from index 0 to elementCount-1 
    for(i = 0; i < count; i++){
        if(input[i] == word){
            cout << "\n"<<input[i]<<" found at [" <<i<<"]";
            // break;
        }
    }
    cout << "Element is not present in the array!";
      
    // if(i == count){
    //     cout  <<"\n"<<input[i]<<" Not Present in Array\n";
    // }
 
    return 0;
}