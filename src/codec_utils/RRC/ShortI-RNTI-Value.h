/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_ShortI_RNTI_Value_H_
#define	_ShortI_RNTI_Value_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ShortI-RNTI-Value */
typedef BIT_STRING_t	 ShortI_RNTI_Value_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ShortI_RNTI_Value_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ShortI_RNTI_Value;
asn_struct_free_f ShortI_RNTI_Value_free;
asn_struct_print_f ShortI_RNTI_Value_print;
asn_constr_check_f ShortI_RNTI_Value_constraint;
ber_type_decoder_f ShortI_RNTI_Value_decode_ber;
der_type_encoder_f ShortI_RNTI_Value_encode_der;
xer_type_decoder_f ShortI_RNTI_Value_decode_xer;
xer_type_encoder_f ShortI_RNTI_Value_encode_xer;
oer_type_decoder_f ShortI_RNTI_Value_decode_oer;
oer_type_encoder_f ShortI_RNTI_Value_encode_oer;
per_type_decoder_f ShortI_RNTI_Value_decode_uper;
per_type_encoder_f ShortI_RNTI_Value_encode_uper;
per_type_decoder_f ShortI_RNTI_Value_decode_aper;
per_type_encoder_f ShortI_RNTI_Value_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ShortI_RNTI_Value_H_ */
#include <asn_internal.h>
