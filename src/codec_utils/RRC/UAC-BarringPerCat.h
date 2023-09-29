/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_UAC_BarringPerCat_H_
#define	_UAC_BarringPerCat_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include "UAC-BarringInfoSetIndex.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UAC-BarringPerCat */
typedef struct UAC_BarringPerCat {
	long	 accessCategory;
	UAC_BarringInfoSetIndex_t	 uac_barringInfoSetIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UAC_BarringPerCat_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UAC_BarringPerCat;
extern asn_SEQUENCE_specifics_t asn_SPC_UAC_BarringPerCat_specs_1;
extern asn_TYPE_member_t asn_MBR_UAC_BarringPerCat_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _UAC_BarringPerCat_H_ */
#include <asn_internal.h>
