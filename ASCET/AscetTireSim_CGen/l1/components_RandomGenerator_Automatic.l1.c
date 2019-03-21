/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_RandomGenerator_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_RandomGenerator_Automatic
 *
 **/
#include "components_RandomGenerator_Automatic.l1.h"
#include "components_RandomGenerator_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_RandomGenerator_Automatic (L1_components_RandomGenerator_Automatic_Class* _ASCET_class)
{
}


static MethodList _ObjectMethodList = {
    ((void *)0)
};

static MethodList _ClassMethodList = {
    ((void *)0)
};

/**
 * Global objects 
 **/
static ASDClassHeader L1_components_RandomGenerator_Automatic_ClassHeader = {
	0, 0, 5, 0, &_ObjectMethodList, &_ClassMethodList
};

L1_components_RandomGenerator_Automatic_Class L1_components_RandomGenerator_Automatic_ClassObj = {{1, {&L1_components_RandomGenerator_Automatic_ClassHeader}, {0}}};

bool initialized_components_RandomGenerator_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_RandomGenerator_Automatic_Obj* initInstance_L1_components_RandomGenerator_Automatic(const struct components_RandomGenerator_Automatic* self)
{
    struct L1_components_RandomGenerator_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_RandomGenerator_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_RandomGenerator_Automatic = true;
        initClass_L1_components_RandomGenerator_Automatic(&L1_components_RandomGenerator_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_RandomGenerator_Automatic);
    L1_Instance->a = initInstance_scalarWrapper((uint32)&a_VAL, sizeof(uint16), ASD_PARAMETER);
    L1_Instance->m = initInstance_scalarWrapper((uint32)&m_VAL, sizeof(uint16), ASD_PARAMETER);
    L1_Instance->c = initInstance_scalarWrapper((uint32)&c_VAL, sizeof(uint16), ASD_PARAMETER);
    L1_Instance->seed = initInstance_scalarWrapper((uint32)&seed_VAL, sizeof(uint16), ASD_VARIABLE);
    L1_Instance->x = initInstance_scalarWrapper((uint32)&x_VAL, sizeof(uint16), ASD_VARIABLE);

    return L1_Instance;
}
