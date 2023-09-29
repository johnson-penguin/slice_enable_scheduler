/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SRS_TxSwitch_H_
#define	_SRS_TxSwitch_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SRS_TxSwitch__supportedSRS_TxPortSwitch {
	SRS_TxSwitch__supportedSRS_TxPortSwitch_t1r2	= 0,
	SRS_TxSwitch__supportedSRS_TxPortSwitch_t1r4	= 1,
	SRS_TxSwitch__supportedSRS_TxPortSwitch_t2r4	= 2,
	SRS_TxSwitch__supportedSRS_TxPortSwitch_t1r4_t2r4	= 3,
	SRS_TxSwitch__supportedSRS_TxPortSwitch_tr_equal	= 4
} e_SRS_TxSwitch__supportedSRS_TxPortSwitch;
typedef enum SRS_TxSwitch__txSwitchImpactToRx {
	SRS_TxSwitch__txSwitchImpactToRx_true	= 0
} e_SRS_TxSwitch__txSwitchImpactToRx;

/* SRS-TxSwitch */
typedef struct SRS_TxSwitch {
	long	 supportedSRS_TxPortSwitch;
	long	*txSwitchImpactToRx;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRS_TxSwitch_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_supportedSRS_TxPortSwitch_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_txSwitchImpactToRx_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SRS_TxSwitch;
extern asn_SEQUENCE_specifics_t asn_SPC_SRS_TxSwitch_specs_1;
extern asn_TYPE_member_t asn_MBR_SRS_TxSwitch_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SRS_TxSwitch_H_ */
#include <asn_internal.h>