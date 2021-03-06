#ifndef _STRUCTURE_ASD_L1_interfaces_interfaces_Automatic
#define _STRUCTURE_ASD_L1_interfaces_interfaces_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    interfaces_interfaces_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: interfaces_interfaces_Automatic
 *
 **/
#include "a_basdef.h"
#include "interfaces_interfaces_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_interfaces_interfaces_Automatic_Obj {
	ASDObjectHeader objectHeader;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
	scalarWrapper_Obj* failure_detected;
	scalarWrapper_Obj* vfr;
	scalarWrapper_Obj* vfl;
	scalarWrapper_Obj* vrl;
	scalarWrapper_Obj* vrr;
	scalarWrapper_Obj* delta_sfr;
	scalarWrapper_Obj* delta_sfl;
	scalarWrapper_Obj* delta_srr;
	scalarWrapper_Obj* delta_srl;
	scalarWrapper_Obj* sfr;
	scalarWrapper_Obj* sfl;
	scalarWrapper_Obj* srl;
	scalarWrapper_Obj* srr;
	scalarWrapper_Obj* noFailure;
	scalarWrapper_Obj* mean;
} L1_interfaces_interfaces_Automatic_Class;

extern L1_interfaces_interfaces_Automatic_Class L1_interfaces_interfaces_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_interfaces_interfaces_Automatic (L1_interfaces_interfaces_Automatic_Class* _ASCET_class);
extern struct L1_interfaces_interfaces_Automatic_Obj* initInstance_L1_interfaces_interfaces_Automatic(void);
#endif /* _STRUCTURE_ASD_L1_interfaces_interfaces_Automatic */
