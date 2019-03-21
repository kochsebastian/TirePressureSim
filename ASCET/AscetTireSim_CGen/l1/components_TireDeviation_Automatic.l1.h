#ifndef _STRUCTURE_ASD_L1_components_TireDeviation_Automatic
#define _STRUCTURE_ASD_L1_components_TireDeviation_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_TireDeviation_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_TireDeviation_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_TireDeviation_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_TireDeviation_Automatic_Obj {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* v;
	scalarWrapper_Obj* mean;
	scalarWrapper_Obj* diff;
	scalarWrapper_Obj* limit;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_TireDeviation_Automatic_Class;

extern L1_components_TireDeviation_Automatic_Class L1_components_TireDeviation_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_TireDeviation_Automatic (L1_components_TireDeviation_Automatic_Class* _ASCET_class);
extern struct L1_components_TireDeviation_Automatic_Obj* initInstance_L1_components_TireDeviation_Automatic(const struct components_TireDeviation_Automatic* self);
#endif /* _STRUCTURE_ASD_L1_components_TireDeviation_Automatic */
