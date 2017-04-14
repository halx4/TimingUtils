#ifndef CALLINGBACKTIMER_H
#define CALLINGBACKTIMER_H


typedef void (*timer_callback)(void);
enum TIMER_MODE { ONETIME=0, REPEATING};

class CbTimer {
public:
	
	CbTimer(); 
	
	void setEnabled(bool en);
	
	void setInterval(unsigned long milliSeconds);
	
	void setIntervalSeconds(unsigned long seconds);
	
	void setIntervalMinutes(unsigned long minutes);
	
	void setCallback(timer_callback f);
	
	void setMode(TIMER_MODE mode);
	
	bool isEnabled();
	
	// this function must be called inside loop()
	void check();
	
private:

	volatile unsigned long mark;
	
	// pointer to the callback functions
	timer_callback callback;
	
	unsigned long interval;
	
	volatile bool enabled;
	
	TIMER_MODE mode;
	
};

#endif