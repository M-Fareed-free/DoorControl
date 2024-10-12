/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  gpio.c
 *     \brief gpio driver API functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
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
* \Syntax          :  void GPIO_Init(void);      
* \Description     : Initialize the GPIO                                   
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
 void GPIO_Init(void)
 {
	 /*Configure the GPIO pin for the door sensor as an input*/
	 /*Configure the GPIO pin for the light switch as an input*/
 }
 
/******************************************************************************
* \Syntax          : GPIO_PinStateType GPIO_ReadPin(GPIO_PortNameType port_name, GPIO_PinNumberType pin_number);
* \Description     : Read the pin state                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : GPIO_PortNameType: Specifies the port number
 *									 GPIO_PinNumberType: Specifies the pin number		
* \Parameters (out):  None                                                  
* \Return value:   : pin state; high or low                                  
*******************************************************************************/
 GPIO_PinStateType GPIO_ReadPin(GPIO_PortNameType port_name, GPIO_PinNumberType pin_number)
 {
	 /*Select the pin of the specified port*/
	 /*Return the pin state; high or low*/
 }
 
/******************************************************************************
* \Syntax          : void GPIO_WritePin(GPIO_PortNameType port_nam, GPIO_PinNumberType pin_number, GPIO_PinStateType state)
* \Description     : Write high or low to the specified port pin                          
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : GPIO_PortNameType: Specifies the port number
 *									 GPIO_PinNumberType: Specifies the pin number		
* \Parameters (out):  None                                                  
* \Return value:   : None                                 
*******************************************************************************/
 void GPIO_WritePin(GPIO_PortNameType port_nam, GPIO_PinNumberType pin_number, GPIO_PinStateType state)
 {
	 /*Write the port pin value; high or low*/
	 
 }
 /******************************************************************************
* \Syntax          : void GPIO_WritePort(GPIO_PortNameType port_nam, unsigned char value);
* \Description     : Write a value to the port                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : GPIO_PortNameType: Specifies the port number
 *									 GPIO_PortType: The value to be written to the port		
* \Parameters (out):  None                                                  
* \Return value:   : None                             
*******************************************************************************/
void GPIO_WritePort(GPIO_PortNameType port_nam, GPIO_PortType value)
{
	/*Assign the port "value" to the selected port*/
}
 /******************************************************************************
* \Syntax          :  GPIO_PortType GPIO_ReadPort(GPIO_PortNameType port_nam);
* \Description     : Read the port value                       
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : GPIO_PortNameType: Specifies the port number
 *									 	
* \Parameters (out):  None                                                  
* \Return value:   : GPIO_PortType port value                                 
*******************************************************************************/
GPIO_PortType GPIO_ReadPort(GPIO_PortNameType port_nam)
{
	/*Return the port value*/
}
/**********************************************************************************************************************
 *  END OF FILE: handler_door_sensor.c
 *********************************************************************************************************************/