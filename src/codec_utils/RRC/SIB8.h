/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SIB8_H_
#define	_SIB8_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SIB8__warningMessageSegmentType {
	SIB8__warningMessageSegmentType_notLastSegment	= 0,
	SIB8__warningMessageSegmentType_lastSegment	= 1
} e_SIB8__warningMessageSegmentType;

/* SIB8 */
typedef struct SIB8 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	long	 warningMessageSegmentType;
	long	 warningMessageSegmentNumber;
	OCTET_STRING_t	 warningMessageSegment;
	OCTET_STRING_t	*dataCodingScheme;	/* OPTIONAL */
	OCTET_STRING_t	*warningAreaCoordinatesSegment;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIB8_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_warningMessageSegmentType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SIB8;
extern asn_SEQUENCE_specifics_t asn_SPC_SIB8_specs_1;
extern asn_TYPE_member_t asn_MBR_SIB8_1[8];

#ifdef __cplusplus
}
#endif

#endif	/* _SIB8_H_ */
#include <asn_internal.h>
