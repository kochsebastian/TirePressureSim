/**
 * @warning AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
 *
 * @file    components_Model_Automatic.l1.c
 *
 * @author  Generated by ASCET
 *
 * @brief   Definitions for L1 node: components_Model_Automatic
 *
 **/
#include "components_Model_Automatic.l1.h"
#include "components_Model_Automatic_private.h"

/**
 * Class initialization 
 **/
void initClass_L1_components_Model_Automatic (L1_components_Model_Automatic_Class* _ASCET_class)
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
static ASDClassHeader L1_components_Model_Automatic_ClassHeader = {
	0, 0, 4, 0, &_ObjectMethodList, &_ClassMethodList
};

L1_components_Model_Automatic_Class L1_components_Model_Automatic_ClassObj = {{1, {&L1_components_Model_Automatic_ClassHeader}, {0}}};

bool initialized_components_Model_Automatic = false;

/**
 * Initialize this L1 component 
 **/
struct L1_components_Model_Automatic_Obj* initInstance_L1_components_Model_Automatic(const struct components_Model_Automatic* self)
{
    struct L1_components_Model_Automatic_Obj* L1_Instance = NULL;
    if (!initialized_components_Model_Automatic) {
        /* for first time also static class data shall be initialized */
        initialized_components_Model_Automatic = true;
        initClass_L1_components_Model_Automatic(&L1_components_Model_Automatic_ClassObj);
    }

    /* create L1 object and initialize it */
    CREATE_OBJECT (L1_Instance, L1_components_Model_Automatic);
    L1_Instance->sfl = initInstance_scalarWrapper((uint32)&sfl_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->sfr = initInstance_scalarWrapper((uint32)&sfr_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->srl = initInstance_scalarWrapper((uint32)&srl_VAL, sizeof(float32), ASD_VARIABLE);
    L1_Instance->srr = initInstance_scalarWrapper((uint32)&srr_VAL, sizeof(float32), ASD_VARIABLE);

    return L1_Instance;
}
