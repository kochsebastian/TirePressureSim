#ifndef _STRUCTURE_ASD_L1_components_Driver_Automatic
#define _STRUCTURE_ASD_L1_components_Driver_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_Driver_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_Driver_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_Driver_Automatic.h"
#include "components_RandomGenerator_Automatic.l1.h"

/**
 * local variables object structure 
 **/
struct L1_components_Driver_Automatic_Obj {
	ASDObjectHeader objectHeader;
	struct L1_components_RandomGenerator_Automatic_Obj* RandomGenerator_instance;
	struct L1_components_RandomGenerator_Automatic_Obj* RandomGenerator_instance_2;
	struct L1_components_RandomGenerator_Automatic_Obj* RandomGenerator_instance_3;
	struct L1_components_RandomGenerator_Automatic_Obj* RandomGenerator_instance_4;
	scalarWrapper_Obj* base_v;
	scalarWrapper_Obj* base_noiselevel;
	scalarWrapper_Obj* rand;
	scalarWrapper_Obj* deflate_fr;
	scalarWrapper_Obj* deflate_fl;
	scalarWrapper_Obj* deflate_vrl;
	scalarWrapper_Obj* deflate_vrr;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_Driver_Automatic_Class;

extern L1_components_Driver_Automatic_Class L1_components_Driver_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_Driver_Automatic (L1_components_Driver_Automatic_Class* _ASCET_class);
extern struct L1_components_Driver_Automatic_Obj* initInstance_L1_components_Driver_Automatic(void);
#endif /* _STRUCTURE_ASD_L1_components_Driver_Automatic */
