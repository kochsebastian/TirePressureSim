/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    TireSimulation_PC.init.h
 *
 * @author  Generated by ASCET
 *
 * @brief   Model initialization for application: TireSimulation_PC
 *
 **/
#pragma once

#include "a_basdef.h"
#include "protocol\l1\p_sysdef.h"

/**
 * initialize L1 Instance Tree 
 **/

/* Definition of the class structure */
typedef struct
{
    ASDObjectHeader objectHeader;
    struct L1_TireSimulation_PC_Obj* ASCET_TOP_Ptr;
} ROOT_TireSimulation_PC_Class;

/* Definition of the class instance structure */
struct ROOT_TireSimulation_PC_Obj
{
    ASDObjectHeader objectHeader;
};

extern ASDObject *initializeRoot_TireSimulation_PC(void);

/**
 * initialize model 
 **/
extern ASDObject *initializeModel (void);
