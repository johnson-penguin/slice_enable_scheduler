/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_PUCCH_PowerControl_H_
#define	_PUCCH_PowerControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUCCH_PowerControl__twoPUCCH_PC_AdjustmentStates {
	PUCCH_PowerControl__twoPUCCH_PC_AdjustmentStates_twoStates	= 0
} e_PUCCH_PowerControl__twoPUCCH_PC_AdjustmentStates;

/* Forward declarations */
struct P0_PUCCH;
struct PUCCH_PathlossReferenceRS;

/* PUCCH-PowerControl */
typedef struct PUCCH_PowerControl {
	long	*deltaF_PUCCH_f0;	/* OPTIONAL */
	long	*deltaF_PUCCH_f1;	/* OPTIONAL */
	long	*deltaF_PUCCH_f2;	/* OPTIONAL */
	long	*deltaF_PUCCH_f3;	/* OPTIONAL */
	long	*deltaF_PUCCH_f4;	/* OPTIONAL */
	struct PUCCH_PowerControl__p0_Set {
		A_SEQUENCE_OF(struct P0_PUCCH) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *p0_Set;
	struct PUCCH_PowerControl__pathlossReferenceRSs {
		A_SEQUENCE_OF(struct PUCCH_PathlossReferenceRS) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pathlossReferenceRSs;
	long	*twoPUCCH_PC_AdjustmentStates;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUCCH_PowerControl_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_twoPUCCH_PC_AdjustmentStates_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUCCH_PowerControl;
extern asn_SEQUENCE_specifics_t asn_SPC_PUCCH_PowerControl_specs_1;
extern asn_TYPE_member_t asn_MBR_PUCCH_PowerControl_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _PUCCH_PowerControl_H_ */
#include <asn_internal.h>
