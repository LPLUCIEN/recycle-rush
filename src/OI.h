#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
    Joystick* joyDrv;

public:
	OI();
	Joystick *getJoyDrv();
	double getJoyDrvX();
	double getJoyDrvY();
	double getJoyDrvZ();
	double getJoyDrvThrottle();



};

#endif
