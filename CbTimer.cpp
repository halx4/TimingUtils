#include "CbTimer.h"
#include <arduino.h>

CbTimer::CbTimer(){
	enabled=false;
	mode=ONETIME;
}        
//----------------------------
void CbTimer::setEnabled(bool en){
	mark=millis();
	enabled=en;
}
//----------------------------
void CbTimer::setInterval(unsigned long milliSeconds){
	interval=milliSeconds;

}
//----------------------------
void CbTimer::setIntervalSeconds(unsigned long seconds){
	interval=seconds*1000;

}
//----------------------------
void CbTimer::setIntervalMinutes(unsigned long minutes){
	interval=minutes*60000;
}
//----------------------------
void CbTimer::setCallback(timer_callback f){
	callback=f;

}
//----------------------------
void CbTimer::setMode(TIMER_MODE newMode){
	mode=newMode;

}
//----------------------------
bool CbTimer::isEnabled(){
	return enabled;

}
//----------------------------
void CbTimer::check(){
	if(enabled){      
		if(millis() - mark >= interval ){
			
			if(mode==ONETIME)enabled=false;
			else if (mode==REPEATING)setEnabled(true);   //restart timer
			(*callback)();
		}                          
		
	}
}
//----------------------------


