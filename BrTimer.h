#ifndef BOOLEANRETURNINGTIMER_H
#define BOOLEANRETURNINGTIMER_H


#include "AbstractTimer.h"


class BrTimer : public AbstractTimer {
public:
	
	
	// this function must be called inside loop()
	boolean check();
	

	
};

#endif