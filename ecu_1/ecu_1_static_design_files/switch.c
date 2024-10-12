/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  switch.c
 *     \brief switch driver API functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "switch.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/
#define NO_OF_SWITCHES 							(2)
/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
static SWITCH_StateType switchState[NO_OF_SWITCHES];
	
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
* \Syntax          :  void SWITCH_Init(void);     
* \Description     : Initialize the door sensor switch and the light switch                                  
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void SWITCH_Init(void)
 {
	 /*Initialize the door switch state to be off*/
	 /*Initialize the light switch state to be off*/
 }
 
/******************************************************************************
* \Syntax          : SWITCH_StateType SWITCH_GetState(SWITCH_Type switch_type);
* \Description     : Get the switch state ; On or Off                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : SWITCH_Type: Which switch is being read; door sensor or light switch
 *									 		
* \Parameters (out):  None                                                  
* \Return value:   : None                                
*******************************************************************************/
 SWITCH_StateType SWITCH_GetState(SWITCH_Type switch_type)
 {
	 /*switch on the specified type (switch_type) */
		/*Read the GPIO pin of the selected switch*/
	 /*Return the read value*/
 }
 
/******************************************************************************
* \Syntax          : void SWITCH_Update(void)
* \Description     : Update the switch state. It is assumed that the switches states are read by polling                          
*                    their pin. This function is called from the timer ISR (handler)                                                     
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *									 
* \Parameters (out): None                                                  
* \Return value:   : None                                 
*******************************************************************************/
void SWITCH_Update(void)
{
		/*Check the door sensor state by*/
		/*Reading the pin state*/
		/*Update the switch state; pressed or released*/
	 
		/*Check the light switch state by*/
		/*Reading the pin state*/
		/*Update the switch state; pressed or released*/
}
/**********************************************************************************************************************
 *  END OF FILE: switch.c
 *********************************************************************************************************************/