/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RLCFailureIndication_H_
#define	_RLCFailureIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "LCID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* RLCFailureIndication */
typedef struct RLCFailureIndication {
	LCID_t	 assocatedLCID;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLCFailureIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLCFailureIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _RLCFailureIndication_H_ */
#include <asn_internal.h>
