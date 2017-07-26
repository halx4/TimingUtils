#ifndef ABSTRACTTIMER_H
#define ABSTRACTTIMER_H

#include <Arduino.h>

enum TIMER_MODE { ONETIME=0, REPEATING};

class AbstractTimer {
public:
	
	AbstractTimer(); 
	
	void setEnabled(bool en);
	
	void setInterval(unsigned long milliSeconds);
	
	void setIntervalSeconds(unsigned long seconds);
	
	void setIntervalMinutes(unsigned long minutes);
	
	void setMode(TIMER_MODE mode);
	
	bool isEnabled();
	
	
protected:

	volatile unsigned long mark;
	
	unsigned long interval;
	
	volatile bool enabled;
	
	TIMER_MODE mode;
	
};

#endif