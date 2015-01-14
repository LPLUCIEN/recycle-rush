#include "OI.h"
#include "RobotMap.h"

OI::OI()
{
	// Process operator interface input here.
    joyDrv = new Joystick(0);
}



Joystick* OI::getJoyDrv() {
    return joyDrv;
}

double OI::getJoyDrvX(){
    return joyDrv->GetX();
}

double OI::getJoyDrvY(){
    return joyDrv->GetY();
}

double OI::getJoyDrvZ(){
    return joyDrv->GetZ();
}

double OI::getJoyDrvThrottle(){
    return (joyDrv->GetThrottle()-1.0)/2.0;
}
