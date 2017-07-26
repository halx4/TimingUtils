#include "CbTimer.h"

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
void CbTimer::setCallback(timer_callback f){

	callback=f;



}

//----------------------------


