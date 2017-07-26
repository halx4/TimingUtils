#include "AbstractTimer.h"

AbstractTimer::AbstractTimer(){
	enabled=false;
	mode=ONETIME;
}        
//----------------------------
void AbstractTimer::setEnabled(bool en){
	mark=millis();
	enabled=en;
}
//----------------------------
void AbstractTimer::setInterval(unsigned long milliSeconds){
	interval=milliSeconds;
}
//----------------------------
void AbstractTimer::setIntervalSeconds(unsigned long seconds){
	interval=seconds*1000;
}
//----------------------------
void AbstractTimer::setIntervalMinutes(unsigned long minutes){	
	interval=minutes*60000;
}

//----------------------------
void AbstractTimer::setMode(TIMER_MODE newMode){
	mode=newMode;
}
//----------------------------
bool AbstractTimer::isEnabled(){
	return enabled;
}
//----------------------------