/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CSI_IM_Resource_H_
#define	_CSI_IM_Resource_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CSI-IM-ResourceId.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CSI_IM_Resource__csi_IM_ResourceElementPattern_PR {
	CSI_IM_Resource__csi_IM_ResourceElementPattern_PR_NOTHING,	/* No components present */
	CSI_IM_Resource__csi_IM_ResourceElementPattern_PR_pattern0,
	CSI_IM_Resource__csi_IM_ResourceElementPattern_PR_pattern1
} CSI_IM_Resource__csi_IM_ResourceElementPattern_PR;
typedef enum CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0 {
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s0	= 0,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s2	= 1,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s4	= 2,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s6	= 3,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s8	= 4,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0_s10	= 5
} e_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0__subcarrierLocation_p0;
typedef enum CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1 {
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1_s0	= 0,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1_s4	= 1,
	CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1_s8	= 2
} e_CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1__subcarrierLocation_p1;

/* Forward declarations */
struct CSI_FrequencyOccupation;
struct CSI_ResourcePeriodicityAndOffset;

/* CSI-IM-Resource */
typedef struct CSI_IM_Resource {
	CSI_IM_ResourceId_t	 csi_IM_ResourceId;
	struct CSI_IM_Resource__csi_IM_ResourceElementPattern {
		CSI_IM_Resource__csi_IM_ResourceElementPattern_PR present;
		union CSI_IM_Resource__csi_IM_ResourceElementPattern_u {
			struct CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern0 {
				long	 subcarrierLocation_p0;
				long	 symbolLocation_p0;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *pattern0;
			struct CSI_IM_Resource__csi_IM_ResourceElementPattern__pattern1 {
				long	 subcarrierLocation_p1;
				long	 symbolLocation_p1;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *pattern1;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *csi_IM_ResourceElementPattern;
	struct CSI_FrequencyOccupation	*freqBand;	/* OPTIONAL */
	struct CSI_ResourcePeriodicityAndOffset	*periodicityAndOffset;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSI_IM_Resource_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierLocation_p0_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_subcarrierLocation_p1_14;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_CSI_IM_Resource;
extern asn_SEQUENCE_specifics_t asn_SPC_CSI_IM_Resource_specs_1;
extern asn_TYPE_member_t asn_MBR_CSI_IM_Resource_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _CSI_IM_Resource_H_ */
#include <asn_internal.h>
