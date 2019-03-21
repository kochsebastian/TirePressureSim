/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_TireDeviation_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_TireDeviation_Automatic
 *
 **/
#include "components_TireDeviation_Automatic.l1.h"
#include "components_TireDeviation_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_TireDeviation_Automatic (L1_components_TireDeviation_Automatic_Class* _ASCET_class)
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
static ASDClassHeader L1_components_TireDeviation_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};

L1_components_TireDeviation_Automatic_Class L1_components_TireDeviation_Automatic_ClassObj = {{1, {&L1_components_TireDeviation_Automatic_ClassHeader}, {0}}};

bool initialized_components_TireDeviation_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_TireDeviation_Automatic_Obj* initInstance_L1_components_TireDeviation_Automatic(const struct components_TireDeviation_Automatic* self)
{
    struct L1_components_TireDeviation_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_TireDeviation_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_TireDeviation_Automatic = true;
        initClass_L1_components_TireDeviation_Automatic(&L1_components_TireDeviation_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_TireDeviation_Automatic);
    L1_Instance->v = initInstance_scalarWrapper((uint32)&v_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->mean = initInstance_scalarWrapper((uint32)&mean_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->diff = initInstance_scalarWrapper((uint32)&diff_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->limit = initInstance_scalarWrapper((uint32)&limit_VAL, sizeof(float32), ASD_VARIABLE);

    return L1_Instance;
}
