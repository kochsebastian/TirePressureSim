/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    components_SOS_state_Automatic.c
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    20.03.2019 11:21:38
*
* @brief   "components_SOS_state>>Automatic (module code)"
*
*/



/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "globalH.h"
#include "components_SOS_state_Automatic.h"
/******************************************************************************
 * BEGIN: source code of a multiple instance class
 ******************************************************************************/




/*-----------------------------------------------------------------------------
 *    Defines
 *----------------------------------------------------------------------------*/

#define beep_long 1U
#define beep_short 2U
#define no_long 3U
#define no_short 4U
#define off 0U



/******************************************************************************
 * BEGIN: FUNCTIONS OF COMPONENT
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_SOS_state_Automatic_esdl_getState'
 * ----------------------------------------------------------------------------
 * model name:...................................'esdl_getState'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

uint8 components_SOS_state_Automatic_esdl_getState ( const struct components_SOS_state_Automatic * self)
{
   return self->components_SOS_state_Automatic_RAM->sm;
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_SOS_state_Automatic_esdl_getState'
 ******************************************************************************/




/******************************************************************************
 * BEGIN: DEFINITION OF METHOD 'components_SOS_state_Automatic_sOS_stateStatemachineTrigger'
 * ----------------------------------------------------------------------------
 * model name:...................................'sOS_stateStatemachineTrigger'
 * memory class:.................................'CODE'
 * ---------------------------------------------------------------------------*/

void components_SOS_state_Automatic_sOS_stateStatemachineTrigger ( const struct components_SOS_state_Automatic * self)
{
   switch (self->components_SOS_state_Automatic_RAM->sm)
   {
      case beep_long:
         if (self->components_SOS_state_Automatic_RAM->duration >= 1.6F)
         {
            self->components_SOS_state_Automatic_RAM->status = 0;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->y
               = ((self->components_SOS_state_Automatic_RAM->y <= 2147483646L) ? (self->components_SOS_state_Automatic_RAM->y + 1) : 2147483647L);
            self->components_SOS_state_Automatic_RAM->statelocation = 4.0F;
            self->components_SOS_state_Automatic_RAM->sm = no_long;
            break;
         } /* end if */
         self->components_SOS_state_Automatic_RAM->duration
            = self->components_SOS_state_Automatic_RAM->duration + self->components_SOS_state_Automatic_RAM->myDT;
         break;
      case beep_short:
         if (self->components_SOS_state_Automatic_RAM->duration >= 0.8F)
         {
            self->components_SOS_state_Automatic_RAM->status = 0;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->x
               = ((self->components_SOS_state_Automatic_RAM->x <= 2147483646L) ? (self->components_SOS_state_Automatic_RAM->x + 1) : 2147483647L);
            self->components_SOS_state_Automatic_RAM->run
               = ((self->components_SOS_state_Automatic_RAM->run <= 2147483646L) ? (self->components_SOS_state_Automatic_RAM->run + 1) : 2147483647L);
            self->components_SOS_state_Automatic_RAM->statelocation = 2.0F;
            self->components_SOS_state_Automatic_RAM->sm = no_short;
            break;
         } /* end if */
         self->components_SOS_state_Automatic_RAM->duration
            = self->components_SOS_state_Automatic_RAM->duration + self->components_SOS_state_Automatic_RAM->myDT;
         break;
      case no_long:
         if ((self->components_SOS_state_Automatic_RAM->duration >= 1.6F) && (self->components_SOS_state_Automatic_RAM->y < 3))
         {
            self->components_SOS_state_Automatic_RAM->status = 1;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->x = 0;
            self->components_SOS_state_Automatic_RAM->statelocation = 3.0F;
            self->components_SOS_state_Automatic_RAM->sm = beep_long;
            break;
         } /* end if */
         if ((self->components_SOS_state_Automatic_RAM->duration >= 1.6F) && (self->components_SOS_state_Automatic_RAM->y >= 3))
         {
            self->components_SOS_state_Automatic_RAM->status = 1;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->y = 0;
            self->components_SOS_state_Automatic_RAM->statelocation = 1.0F;
            self->components_SOS_state_Automatic_RAM->sm = beep_short;
            break;
         } /* end if */
         self->components_SOS_state_Automatic_RAM->duration
            = self->components_SOS_state_Automatic_RAM->duration + self->components_SOS_state_Automatic_RAM->myDT;
         break;
      case no_short:
         if ((self->components_SOS_state_Automatic_RAM->duration >= 0.8F) && (self->components_SOS_state_Automatic_RAM->x >= 3) && (self->components_SOS_state_Automatic_RAM->run < 6))
         {
            self->components_SOS_state_Automatic_RAM->status = 1;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->x = 0;
            self->components_SOS_state_Automatic_RAM->statelocation = 3.0F;
            self->components_SOS_state_Automatic_RAM->sm = beep_long;
            break;
         } /* end if */
         if ((self->components_SOS_state_Automatic_RAM->duration >= 0.8F) && (self->components_SOS_state_Automatic_RAM->x < 3))
         {
            self->components_SOS_state_Automatic_RAM->status = 1;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->y = 0;
            self->components_SOS_state_Automatic_RAM->statelocation = 1.0F;
            self->components_SOS_state_Automatic_RAM->sm = beep_short;
            break;
         } /* end if */
         if ((self->components_SOS_state_Automatic_RAM->duration >= 0.8F) && (self->components_SOS_state_Automatic_RAM->run >= 6))
         {
            self->components_SOS_state_Automatic_RAM->run = 0;
            self->components_SOS_state_Automatic_RAM->x = 0;
            self->components_SOS_state_Automatic_RAM->y = 0;
            self->components_SOS_state_Automatic_RAM->statelocation = 0.0F;
            self->components_SOS_state_Automatic_RAM->sm = off;
            break;
         } /* end if */
         self->components_SOS_state_Automatic_RAM->duration
            = self->components_SOS_state_Automatic_RAM->duration + self->components_SOS_state_Automatic_RAM->myDT;
         break;
      case off:
      default:
         if (self->components_SOS_state_Automatic_RAM->aktiv)
         {
            self->components_SOS_state_Automatic_RAM->status = 1;
            self->components_SOS_state_Automatic_RAM->duration = 0.0F;
            self->components_SOS_state_Automatic_RAM->y = 0;
            self->components_SOS_state_Automatic_RAM->statelocation = 1.0F;
            self->components_SOS_state_Automatic_RAM->sm = beep_short;
            break;
         } /* end if */
         break;
   } /* end switch */
}
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF METHOD 'components_SOS_state_Automatic_sOS_stateStatemachineTrigger'
 ******************************************************************************/



/* ****************************************************************************
 * END: FUNCTIONS OF COMPONENT
 ******************************************************************************/


