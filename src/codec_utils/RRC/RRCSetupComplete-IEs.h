/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RRCSetupComplete_IEs_H_
#define	_RRCSetupComplete_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include "DedicatedNAS-Message.h"
#include <OCTET_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include "NG-5G-S-TMSI.h"
#include <BIT_STRING.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RRCSetupComplete_IEs__guami_Type {
	RRCSetupComplete_IEs__guami_Type_native	= 0,
	RRCSetupComplete_IEs__guami_Type_mapped	= 1
} e_RRCSetupComplete_IEs__guami_Type;
typedef enum RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_PR {
	RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_PR_NOTHING,	/* No components present */
	RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_PR_ng_5G_S_TMSI,
	RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_PR_ng_5G_S_TMSI_Part2
} RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_PR;

/* Forward declarations */
struct RegisteredAMF;
struct S_NSSAI;

/* RRCSetupComplete-IEs */
typedef struct RRCSetupComplete_IEs {
	long	 selectedPLMN_Identity;
	struct RegisteredAMF	*registeredAMF;	/* OPTIONAL */
	long	*guami_Type;	/* OPTIONAL */
	struct RRCSetupComplete_IEs__s_NSSAI_List {
		A_SEQUENCE_OF(struct S_NSSAI) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *s_NSSAI_List;
	DedicatedNAS_Message_t	 dedicatedNAS_Message;
	struct RRCSetupComplete_IEs__ng_5G_S_TMSI_Value {
		RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_PR present;
		union RRCSetupComplete_IEs__ng_5G_S_TMSI_Value_u {
			NG_5G_S_TMSI_t	 ng_5G_S_TMSI;
			BIT_STRING_t	 ng_5G_S_TMSI_Part2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ng_5G_S_TMSI_Value;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct RRCSetupComplete_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCSetupComplete_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_guami_Type_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RRCSetupComplete_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_RRCSetupComplete_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_RRCSetupComplete_IEs_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _RRCSetupComplete_IEs_H_ */
#include <asn_internal.h>
