/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_TAG_Config_H_
#define	_TAG_Config_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TAG-Id.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct TAG;

/* TAG-Config */
typedef struct TAG_Config {
	struct TAG_Config__tag_ToReleaseList {
		A_SEQUENCE_OF(TAG_Id_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tag_ToReleaseList;
	struct TAG_Config__tag_ToAddModList {
		A_SEQUENCE_OF(struct TAG) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *tag_ToAddModList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TAG_Config_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TAG_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_TAG_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_TAG_Config_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TAG_Config_H_ */
#include <asn_internal.h>
