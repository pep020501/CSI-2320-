#include <iostream>
using namespace std; 

int main(){

int n; 
cout << "Please enter in a value for 'n' from 2 to 20" << endl;
cin >> n; 
if(n < 2 || n > 20){
    cout << "Please enter a valid value of 'n' in the requested range." << endl;
}
else{
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n-i; j++){
            cout << " ";
        }

        for(int j = 0; j < (2*i) + 1; j++){
            cout << "*";
        }
         cout << "\n";
    } 
   

    for(int i = n + 1; i <= 2*n; i++){
        for(int j = 0; j < i - n; j++){
            cout << " ";
        }

        for(int j = 0; j < (4*n) - (2*i) + 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
    return 0;

}