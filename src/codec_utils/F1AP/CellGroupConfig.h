/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_CellGroupConfig_H_
#define	_CellGroupConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CellGroupConfig */
typedef OCTET_STRING_t	 CellGroupConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellGroupConfig;
asn_struct_free_f CellGroupConfig_free;
asn_struct_print_f CellGroupConfig_print;
asn_constr_check_f CellGroupConfig_constraint;
ber_type_decoder_f CellGroupConfig_decode_ber;
der_type_encoder_f CellGroupConfig_encode_der;
xer_type_decoder_f CellGroupConfig_decode_xer;
xer_type_encoder_f CellGroupConfig_encode_xer;
oer_type_decoder_f CellGroupConfig_decode_oer;
oer_type_encoder_f CellGroupConfig_encode_oer;
per_type_decoder_f CellGroupConfig_decode_uper;
per_type_encoder_f CellGroupConfig_encode_uper;
per_type_decoder_f CellGroupConfig_decode_aper;
per_type_encoder_f CellGroupConfig_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellGroupConfig_H_ */
#include <asn_internal.h>
