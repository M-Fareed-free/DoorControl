/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**    \file  can.c
 *     \brief CAN bus API functions
 *
 *     \details  
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "can.h"

/**********************************************************************************************************************
*  LOCAL MACROS CONSTANT\FUNCTION
*********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA 
 *********************************************************************************************************************/
static CAN_StatusType canStatus = CAN_NOT_READY;
	
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
* \Syntax          : void CAN_Init(void);     
* \Description     : Initialize the CAN bus                                  
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/
void CAN_Init(void)
{
	/*Configure & Initialize the CAN bus according to the datasheet*/
}
/******************************************************************************
* \Syntax          : void CAN_Update(void)     
* \Description     : Update the status of the CAN bus                               
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None                    
* \Parameters (out): None                                                      
* \Return value:   : None                                  
*******************************************************************************/ 
void CAN_Update(void)
{
	/*Update the status of the CAN bus*/
}
/******************************************************************************
* \Syntax          : void CAN_Write(CAN_DataType* data, unsigned int size);
* \Description     : write the data pointed to by data to the CAN bus                         
*                                                                             
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : CAN_DataType*: pointer to the data
*									 	unsigned int: size of the data
* \Parameters (out):  None                                                  
* \Return value:   : None                                
*******************************************************************************/
void CAN_Write(CAN_DataType* data, unsigned int size )
{
	/*Write the data pointed to by "CAN_DataType data" to the CAN bus*/
}
 
/******************************************************************************
* \Syntax          : void CAN_Read( CAN_DataType* read_data)
* \Description     : Read the data from the CAN bus                         
*                                                                         
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : CAN_DataType: read_data
 *									 
* \Parameters (out): CAN_DataType: read_data                                                 
* \Return value:   : None                                 
*******************************************************************************/
void CAN_Read(CAN_DataType* read_data)
{
	/*Read the data from the CAN bus*/
	/*Assign the data to the input/output pointer "read_data"*/
}
/******************************************************************************
* \Syntax          : CAN_StatusType CAN_GetStatus(void)
* \Description     : Return the status of the CAN bus                       
*                                                                         
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *									 
* \Parameters (out): CAN_StatusType: FREE or BUSY                                                 
* \Return value:   : None                                 
*******************************************************************************/
CAN_StatusType CAN_GetStatus(void)
{
	/*Check if the CAN bus is free or busy*/
}
/******************************************************************************
* \Syntax          : void CAN_Start(CAN_DeviceType device);
* \Description     : Start the communication with the specified device                   
*                                                                         
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *									 
* \Parameters (out): CAN_DeviceType: The device to communicate with                                                
* \Return value:   : None                                 
*******************************************************************************/
void CAN_Start(CAN_DeviceType device)
{
	/*Start the communication with the specified device*/
	/*Update the CAN status*/
}

/******************************************************************************
* \Syntax          : void CAN_Stop(CAN_DeviceType device)
* \Description     : Stop the communication with the specified device                        
*                                                                         
* \Sync\Async      : Asynchronous                                               
* \Reentrancy      : Non Reentrant                                             
* \Parameters (in) : None
 *									 
* \Parameters (out): CAN_DeviceType: The device to communicate with                                                
* \Return value:   : None                                 
*******************************************************************************/
void CAN_Stop(CAN_DeviceType device)
{
}

/**********************************************************************************************************************
 *  END OF FILE: can.c
 *********************************************************************************************************************/