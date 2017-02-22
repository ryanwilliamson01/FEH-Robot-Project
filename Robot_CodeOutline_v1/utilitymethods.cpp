/*
 *  - OFFICIAL MINECRAFT ROBOT TEAM -
 *
 *  Group C6
 *  Joe Forsman / Carson McCasland / Bailey Mulhern / Ryan Williamson
 *
 *  Utility Methods
 *  Version 1.0
 *  2/21/17 12:57PM
 *
 */

#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHUtility.h>
#include <FEHMotor.h>
#include <FEHServo.h>

#include "utilitymethods.h"

/*
 * Begins a start screen to be pressed
 *
 * @return true if the screen has been pressed, false while it has not been pressed
 */
void WaitToStart()
{
    float x,y;

    LCD.Clear( FEHLCD::Black );
    LCD.SetFontColor( FEHLCD::White );

    LCD.WriteLine("Press the Screen to Begin");

    while(!LCD.Touch(&x,&y))
    {
        Sleep(50);
    }

    LCD.Clear(FEHLCD::Black);
    LCD.WriteLine("Starting in 2 seconds...");
    Sleep(2000);
}

/*
 * Calibrates all motors and sensors
 *
 * @return true if all motors and sensors were initialized correctly, false if anything went wrong or needs attention
 */
bool Calibrate()
{
    /*
     * INSERT CODE HERE
     */
}

/*
 * Displays all important values to the screen for use in debugging the robot
 */
void Display()
{
    /*
     * INSERT CODE HERE
     */
}
