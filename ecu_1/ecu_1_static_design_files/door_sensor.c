/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  door_sensor.c
 *     \brief door sensor API functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "door_sensor.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/
#define DOOR_SWITCH_RATE_MS						(10)
/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
	static DOOR_StateType doorState;
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
* \Syntax          :  void DOOR_Init(void);    
* \Description     : Initialize the door sensor initial state                              
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void DOOR_Init(void)
 {
	/*Set the door initial state; close or open*/
 }
 
/******************************************************************************
* \Syntax          : void DOOR_Update(void)
* \Description     : Update the state of the door sensor switch.                        
*                                                                           
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *									 
* \Parameters (out): None                                                  
* \Return value:   : None                                 
*******************************************************************************/
void DOOR_Update(void)
{
	/*Get timer tick*/
	/*Check if it is time to update the sensor (TIMER_GetTimerCounts/DOOR_SWITCH_RATE_MS)*/
	/*Get the switch state by calling the function "SWITCH_GetState*/
	/*Assign the new value to the local variable "doorState"*/
	/*Check if the CAN bus is free by calling the function "CAN_GetStatus" */
	/*send the speed sensor reading by calling the function CAN_Write()*/
}

/******************************************************************************
* \Syntax          :  void DOOR_GetState(void);     
* \Description     : Get the state of the door sensor switch; open or close                                
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : DOOR_StateType: 	DOOR_CLOSE, DOOR_OPEN                                  
*******************************************************************************/
static DOOR_StateType DOOR_GetState(void)
{
		return(doorState);
}
/**********************************************************************************************************************
 *  END OF FILE: door_sensor.c
 *********************************************************************************************************************/