#pragma config(Motor,  port6,           frontRight,    tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           backRight,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           frontLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeft,      tmotorVex393_MC29, openLoop)
//#pragma config(Motor,  port6,           motorClaw,     tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//
//All positive motor speed values move that motor foward


task main()
{
	//float minControl = 90;
	//float strafeSpeed = 127/2;
	//float turnSpeed = 127/2;
	//Loop Forever
	//Tank uses Ch 2 and Ch3
	//Strafe use Ch 1
	//Turn in Place use Ch 4
	while(1 == 1)
	{
		//Remote Control Commands

		//Tank Drive
		motor[frontRight] 	= - vexRT[Ch2]/4 + vexRT[Ch1]/4 + vexRT[Ch4]/3;
		motor[backRight] 		= - vexRT[Ch2]/4 - vexRT[Ch1]/4 + vexRT[Ch4]/3;
		motor[frontLeft] 		= vexRT[Ch3]/4 + vexRT[Ch1]/4 + vexRT[Ch4]/3;
		motor[backLeft] 		= vexRT[Ch3]/4 - vexRT[Ch1]/4 + vexRT[Ch4]/3;

		/*if(vexRT[Ch1] < - minControl)
		{
			//Strafe left
			//left frontRight forward
			//left backRight backward
			//frontLeft backward
			//backLeft froward
			while (vexRT[Ch1] < - minControl)
			{
				motor[frontRight] 	= strafeSpeed;
				motor[backRight] 		= - strafeSpeed;
				motor[frontLeft] 		= - strafeSpeed;
				motor[backLeft] 		= strafeSpeed;
			}
		}

		if(vexRT[Ch1] > minControl)
		{
			//Strafe right
			while (vexRT[Ch1] > minControl)
			{
				motor[frontRight] 	= - strafeSpeed;
				motor[backRight] 		= strafeSpeed;
				motor[frontLeft] 		= strafeSpeed;
				motor[backLeft] 		= - strafeSpeed;
			}
		}

		if(vexRT[Ch4] > minControl)
		{
			//Turn Left
			while (vexRT[Ch4] > minControl)
			{
				motor[frontRight]			= - turnSpeed;
				motor[backRight]			= - turnSpeed;
				motor[frontLeft]			= turnSpeed;
				motor[backLeft]				= turnSpeed;
			}
		}

		if(vexRT[Ch4] < - minControl)
		{
			//Turn Right
			while (vexRT[Ch4] < - minControl)
			{
				motor[frontRight]			= turnSpeed;
				motor[backRight]			= turnSpeed;
				motor[frontLeft]			= - turnSpeed;
				motor[backLeft]				= - turnSpeed;
			}
		}
	*/
	}
}
