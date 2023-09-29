/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-PDU-Contents"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_F1SetupResponse_H_
#define	_F1SetupResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* F1SetupResponse */
typedef struct F1SetupResponse {
	ProtocolIE_Container_4587P4_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} F1SetupResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_F1SetupResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_F1SetupResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_F1SetupResponse_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _F1SetupResponse_H_ */
#include <asn_internal.h>
