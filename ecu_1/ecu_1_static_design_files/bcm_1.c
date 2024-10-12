/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  bcm.c
 *     \brief basic communication module functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "door_sensor.h"
#include "speed_sensor.h"
#include "light_switch.h"
#include "switch.h"
#include "gpio.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/
 /******************************************************************************
* \Syntax          : void BCM_Init(void)
* \Description     : Initialize all modules needed by the application                             
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void BCM_Init(void)
{
	/*Initialize the GPIO*/
	GPIO_Init();
	/*Initialize the switch driver*/
	SWITCH_Init();
	/*Initialize the door sensor*/
	DOOR_Init();
	/*Initialize the light switch*/
	LIGHTSW_Init();
	/*Initialize the speed sensor*/
	SPEEDSEN_Init();

}
/******************************************************************************
* \Syntax          : void BCM_Update(void) 
* \Description     : Update the basic communciation                             
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void BCM_Update(void)
{
	/*Get the current OS tick*/
	/*if it is time to send the speed sensor status message (5msec)*/
	/*Get the speed sensor state reading ==> "SPEEDSEN_GetSpeed"*/
	/*Check if the CAN is ready and "CAN_GetStatus"*/
	/*send the sensor speed  to ECU 2*/
	
	/*if it is time to send the door sensor status message (10 msec)*/
	/*Get the door sensor state reading ==> "DOOR_GetState"*/
	/*Check if the CAN is ready and "CAN_GetStatus"*/
	/*send the door sensor status  to ECU 2*/
	
	/*if it is time to send the light switch status message (20 msec)*/
	/*Get the light switch state ==> "LIGHTSW_GetState"*/
	/*Check if the CAN is ready and "CAN_GetStatus"*/
	/*send the light switch state state to ECU 2*/
}