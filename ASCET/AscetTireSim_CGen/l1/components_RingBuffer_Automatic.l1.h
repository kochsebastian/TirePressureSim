#ifndef _STRUCTURE_ASD_L1_components_RingBuffer_Automatic
#define _STRUCTURE_ASD_L1_components_RingBuffer_Automatic
/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_RingBuffer_Automatic.l1.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Declarations for L1 node: components_RingBuffer_Automatic
 *
 **/
#include "a_basdef.h"
#include "components_RingBuffer_Automatic.h"

/**
 * local variables object structure 
 **/
struct L1_components_RingBuffer_Automatic_Obj {
	ASDObjectHeader objectHeader;
	vectorWrapper_Obj* buffer;
	scalarWrapper_Obj* c;
	scalarWrapper_Obj* swap;
};

/**
 * static variables object structure 
 **/
typedef struct {
	ASDObjectHeader objectHeader;
} L1_components_RingBuffer_Automatic_Class;

extern L1_components_RingBuffer_Automatic_Class L1_components_RingBuffer_Automatic_ClassObj;

/**
 * external functions 
 **/
extern void initClass_L1_components_RingBuffer_Automatic (L1_components_RingBuffer_Automatic_Class* _ASCET_class);
extern struct L1_components_RingBuffer_Automatic_Obj* initInstance_L1_components_RingBuffer_Automatic(const struct components_RingBuffer_Automatic* self);
#endif /* _STRUCTURE_ASD_L1_components_RingBuffer_Automatic */