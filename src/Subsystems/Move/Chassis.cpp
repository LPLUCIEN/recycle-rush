#include "Chassis.h"
#include "../../RobotMap.h"

Chassis :: Chassis(): Subsystem("Chassis"){
    drivemotorA = new Talon(DRIVE_MOTOR_A_PWM);
    drivemotorB = new Talon(DRIVE_MOTOR_B_PWM);
    drivemotorC = new Talon(DRIVE_MOTOR_C_PWM);
    drivemotorD = new Talon(DRIVE_MOTOR_D_PWM);

}

Chassis :: ~Chassis(){
    delete drivemotorA;
    delete drivemotorB;
    delete drivemotorC;
    delete drivemotorD;
}

void Chassis :: drive(double vX, double vY, double vZ, double Throttle){
    double vMotor[4];

    vMotor[0] = 0 - vY - vZ;
    vMotor[1] = vX + 0 - vZ;
    vMotor[2] = 0 + vY - vZ;
    vMotor[3] = -vX + 0 - vZ;

    double vmax = 1.0;
    for (int i; i < 4; ++i){
        if(abs(vMotor[i])> vmax){
            vmax = abs(vMotor[i]);
        }
    }
    for (int i; i < 4; ++i){
        vMotor[i] = vMotor[i]/vmax*Throttle;
    }
}

void Chassis :: InitDefaultCommand(){

}
