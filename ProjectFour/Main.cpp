#include <iostream> 
#include "Clock.h"
using namespace std; 

int main (){

    Clock defTime; //object for test case 1
    Clock time1(4, 15, 7); //object for test case 2
    Clock time2(16, 50, 1); //object for test case 3
    Clock time3(20, 65, 100); //object for test case 4
   
    cout << "Test Case 1\n"; 
    defTime.show();
    defTime.toggleFormat();
    defTime.show();
    defTime.tick();
    defTime.toggleFormat();
    defTime.show();
  
    cout << "\n";

    cout << "Test Case 2\n"; 
    time1.show(); 
    time1.toggleFormat(); 
    time1.show();
    time1.tick();
    time1.toggleFormat();
    time1.show(); 

    cout << "\n";

    cout << "Test Case 3\n";
    time2.show();
    time2.toggleFormat();
    time2.show(); 
    time2.tick(); 
    time2.toggleFormat();
    time2.show();

    cout << "\n";

    cout << "Test Case 4\n"; 
    time3.show();
    time3.toggleFormat();
    time3.show(); 
    time3.tick(); 
    time3.toggleFormat();
    time3.show();

    return 0;
}
