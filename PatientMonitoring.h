

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from PatientMonitoring.idl
using RTI Code Generator (rtiddsgen) version 3.1.0.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef PatientMonitoring_1745722001_h
#define PatientMonitoring_1745722001_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#include "rti/xcdr/Interpreter.hpp"
#else
#include "ndds_standalone_type.h"
#endif

extern "C" {

    extern const char *PatientMonitoringTYPENAME;

}

struct PatientMonitoringSeq;
#ifndef NDDS_STANDALONE_TYPE
class PatientMonitoringTypeSupport;
class PatientMonitoringDataWriter;
class PatientMonitoringDataReader;
#endif
class PatientMonitoring 
{
  public:
    typedef struct PatientMonitoringSeq Seq;
    #ifndef NDDS_STANDALONE_TYPE
    typedef PatientMonitoringTypeSupport TypeSupport;
    typedef PatientMonitoringDataWriter DataWriter;
    typedef PatientMonitoringDataReader DataReader;
    #endif

    DDS_Char *   patient_condition ;

};
#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

#ifndef NDDS_STANDALONE_TYPE
NDDSUSERDllExport DDS_TypeCode * PatientMonitoring_get_typecode(void); /* Type code */
NDDSUSERDllExport RTIXCdrTypePlugin *PatientMonitoring_get_type_plugin_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *PatientMonitoring_get_sample_access_info(void);
NDDSUSERDllExport RTIXCdrSampleAccessInfo *PatientMonitoring_get_sample_seq_access_info(void);
#endif

DDS_SEQUENCE(PatientMonitoringSeq, PatientMonitoring);

NDDSUSERDllExport
RTIBool PatientMonitoring_initialize(
    PatientMonitoring* self);

NDDSUSERDllExport
RTIBool PatientMonitoring_initialize_ex(
    PatientMonitoring* self,RTIBool allocatePointers,RTIBool allocateMemory);

NDDSUSERDllExport
RTIBool PatientMonitoring_initialize_w_params(
    PatientMonitoring* self,
    const struct DDS_TypeAllocationParams_t * allocParams);  

NDDSUSERDllExport
RTIBool PatientMonitoring_finalize_w_return(
    PatientMonitoring* self);

NDDSUSERDllExport
void PatientMonitoring_finalize(
    PatientMonitoring* self);

NDDSUSERDllExport
void PatientMonitoring_finalize_ex(
    PatientMonitoring* self,RTIBool deletePointers);

NDDSUSERDllExport
void PatientMonitoring_finalize_w_params(
    PatientMonitoring* self,
    const struct DDS_TypeDeallocationParams_t * deallocParams);

NDDSUSERDllExport
void PatientMonitoring_finalize_optional_members(
    PatientMonitoring* self, RTIBool deletePointers);  

NDDSUSERDllExport
RTIBool PatientMonitoring_copy(
    PatientMonitoring* dst,
    const PatientMonitoring* src);

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        template <>
        struct type_code<PatientMonitoring> {
            static const RTIXCdrTypeCode * get();
        };

    } 
}

#endif

#endif /* PatientMonitoring */

