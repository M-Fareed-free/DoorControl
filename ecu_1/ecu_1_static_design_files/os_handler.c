/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  light_switch.c
 *     \brief light_switch API functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "os_handler.h"
#include "bcm.h"
#include "timer.h"
#include "switch.h"
#include "can.h"

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
* \Syntax          : void OS_Init(void);    
* \Description     : Initialize the operating system                            
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void OS_Init(void)
{
	/*set the OS_Update as the timer callback function */
	TIMER_SetCallbackFunction(OS_Update);
}
/******************************************************************************
* \Syntax          : void OS_Start(void)  
* \Description     : Start the operating system                            
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void OS_Start(void)
{
	/*start the OS timer by calling "TIMER_Start()"*/
}

/******************************************************************************
* \Syntax          : void OS_Update(void) 
* \Description     : Update the functions called by the operating system                          
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void OS_Update(void)
{
	SWITCH_Update();
	CAN_Update();
	BCM_Update();
}