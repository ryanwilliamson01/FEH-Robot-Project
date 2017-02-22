/*
 *  - OFFICIAL MINECRAFT ROBOT TEAM -
 *
 *  Group C6
 *  Joe Forsman / Carson McCasland / Bailey Mulhern / Ryan Williamson
 *
 *  Code Outline
 *  Version 4.0
 *  2/21/17 12:48PM
 *
 */

#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>


#include "motormethods.h"
#include "sensormethods.h"
//#include "utilitymethods.h"


//Defining Tasks
#define TASK_DRIVE_FORWARD 0
#define TASK_DRIVE_BACKWARDS 1
#define TASK_TURN_LEFT 2
#define TASK_TURN_RIGHT 3
//Defining States
#define STATE_ON_LINE 0
#define STATE_OFF_LINE_LEFT 1
#define STATE_OFF_LINE_RIGHT 2

//Set CdS Cell Thresholds
double lightThresholdBlue; //***To be assigned during the calibration process***
double lightThresholdRed;
double lightThresholdNone;
//Set OptoSensor Thresholds
double lineThresholdOrangeLeft;
double lineThresholdOrangeMiddle;
double lineThresholdOrangeRight;



int main(void)
{
    lightThresholdNone = setCdSThreshold();
    lightThresholdRed = setCdSThreshold();

    LCD.Clear(FEHIO::Black);
    LCD.SetFontColor(FEHIO::White);
    LCD.WriteLine("No light threshold average: " + lightThresholdeNone);
    LCD.WriteLine("Red light threshold average: " + lightThresholdeRed);

    Sleep(5000);

    DriveForward(20);

    Sleep(5000);

    //TokyoDrift(20);

    return 0;
}
