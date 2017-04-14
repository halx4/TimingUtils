#include "BrTimer.h"


BrTimer::BrTimer(){
	enabled=false;
	mode=ONETIME;
	
}        
//----------------------------
void BrTimer::setEnabled(bool en){
	mark=millis();
	enabled=en;
}
//----------------------------
void BrTimer::setInterval(unsigned long milliSeconds){
	interval=milliSeconds;

}
//----------------------------
void BrTimer::setIntervalSeconds(unsigned long seconds){
	interval=seconds*1000;

}
//----------------------------
void BrTimer::setIntervalMinutes(unsigned long minutes){
	
	interval=minutes*60000;
}

//----------------------------
void BrTimer::setMode(TIMER_MODE newMode){
	mode=newMode;

}
//----------------------------
bool BrTimer::isEnabled(){
	return enabled;

}
//----------------------------
boolean BrTimer::check(){
	if(enabled){      
		if(millis() - mark >= interval ) {
			
			if(mode==ONETIME)enabled=false;
			else if (mode==REPEATING)setEnabled(true);   //restart timer
			return true;
		}
		
	}
	return false;
}
//----------------------------


