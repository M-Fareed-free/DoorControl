/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  door_control.c
 *     \brief API functions for controlling the automotive door according to the given requirements
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "door_control.h"
#include "buzzer.h"
#include "lights.h"
#include "messages_handler.h"
#include "output.h"
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
* \Syntax          : void CTRLDOOR_Update(void)    
* \Description     : Implements the door control functionality                                 
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void CTRLDOOR_Update(void)
{
	/*Get the door state from the messages handler; opened or closed*/
	/*Get the light switch state from the message handler; pressed or released*/
	/*Get the car motion state (moving or not via the measured speed)*/
	
	/*If the door is opened while the car is moving ? Buzzer ON, Lights OFF*/
	BUZZER_SetState(BUZZER_ON);
	LIGHT_SetState(LIGHT_LEFT, LIGHT_OFF);
	LIGHT_SetState(LIGHT_RIGHT, LIGHT_OFF);
		/*OR use a different solution by using a single output interface module to turn the lights and buzzer On or Off*/
	OUTHANDLE_SetState(OUTHANDLE_LEFT_LIGHT, OUTHANDLE_OFF);
	OUTHANDLE_SetState(OUTHANDLE_RIGHT_LIGHT, OUTHANDLE_OFF);
	OUTHANDLE_SetState(OUTHANDLE_BUZZER, OUTHANDLE_ON);	
		
	/*If the door is opened while the car is stopped ? Buzzer OFF, Lights ON*/
	BUZZER_SetState(BUZZER_OFF);
	LIGHT_SetState(LIGHT_LEFT, LIGHT_ON);
	LIGHT_SetState(LIGHT_RIGHT, LIGHT_ON);
		/*OR use a different solution by using a single output interface module to turn the lights and buzzer On or Off*/
	OUTHANDLE_SetState(OUTHANDLE_LEFT_LIGHT, OUTHANDLE_ON);
	OUTHANDLE_SetState(OUTHANDLE_RIGHT_LIGHT, OUTHANDLE_ON);
	OUTHANDLE_SetState(OUTHANDLE_BUZZER, OUTHANDLE_OFF);	
	
	/*If the door is closed while the lights were ON ?*/
	/*use the timer counts to start counting for 3 seconds*/
	/*After the 3 seconds passed*/
	BUZZER_SetState(BUZZER_OFF);
	LIGHT_SetState(LIGHT_LEFT, LIGHT_OFF);
	LIGHT_SetState(LIGHT_RIGHT, LIGHT_OFF);
		/*OR use a different solution by using a single output interface module to turn the lights and buzzer On or Off*/
	OUTHANDLE_SetState(OUTHANDLE_LEFT_LIGHT, OUTHANDLE_OFF);
	OUTHANDLE_SetState(OUTHANDLE_RIGHT_LIGHT, OUTHANDLE_OFF);
	OUTHANDLE_SetState(OUTHANDLE_BUZZER, OUTHANDLE_OFF);	
		
	/*If the car is moving and the light switch is pressed ? Buzzer OFF, Lights ON*/
	BUZZER_SetState(BUZZER_OFF);
	LIGHT_SetState(LIGHT_LEFT, LIGHT_ON);
	LIGHT_SetState(LIGHT_RIGHT, LIGHT_ON);
		/*OR use a different solution by using a single output interface module to turn the lights and buzzer On or Off*/
	OUTHANDLE_SetState(OUTHANDLE_LEFT_LIGHT, OUTHANDLE_ON);
	OUTHANDLE_SetState(OUTHANDLE_RIGHT_LIGHT, OUTHANDLE_ON);
	OUTHANDLE_SetState(OUTHANDLE_BUZZER, OUTHANDLE_OFF);	
	
	/*If the car is stopped and the light switch is pressed ? Buzzer ON, Lights ON*/
	BUZZER_SetState(BUZZER_ON);
	LIGHT_SetState(LIGHT_LEFT, LIGHT_ON);
	LIGHT_SetState(LIGHT_RIGHT, LIGHT_ON);
		/*OR use a different solution by using a single output interface module to turn the lights and buzzer On or Off*/
	OUTHANDLE_SetState(OUTHANDLE_LEFT_LIGHT, OUTHANDLE_ON);
	OUTHANDLE_SetState(OUTHANDLE_RIGHT_LIGHT, OUTHANDLE_ON);
	OUTHANDLE_SetState(OUTHANDLE_BUZZER, OUTHANDLE_ON);	
	
}


/**********************************************************************************************************************
 *  END OF FILE: door_control.c
 *********************************************************************************************************************/