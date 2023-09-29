/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RedirectedCarrierInfo_EUTRA_H_
#define	_RedirectedCarrierInfo_EUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RedirectedCarrierInfo_EUTRA__cnType {
	RedirectedCarrierInfo_EUTRA__cnType_epc	= 0,
	RedirectedCarrierInfo_EUTRA__cnType_fiveGC	= 1
} e_RedirectedCarrierInfo_EUTRA__cnType;

/* RedirectedCarrierInfo-EUTRA */
typedef struct RedirectedCarrierInfo_EUTRA {
	ARFCN_ValueEUTRA_t	 eutraFrequency;
	long	*cnType;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RedirectedCarrierInfo_EUTRA_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_cnType_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RedirectedCarrierInfo_EUTRA;
extern asn_SEQUENCE_specifics_t asn_SPC_RedirectedCarrierInfo_EUTRA_specs_1;
extern asn_TYPE_member_t asn_MBR_RedirectedCarrierInfo_EUTRA_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _RedirectedCarrierInfo_EUTRA_H_ */
#include <asn_internal.h>
