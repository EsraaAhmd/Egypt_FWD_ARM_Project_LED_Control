/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  <IntCtrl_cfg.c>
 *       Module:  NVIC
 *
 *  Description:  <Source File for NVIC modules configurations.>     
 *  
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "../Inc/IntCtrl_Cfg.h"
#include "../../../MCAL/Inc/intctrl.h"


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**
 * Create an array of desired interrupts to initialize
 * Struct format: { IRQn, EN(0|1), PRI(0-7) } 
 */
NVIC_ConfigType	NVIC_Config[]	=	
{
	{SYSTICK_IRQn, IRQn_ENABLE, IRQn_PRI_0}
};

/* Calculating the size of the array */
uint32_t	IRQn_count = sizeof(NVIC_Config)/ sizeof(NVIC_Config[0]);


/**********************************************************************************************************************
 *  									END OF FILE
 *********************************************************************************************************************/
