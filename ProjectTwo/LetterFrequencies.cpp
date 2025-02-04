#include <iostream>
#include <fstream> 
#include <string> 
#include <cctype>
using namespace std; 


 ifstream InputFile;
 string fileName; 
  char letters[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
            'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
 unsigned int count[26];

 void getFile(){
    do {
    cout << "Enter the correct file name: "; 
    cin >> fileName; 
    
    if(fileName == "Project02-input.txt"){
        InputFile.open(fileName); 
        break;
    }
    }while(fileName != "Project02-input.txt");
 }

void readFile(){
 char letter; 
 while(InputFile >> letter){
    if(isalpha(letter)){
    for (int i = 0; i < 26; i++)
    {
      if(letters[i] == toupper(letter)){
           count[i]++;
      }
    }
 }
 } 
InputFile.close();
}

void displayCount(){
    for(int i = 0; i < 26; i++){
        cout << letters[i] << ":  " << count[i] << endl;
    }
}

void sort(){
 int tmp; 
 int tmp2;
  for(int i = 0; i < 26; i++){
    for(int j = 0; j < 26; j++){
      if(count[i] > count[j]){
        tmp = count[i];
        count[i] = count[j];
        count[j] = tmp;

        tmp2 = letters[i];
        letters[i] = letters[j];
        letters[j] = tmp2;
      }
    }
  }
}

int main (){

     getFile(); 
     readFile();
     displayCount();
     cout << "\n"; 
     sort(); 
     displayCount(); 
     
    return 0;
} 