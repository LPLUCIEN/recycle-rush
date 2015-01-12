/*
 * Chassis.h
 *
 *  Created on: 10 Jan 2015
 *      Author: lucien
 */

#ifndef SRC_SUBSYSTEMS_CHASSIS_H_
#define SRC_SUBSYSTEMS_CHASSIS_H_

#include <WPILib.h>

class Chassis: public Subsystem {
    public:
        Chassis();
        ~Chassis();
        void InitDefaultCommand();
        void drive(double vX, double vY, double vR, double Throttle);
    private:
        Talon* driveMotorA;
        Talon* driveMotorB;
        Talon* driveMotorC;
        Talon* driveMotorD;
        Talon* driveMotorE;
        Talon* driveMotorF;

};



#endif /* SRC_SUBSYSTEMS_CHASSIS_H_ */
