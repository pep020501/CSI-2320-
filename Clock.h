#ifndef CLOCK_H
#define CLOCK_H

class Clock
{
private: 
int hours;
int minutes; 
int seconds; 
bool twelveFormat; 

public: 
Clock();
Clock(int, int, int);
void toggleFormat();
void show(); 
void tick(); 

}; 


#endif