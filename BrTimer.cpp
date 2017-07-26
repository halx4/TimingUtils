#include "BrTimer.h"


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


