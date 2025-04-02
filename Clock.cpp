#include <iostream> 
#include "Clock.h"
#include <iomanip>

using namespace std; 

 Clock::Clock()
 {
  hours = 0;
  minutes = 0;
  seconds = 0; 
  twelveFormat = false;
}

Clock::Clock(int H, int M, int S){
    if(H > 24 || M > 60 || S > 60) {
        hours = 0;
        minutes = 0; 
        seconds = 0;
        twelveFormat = false;
    }  
    else {
    hours = H;
    minutes = M; 
    seconds = S;
    twelveFormat = false;
    }
}
void Clock::toggleFormat(){
     twelveFormat = true;
}

void Clock::show() {
    if (twelveFormat) {
        string period; 
        int hoursDisplay = hours;
        if(hours >= 12){
            period="PM";
        }
        else {
            period="AM";
        }
        if(hours == 0){
            hoursDisplay = 12;
        }
        else if(hours > 12){
            hoursDisplay -= 12;
        }
        
        cout << setw(2) << setfill('0') << hoursDisplay << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << " "
             << period << endl;
    } else {
        
        cout << setw(2) << setfill('0') << hours << ":"
             << setw(2) << setfill('0') << minutes << ":"
             << setw(2) << setfill('0') << seconds << endl;
    }
}

void Clock::tick(){
  seconds++;
  
}

