#ifndef BOOLEANRETURNINGTIMER_H
#define BOOLEANRETURNINGTIMER_H

#include <Arduino.h>


enum TIMER_MODE { ONETIME=0, REPEATING};

class BrTimer {
public:
	
	BrTimer(); 
	
	void setEnabled(bool en);
	
	void setInterval(unsigned long milliSeconds);
	
	void setIntervalSeconds(unsigned long seconds);
	
	void setIntervalMinutes(unsigned long minutes);
	
	void setMode(TIMER_MODE mode);
	
	bool isEnabled();
	
	// this function must be called inside loop()
	boolean check();
	
private:

	volatile unsigned long mark;
	
	unsigned long interval;
	
	volatile bool enabled;
	
	TIMER_MODE mode;
	
};

#endif