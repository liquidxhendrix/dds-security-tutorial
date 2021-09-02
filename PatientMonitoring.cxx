

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PatientMonitoring.idl 
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif 
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
#endif 

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "PatientMonitoring.h"

#ifndef NDDS_STANDALONE_TYPE
#include "PatientMonitoringPlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *PatientMonitoringTYPENAME = "PatientMonitoring";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode * PatientMonitoring_get_typecode(void)
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode PatientMonitoring_g_tc_patient_condition_string = DDS_INITIALIZE_STRING_TYPECODE((128L));

    static DDS_TypeCode_Member PatientMonitoring_g_tc_members[1]=
    {

        {
            (char *)"patient_condition",/* Member name */
            {
                0,/* Representation ID */
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode PatientMonitoring_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"PatientMonitoring", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            PatientMonitoring_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for PatientMonitoring*/

    if (is_initialized) {
        return &PatientMonitoring_g_tc;
    }

    PatientMonitoring_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    PatientMonitoring_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&PatientMonitoring_g_tc_patient_condition_string;

    /* Initialize the values for member annotations. */
    PatientMonitoring_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    PatientMonitoring_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    PatientMonitoring_g_tc._data._sampleAccessInfo =
    PatientMonitoring_get_sample_access_info();
    PatientMonitoring_g_tc._data._typePlugin =
    PatientMonitoring_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &PatientMonitoring_g_tc;
}

#define TSeq PatientMonitoringSeq
#define T PatientMonitoring
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *PatientMonitoring_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo PatientMonitoring_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(PatientMonitoringSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        PatientMonitoringSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &PatientMonitoring_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *PatientMonitoring_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    PatientMonitoring *sample;

    static RTIXCdrMemberAccessInfo PatientMonitoring_g_memberAccessInfos[1] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo PatientMonitoring_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &PatientMonitoring_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        PatientMonitoring);
    if (sample == NULL) {
        return NULL;
    }

    PatientMonitoring_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->patient_condition - (char *)sample);

    PatientMonitoring_g_sampleAccessInfo.memberAccessInfos = 
    PatientMonitoring_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(PatientMonitoring);

        if (candidateTypeSize > RTIXCdrLong_MAX) {
            PatientMonitoring_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrLong_MAX;
        } else {
            PatientMonitoring_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    PatientMonitoring_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    PatientMonitoring_g_sampleAccessInfo.getMemberValuePointerFcn = 
    PatientMonitoring_get_member_value_pointer;

    PatientMonitoring_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &PatientMonitoring_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *PatientMonitoring_get_type_plugin_info()
{
    static RTIXCdrTypePlugin PatientMonitoring_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        PatientMonitoring_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        PatientMonitoring_finalize_w_return,
        NULL
    };

    return &PatientMonitoring_g_typePlugin;
}
#endif

RTIBool PatientMonitoring_initialize(
    PatientMonitoring* sample) {
    return PatientMonitoring_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool PatientMonitoring_initialize_ex(
    PatientMonitoring* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return PatientMonitoring_initialize_w_params(
        sample,&allocParams);

}

RTIBool PatientMonitoring_initialize_w_params(
    PatientMonitoring* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->patient_condition = DDS_String_alloc((128L));
        RTICdrType_copyStringEx(
            &sample->patient_condition,
            "",
            (128L),
            RTI_FALSE);
        if (sample->patient_condition == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->patient_condition != NULL) {
            RTICdrType_copyStringEx(
                &sample->patient_condition,
                "",
                (128L),
                RTI_FALSE);
            if (sample->patient_condition == NULL) {
                return RTI_FALSE;
            }
        }
    }

    return RTI_TRUE;
}

RTIBool PatientMonitoring_finalize_w_return(
    PatientMonitoring* sample)
{
    PatientMonitoring_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void PatientMonitoring_finalize(
    PatientMonitoring* sample)
{

    PatientMonitoring_finalize_ex(sample,RTI_TRUE);
}

void PatientMonitoring_finalize_ex(
    PatientMonitoring* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    PatientMonitoring_finalize_w_params(
        sample,&deallocParams);
}

void PatientMonitoring_finalize_w_params(
    PatientMonitoring* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->patient_condition != NULL) {
        DDS_String_free(sample->patient_condition);
        sample->patient_condition=NULL;

    }
}

void PatientMonitoring_finalize_optional_members(
    PatientMonitoring* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool PatientMonitoring_copy(
    PatientMonitoring* dst,
    const PatientMonitoring* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->patient_condition, src->patient_condition, 
            (128L) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'PatientMonitoring' sequence class.
*/
#define T PatientMonitoring
#define TSeq PatientMonitoringSeq

#define T_initialize_w_params PatientMonitoring_initialize_w_params

#define T_finalize_w_params   PatientMonitoring_finalize_w_params
#define T_copy       PatientMonitoring_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<PatientMonitoring>::get() 
        {
            return (const RTIXCdrTypeCode *) PatientMonitoring_get_typecode();
        }

    } 
}
#endif
