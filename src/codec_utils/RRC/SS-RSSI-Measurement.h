/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_SS_RSSI_Measurement_H_
#define	_SS_RSSI_Measurement_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SS-RSSI-Measurement */
typedef struct SS_RSSI_Measurement {
	BIT_STRING_t	 measurementSlots;
	long	 endSymbol;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SS_RSSI_Measurement_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SS_RSSI_Measurement;
extern asn_SEQUENCE_specifics_t asn_SPC_SS_RSSI_Measurement_specs_1;
extern asn_TYPE_member_t asn_MBR_SS_RSSI_Measurement_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _SS_RSSI_Measurement_H_ */
#include <asn_internal.h>
