/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "MRDC-Parameters.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_singleUL_Transmission_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_singleUL_Transmission_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dynamicPowerSharing_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dynamicPowerSharing_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_tdm_Pattern_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_tdm_Pattern_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ul_SharingEUTRA_NR_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ul_SharingEUTRA_NR_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ul_SwitchingTimeEUTRA_NR_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ul_SwitchingTimeEUTRA_NR_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_simultaneousRxTxInterBandENDC_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_simultaneousRxTxInterBandENDC_constr_15 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_asyncIntraBandENDC_constr_17 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_asyncIntraBandENDC_constr_17 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_singleUL_Transmission_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_singleUL_Transmission_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_singleUL_Transmission_specs_2 = {
	asn_MAP_singleUL_Transmission_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_singleUL_Transmission_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_singleUL_Transmission_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_singleUL_Transmission_2 = {
	"singleUL-Transmission",
	"singleUL-Transmission",
	&asn_OP_NativeEnumerated,
	asn_DEF_singleUL_Transmission_tags_2,
	sizeof(asn_DEF_singleUL_Transmission_tags_2)
		/sizeof(asn_DEF_singleUL_Transmission_tags_2[0]) - 1, /* 1 */
	asn_DEF_singleUL_Transmission_tags_2,	/* Same as above */
	sizeof(asn_DEF_singleUL_Transmission_tags_2)
		/sizeof(asn_DEF_singleUL_Transmission_tags_2[0]), /* 2 */
	{ &asn_OER_type_singleUL_Transmission_constr_2, &asn_PER_type_singleUL_Transmission_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_singleUL_Transmission_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dynamicPowerSharing_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_dynamicPowerSharing_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_dynamicPowerSharing_specs_4 = {
	asn_MAP_dynamicPowerSharing_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_dynamicPowerSharing_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dynamicPowerSharing_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dynamicPowerSharing_4 = {
	"dynamicPowerSharing",
	"dynamicPowerSharing",
	&asn_OP_NativeEnumerated,
	asn_DEF_dynamicPowerSharing_tags_4,
	sizeof(asn_DEF_dynamicPowerSharing_tags_4)
		/sizeof(asn_DEF_dynamicPowerSharing_tags_4[0]) - 1, /* 1 */
	asn_DEF_dynamicPowerSharing_tags_4,	/* Same as above */
	sizeof(asn_DEF_dynamicPowerSharing_tags_4)
		/sizeof(asn_DEF_dynamicPowerSharing_tags_4[0]), /* 2 */
	{ &asn_OER_type_dynamicPowerSharing_constr_4, &asn_PER_type_dynamicPowerSharing_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dynamicPowerSharing_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_tdm_Pattern_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_tdm_Pattern_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_tdm_Pattern_specs_6 = {
	asn_MAP_tdm_Pattern_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_tdm_Pattern_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_tdm_Pattern_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdm_Pattern_6 = {
	"tdm-Pattern",
	"tdm-Pattern",
	&asn_OP_NativeEnumerated,
	asn_DEF_tdm_Pattern_tags_6,
	sizeof(asn_DEF_tdm_Pattern_tags_6)
		/sizeof(asn_DEF_tdm_Pattern_tags_6[0]) - 1, /* 1 */
	asn_DEF_tdm_Pattern_tags_6,	/* Same as above */
	sizeof(asn_DEF_tdm_Pattern_tags_6)
		/sizeof(asn_DEF_tdm_Pattern_tags_6[0]), /* 2 */
	{ &asn_OER_type_tdm_Pattern_constr_6, &asn_PER_type_tdm_Pattern_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_tdm_Pattern_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_SharingEUTRA_NR_value2enum_8[] = {
	{ 0,	3,	"tdm" },
	{ 1,	3,	"fdm" },
	{ 2,	4,	"both" }
};
static const unsigned int asn_MAP_ul_SharingEUTRA_NR_enum2value_8[] = {
	2,	/* both(2) */
	1,	/* fdm(1) */
	0	/* tdm(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_SharingEUTRA_NR_specs_8 = {
	asn_MAP_ul_SharingEUTRA_NR_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_SharingEUTRA_NR_enum2value_8,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_SharingEUTRA_NR_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_SharingEUTRA_NR_8 = {
	"ul-SharingEUTRA-NR",
	"ul-SharingEUTRA-NR",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_SharingEUTRA_NR_tags_8,
	sizeof(asn_DEF_ul_SharingEUTRA_NR_tags_8)
		/sizeof(asn_DEF_ul_SharingEUTRA_NR_tags_8[0]) - 1, /* 1 */
	asn_DEF_ul_SharingEUTRA_NR_tags_8,	/* Same as above */
	sizeof(asn_DEF_ul_SharingEUTRA_NR_tags_8)
		/sizeof(asn_DEF_ul_SharingEUTRA_NR_tags_8[0]), /* 2 */
	{ &asn_OER_type_ul_SharingEUTRA_NR_constr_8, &asn_PER_type_ul_SharingEUTRA_NR_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_SharingEUTRA_NR_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ul_SwitchingTimeEUTRA_NR_value2enum_12[] = {
	{ 0,	5,	"type1" },
	{ 1,	5,	"type2" }
};
static const unsigned int asn_MAP_ul_SwitchingTimeEUTRA_NR_enum2value_12[] = {
	0,	/* type1(0) */
	1	/* type2(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_ul_SwitchingTimeEUTRA_NR_specs_12 = {
	asn_MAP_ul_SwitchingTimeEUTRA_NR_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_ul_SwitchingTimeEUTRA_NR_enum2value_12,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_SwitchingTimeEUTRA_NR_12 = {
	"ul-SwitchingTimeEUTRA-NR",
	"ul-SwitchingTimeEUTRA-NR",
	&asn_OP_NativeEnumerated,
	asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12,
	sizeof(asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12)
		/sizeof(asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12[0]) - 1, /* 1 */
	asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12,	/* Same as above */
	sizeof(asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12)
		/sizeof(asn_DEF_ul_SwitchingTimeEUTRA_NR_tags_12[0]), /* 2 */
	{ &asn_OER_type_ul_SwitchingTimeEUTRA_NR_constr_12, &asn_PER_type_ul_SwitchingTimeEUTRA_NR_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ul_SwitchingTimeEUTRA_NR_specs_12	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_simultaneousRxTxInterBandENDC_value2enum_15[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_simultaneousRxTxInterBandENDC_enum2value_15[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_simultaneousRxTxInterBandENDC_specs_15 = {
	asn_MAP_simultaneousRxTxInterBandENDC_value2enum_15,	/* "tag" => N; sorted by tag */
	asn_MAP_simultaneousRxTxInterBandENDC_enum2value_15,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_simultaneousRxTxInterBandENDC_tags_15[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_simultaneousRxTxInterBandENDC_15 = {
	"simultaneousRxTxInterBandENDC",
	"simultaneousRxTxInterBandENDC",
	&asn_OP_NativeEnumerated,
	asn_DEF_simultaneousRxTxInterBandENDC_tags_15,
	sizeof(asn_DEF_simultaneousRxTxInterBandENDC_tags_15)
		/sizeof(asn_DEF_simultaneousRxTxInterBandENDC_tags_15[0]) - 1, /* 1 */
	asn_DEF_simultaneousRxTxInterBandENDC_tags_15,	/* Same as above */
	sizeof(asn_DEF_simultaneousRxTxInterBandENDC_tags_15)
		/sizeof(asn_DEF_simultaneousRxTxInterBandENDC_tags_15[0]), /* 2 */
	{ &asn_OER_type_simultaneousRxTxInterBandENDC_constr_15, &asn_PER_type_simultaneousRxTxInterBandENDC_constr_15, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_simultaneousRxTxInterBandENDC_specs_15	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_asyncIntraBandENDC_value2enum_17[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_asyncIntraBandENDC_enum2value_17[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_asyncIntraBandENDC_specs_17 = {
	asn_MAP_asyncIntraBandENDC_value2enum_17,	/* "tag" => N; sorted by tag */
	asn_MAP_asyncIntraBandENDC_enum2value_17,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_asyncIntraBandENDC_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_asyncIntraBandENDC_17 = {
	"asyncIntraBandENDC",
	"asyncIntraBandENDC",
	&asn_OP_NativeEnumerated,
	asn_DEF_asyncIntraBandENDC_tags_17,
	sizeof(asn_DEF_asyncIntraBandENDC_tags_17)
		/sizeof(asn_DEF_asyncIntraBandENDC_tags_17[0]) - 1, /* 1 */
	asn_DEF_asyncIntraBandENDC_tags_17,	/* Same as above */
	sizeof(asn_DEF_asyncIntraBandENDC_tags_17)
		/sizeof(asn_DEF_asyncIntraBandENDC_tags_17[0]), /* 2 */
	{ &asn_OER_type_asyncIntraBandENDC_constr_17, &asn_PER_type_asyncIntraBandENDC_constr_17, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_asyncIntraBandENDC_specs_17	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MRDC_Parameters_1[] = {
	{ ATF_POINTER, 7, offsetof(struct MRDC_Parameters, singleUL_Transmission),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_singleUL_Transmission_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"singleUL-Transmission"
		},
	{ ATF_POINTER, 6, offsetof(struct MRDC_Parameters, dynamicPowerSharing),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dynamicPowerSharing_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dynamicPowerSharing"
		},
	{ ATF_POINTER, 5, offsetof(struct MRDC_Parameters, tdm_Pattern),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_tdm_Pattern_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"tdm-Pattern"
		},
	{ ATF_POINTER, 4, offsetof(struct MRDC_Parameters, ul_SharingEUTRA_NR),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_SharingEUTRA_NR_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-SharingEUTRA-NR"
		},
	{ ATF_POINTER, 3, offsetof(struct MRDC_Parameters, ul_SwitchingTimeEUTRA_NR),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ul_SwitchingTimeEUTRA_NR_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ul-SwitchingTimeEUTRA-NR"
		},
	{ ATF_POINTER, 2, offsetof(struct MRDC_Parameters, simultaneousRxTxInterBandENDC),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_simultaneousRxTxInterBandENDC_15,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"simultaneousRxTxInterBandENDC"
		},
	{ ATF_POINTER, 1, offsetof(struct MRDC_Parameters, asyncIntraBandENDC),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_asyncIntraBandENDC_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"asyncIntraBandENDC"
		},
};
static const int asn_MAP_MRDC_Parameters_oms_1[] = { 0, 1, 2, 3, 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_MRDC_Parameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MRDC_Parameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* singleUL-Transmission */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* dynamicPowerSharing */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tdm-Pattern */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ul-SharingEUTRA-NR */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* ul-SwitchingTimeEUTRA-NR */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* simultaneousRxTxInterBandENDC */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* asyncIntraBandENDC */
};
asn_SEQUENCE_specifics_t asn_SPC_MRDC_Parameters_specs_1 = {
	sizeof(struct MRDC_Parameters),
	offsetof(struct MRDC_Parameters, _asn_ctx),
	asn_MAP_MRDC_Parameters_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_MRDC_Parameters_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	7,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MRDC_Parameters = {
	"MRDC-Parameters",
	"MRDC-Parameters",
	&asn_OP_SEQUENCE,
	asn_DEF_MRDC_Parameters_tags_1,
	sizeof(asn_DEF_MRDC_Parameters_tags_1)
		/sizeof(asn_DEF_MRDC_Parameters_tags_1[0]), /* 1 */
	asn_DEF_MRDC_Parameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_MRDC_Parameters_tags_1)
		/sizeof(asn_DEF_MRDC_Parameters_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MRDC_Parameters_1,
	7,	/* Elements count */
	&asn_SPC_MRDC_Parameters_specs_1	/* Additional specs */
};

