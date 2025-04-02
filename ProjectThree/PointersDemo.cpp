#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

int *duplicate (int *, int);
int *generate(unsigned int);
void display(int *, int);

int main(){
//Part 1
int size = 5; 
int *originalArray = new int[size]{25, 43, 67, 20, 78}; 

cout << "Part 1" << endl;
cout << "Original: ";
for(int i = 0; i < size; i++){ 
    cout << originalArray[i] << " ";
}
int *duplicateArray = duplicate(originalArray, size); 
cout << "\n";
cout << "Copy: ";
for(int i = 0; i < size * 2; i++){
    cout << duplicateArray[i] << " "; 
}
delete [] originalArray; 
delete [] duplicateArray; 
cout << "\n";

//Part 2 
cout << "\nPart 2" << endl;
unsigned int num; 
cout << "Enter a value for num: "; 
cin >> num; 
generate(num);
cout << "\n";

//Part 3 
cout << "Part 3" << endl; 
int SIZE = 10;
int *displayArray = new int[SIZE]{5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
display(displayArray, SIZE); 

return 0;
}

int *duplicate(int *array, int size){
    int copySize = 2 * size;
    int *arrayCopy = new int[copySize]; 
    for(int i = 0; i < size; i++){
       arrayCopy[2 * i] = array[i];
       arrayCopy[2 * i + 1] = array[i];
    }
    return arrayCopy;
}

int *generate(unsigned int n){
    int *dynamArray = new int[n];
      srand(static_cast<unsigned int>(time(0)));
    for(unsigned int i = 0; i < n; i++){
        dynamArray[i] = rand() % 100;
        cout << dynamArray[i] << " "; 
    }
    cout << "\n";                                                                                       
    return dynamArray; 
}

void display(int *array, int size){
   
    for (int i = 0; i < size; i++){
         cout << array[i] << " ";
        if((i + 1) % 8 == 0){
            cout << endl;
        }   
        }
    
}