/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  timer.c
 *     \brief timer driver API functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "timer.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
static TIMER_CallBackFunctionType callBackFunction;
static TIMER_CountsType timerCounts = 0;
	
/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
static void TIMER_InterruptHandler(void);
/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/
 
 /******************************************************************************
* \Syntax          : static void TIMER_InterruptHandler(void)    
* \Description     : Timer interrupt handler                                 
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
static void TIMER_InterruptHandler(void)
{
	/*Set the interrupt handler function */
	if(callBackFunction != NULL)
	{
		callBackFunction();
	}
}
/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/******************************************************************************
* \Syntax          : void TIMER_Init(void)      
* \Description     : Initialize the GPIO                                   
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void TIMER_Init(void)
{
	/*Configure the timer to tick each 5 msec*/
}
 
/******************************************************************************
* \Syntax          : void TIMER_SetCallbackFunction(TIMER_CallBackFunctionType call_back);
* \Description     : Timer callback function                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : Pointer to the callback function
 *											
* \Parameters (out):  None                                                  
* \Return value:   : None                               
*******************************************************************************/
void TIMER_SetCallbackFunction(TIMER_CallBackFunctionType call_back)
 {
	 /*Set the callback function*/
	 callBackFunction = call_back;
	 /*Increment the timer counter*/
	 timerCounts++;
 }
/******************************************************************************
* \Syntax          : TIMER_CountsType TIMER_GetTimerCounts(void);
* \Description     : Returns the timer counts                       
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *											
 * \Parameters (out):  TIMER_CountsType: timer couts                                                  
* \Return value:   : None                               
*******************************************************************************/
TIMER_CountsType TIMER_GetTimerCounts(void)
{
	return(timerCounts);
}	
/******************************************************************************
* \Syntax          : void TIMER_Start(void);
* \Description     : Start the timer                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *											
* \Parameters (out):  None                                                  
* \Return value:   : None                               
*******************************************************************************/ 
void TIMER_Start(void)
{
	/*Start the timer*/
}

/******************************************************************************
* \Syntax          : void TIMER_Stop(void);
* \Description     : Stop the timer                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *											
* \Parameters (out):  None                                                  
* \Return value:   : None                               
*******************************************************************************/ 
void TIMER_Stop(void)
{
	/*Stop the timer*/
}
/**********************************************************************************************************************
 *  END OF FILE: handler_door_sensor.c
 *********************************************************************************************************************/