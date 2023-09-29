/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SRBs_FailedToBeSetup_Item_H_
#define	_SRBs_FailedToBeSetup_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SRBID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Cause;
struct ProtocolExtensionContainer;

/* SRBs-FailedToBeSetup-Item */
typedef struct SRBs_FailedToBeSetup_Item {
	SRBID_t	 sRBID;
	struct Cause	*cause;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRBs_FailedToBeSetup_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRBs_FailedToBeSetup_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _SRBs_FailedToBeSetup_Item_H_ */
#include <asn_internal.h>
