#ifndef _ASD_RUNNABLEMODELS_TIREPRESSUREMONITORING_AUTOMATIC_H_
#define _ASD_RUNNABLEMODELS_TIREPRESSUREMONITORING_AUTOMATIC_H_
/**
* @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
*
* @file    runnableModels_TirePressureMonitoring_Automatic.h
*
* @author  Generated by ASCET-DEVELOPER V7.4.0 (Backend: Code Generator V7.4.0)
*
* @date    22.03.2019 09:25:43
*
* @brief   "runnableModels_TirePressureMonitoring>>Automatic (>>esdl_Data_Default combined module/init code)"
*
*/


/*-----------------------------------------------------------------------------
 *    Include files
 *----------------------------------------------------------------------------*/

#include "esdl.h"
#include "components_TireDeviation_Automatic.h"
#include "components_TireMean_Automatic.h"


/******************************************************************************
 * BEGIN: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'runnableModels_TirePressureMonitoring_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'RAM'
 * ---------------------------------------------------------------------------*/
struct runnableModels_TirePressureMonitoring_Automatic_RAM_SUBSTRUCT {
   float32 diff_sfl;
   float32 diff_sfr;
   float32 diff_srl;
   float32 diff_srr;
   float32 mean;
   uint8 fl_failure;
   uint8 fr_failure;
   uint8 rl_failure;
   uint8 rr_failure;
   uint8 test;
   struct components_TireDeviation_Automatic_RAM_SUBSTRUCT TireDeviation_instance;
   struct components_TireDeviation_Automatic_RAM_SUBSTRUCT TireDeviation_instance_2;
   struct components_TireDeviation_Automatic_RAM_SUBSTRUCT TireDeviation_instance_3;
   struct components_TireDeviation_Automatic_RAM_SUBSTRUCT TireDeviation_instance_4;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MEMORY CLASS STRUCTURE FOR MODULE 'runnableModels_TirePressureMonitoring_Automatic'
 ******************************************************************************/


/******************************************************************************
 * BEGIN: DEFINITION OF MAIN STRUCTURE FOR MODULE 'runnableModels_TirePressureMonitoring_Automatic'
 * ----------------------------------------------------------------------------
 * memory class:.................................'ROM'
 * ---------------------------------------------------------------------------*/
struct runnableModels_TirePressureMonitoring_Automatic {
   struct components_TireDeviation_Automatic TireDeviation_instance;
   struct components_TireDeviation_Automatic TireDeviation_instance_2;
   struct components_TireDeviation_Automatic TireDeviation_instance_3;
   struct components_TireDeviation_Automatic TireDeviation_instance_4;
};
/* ----------------------------------------------------------------------------
 * END: DEFINITION OF MAIN STRUCTURE FOR MODULE 'runnableModels_TirePressureMonitoring_Automatic'
 ******************************************************************************/

/* Following DEFINE signalizes the completion of definition                   */
/* of data structs for component: runnableModels_TirePressureMonitoring_Automatic */
#define _runnableModels_TirePressureMonitoring_Automatic_TYPE_DEF_




/* forward declaration of substruct variable 'runnableModels_TirePressureMonitoring_RAM' */
/* containing 'RAM' memory class tree */
extern struct runnableModels_TirePressureMonitoring_Automatic_RAM_SUBSTRUCT runnableModels_TirePressureMonitoring_RAM;

/* forward declaration of component variable 'runnableModels_TirePressureMonitoring' */
/* containing 'ROM' memory class tree */
extern const struct runnableModels_TirePressureMonitoring_Automatic runnableModels_TirePressureMonitoring;

/******************************************************************************
 * BEGIN: declaration of global C functions defined by module runnableModels_TirePressureMonitoring_Automatic
 ******************************************************************************/
extern void runnableModels_TirePressureMonitoring_Automatic_calc (void);



#endif /* _ASD_RUNNABLEMODELS_TIREPRESSUREMONITORING_AUTOMATIC_H_ */
