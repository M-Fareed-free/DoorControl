/**********************************************************************************************************************

 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		light_switch
 *  Module:  handlers_interfaces
 *
 *  Description:  Light switch API functions
 *  
 *********************************************************************************************************************/

#ifndef __LIGHT_SWITCH__
#define __LIGHT_SWITCH__


/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
typedef enum
{
	LIGHT_OFF = 0,
	LIGHT_ON
}LIGHT_StateType;

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/
 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void LIGHTSW_Init(void);
void LIGHTSW_Update(void);
LIGHT_StateType LIGHTSW_GetState(void);
#endif  /* __LIGHT_SWITCH__ */

/**********************************************************************************************************************
 *  END OF FILE: light_switch.h
 *********************************************************************************************************************/
