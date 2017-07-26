#ifndef CALLINGBACKTIMER_H
#define CALLINGBACKTIMER_H

#include "AbstractTimer.h"

typedef void (*timer_callback)(void);


class CbTimer : public AbstractTimer {
public:
	
	void check();
	
	void setCallback(timer_callback f);

private:

	// pointer to the callback functions
	timer_callback callback;
	
};

#endif