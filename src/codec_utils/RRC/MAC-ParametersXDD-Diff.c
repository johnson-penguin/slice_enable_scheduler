/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "MAC-ParametersXDD-Diff.h"

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
static asn_oer_constraints_t asn_OER_type_skipUplinkTxDynamic_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_skipUplinkTxDynamic_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_logicalChannelSR_DelayTimer_constr_4 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_logicalChannelSR_DelayTimer_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_longDRX_Cycle_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_longDRX_Cycle_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_shortDRX_Cycle_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_shortDRX_Cycle_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_multipleSR_Configurations_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_multipleSR_Configurations_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_multipleConfiguredGrants_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_multipleConfiguredGrants_constr_12 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_skipUplinkTxDynamic_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_skipUplinkTxDynamic_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_skipUplinkTxDynamic_specs_2 = {
	asn_MAP_skipUplinkTxDynamic_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_skipUplinkTxDynamic_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_skipUplinkTxDynamic_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_skipUplinkTxDynamic_2 = {
	"skipUplinkTxDynamic",
	"skipUplinkTxDynamic",
	&asn_OP_NativeEnumerated,
	asn_DEF_skipUplinkTxDynamic_tags_2,
	sizeof(asn_DEF_skipUplinkTxDynamic_tags_2)
		/sizeof(asn_DEF_skipUplinkTxDynamic_tags_2[0]) - 1, /* 1 */
	asn_DEF_skipUplinkTxDynamic_tags_2,	/* Same as above */
	sizeof(asn_DEF_skipUplinkTxDynamic_tags_2)
		/sizeof(asn_DEF_skipUplinkTxDynamic_tags_2[0]), /* 2 */
	{ &asn_OER_type_skipUplinkTxDynamic_constr_2, &asn_PER_type_skipUplinkTxDynamic_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_skipUplinkTxDynamic_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_logicalChannelSR_DelayTimer_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_logicalChannelSR_DelayTimer_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_logicalChannelSR_DelayTimer_specs_4 = {
	asn_MAP_logicalChannelSR_DelayTimer_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_logicalChannelSR_DelayTimer_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_logicalChannelSR_DelayTimer_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_logicalChannelSR_DelayTimer_4 = {
	"logicalChannelSR-DelayTimer",
	"logicalChannelSR-DelayTimer",
	&asn_OP_NativeEnumerated,
	asn_DEF_logicalChannelSR_DelayTimer_tags_4,
	sizeof(asn_DEF_logicalChannelSR_DelayTimer_tags_4)
		/sizeof(asn_DEF_logicalChannelSR_DelayTimer_tags_4[0]) - 1, /* 1 */
	asn_DEF_logicalChannelSR_DelayTimer_tags_4,	/* Same as above */
	sizeof(asn_DEF_logicalChannelSR_DelayTimer_tags_4)
		/sizeof(asn_DEF_logicalChannelSR_DelayTimer_tags_4[0]), /* 2 */
	{ &asn_OER_type_logicalChannelSR_DelayTimer_constr_4, &asn_PER_type_logicalChannelSR_DelayTimer_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_logicalChannelSR_DelayTimer_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_longDRX_Cycle_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_longDRX_Cycle_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_longDRX_Cycle_specs_6 = {
	asn_MAP_longDRX_Cycle_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_longDRX_Cycle_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_longDRX_Cycle_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_longDRX_Cycle_6 = {
	"longDRX-Cycle",
	"longDRX-Cycle",
	&asn_OP_NativeEnumerated,
	asn_DEF_longDRX_Cycle_tags_6,
	sizeof(asn_DEF_longDRX_Cycle_tags_6)
		/sizeof(asn_DEF_longDRX_Cycle_tags_6[0]) - 1, /* 1 */
	asn_DEF_longDRX_Cycle_tags_6,	/* Same as above */
	sizeof(asn_DEF_longDRX_Cycle_tags_6)
		/sizeof(asn_DEF_longDRX_Cycle_tags_6[0]), /* 2 */
	{ &asn_OER_type_longDRX_Cycle_constr_6, &asn_PER_type_longDRX_Cycle_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_longDRX_Cycle_specs_6	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_shortDRX_Cycle_value2enum_8[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_shortDRX_Cycle_enum2value_8[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_shortDRX_Cycle_specs_8 = {
	asn_MAP_shortDRX_Cycle_value2enum_8,	/* "tag" => N; sorted by tag */
	asn_MAP_shortDRX_Cycle_enum2value_8,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_shortDRX_Cycle_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_shortDRX_Cycle_8 = {
	"shortDRX-Cycle",
	"shortDRX-Cycle",
	&asn_OP_NativeEnumerated,
	asn_DEF_shortDRX_Cycle_tags_8,
	sizeof(asn_DEF_shortDRX_Cycle_tags_8)
		/sizeof(asn_DEF_shortDRX_Cycle_tags_8[0]) - 1, /* 1 */
	asn_DEF_shortDRX_Cycle_tags_8,	/* Same as above */
	sizeof(asn_DEF_shortDRX_Cycle_tags_8)
		/sizeof(asn_DEF_shortDRX_Cycle_tags_8[0]), /* 2 */
	{ &asn_OER_type_shortDRX_Cycle_constr_8, &asn_PER_type_shortDRX_Cycle_constr_8, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_shortDRX_Cycle_specs_8	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multipleSR_Configurations_value2enum_10[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multipleSR_Configurations_enum2value_10[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multipleSR_Configurations_specs_10 = {
	asn_MAP_multipleSR_Configurations_value2enum_10,	/* "tag" => N; sorted by tag */
	asn_MAP_multipleSR_Configurations_enum2value_10,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multipleSR_Configurations_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multipleSR_Configurations_10 = {
	"multipleSR-Configurations",
	"multipleSR-Configurations",
	&asn_OP_NativeEnumerated,
	asn_DEF_multipleSR_Configurations_tags_10,
	sizeof(asn_DEF_multipleSR_Configurations_tags_10)
		/sizeof(asn_DEF_multipleSR_Configurations_tags_10[0]) - 1, /* 1 */
	asn_DEF_multipleSR_Configurations_tags_10,	/* Same as above */
	sizeof(asn_DEF_multipleSR_Configurations_tags_10)
		/sizeof(asn_DEF_multipleSR_Configurations_tags_10[0]), /* 2 */
	{ &asn_OER_type_multipleSR_Configurations_constr_10, &asn_PER_type_multipleSR_Configurations_constr_10, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multipleSR_Configurations_specs_10	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_multipleConfiguredGrants_value2enum_12[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_multipleConfiguredGrants_enum2value_12[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_multipleConfiguredGrants_specs_12 = {
	asn_MAP_multipleConfiguredGrants_value2enum_12,	/* "tag" => N; sorted by tag */
	asn_MAP_multipleConfiguredGrants_enum2value_12,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_multipleConfiguredGrants_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_multipleConfiguredGrants_12 = {
	"multipleConfiguredGrants",
	"multipleConfiguredGrants",
	&asn_OP_NativeEnumerated,
	asn_DEF_multipleConfiguredGrants_tags_12,
	sizeof(asn_DEF_multipleConfiguredGrants_tags_12)
		/sizeof(asn_DEF_multipleConfiguredGrants_tags_12[0]) - 1, /* 1 */
	asn_DEF_multipleConfiguredGrants_tags_12,	/* Same as above */
	sizeof(asn_DEF_multipleConfiguredGrants_tags_12)
		/sizeof(asn_DEF_multipleConfiguredGrants_tags_12[0]), /* 2 */
	{ &asn_OER_type_multipleConfiguredGrants_constr_12, &asn_PER_type_multipleConfiguredGrants_constr_12, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_multipleConfiguredGrants_specs_12	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_MAC_ParametersXDD_Diff_1[] = {
	{ ATF_POINTER, 6, offsetof(struct MAC_ParametersXDD_Diff, skipUplinkTxDynamic),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_skipUplinkTxDynamic_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"skipUplinkTxDynamic"
		},
	{ ATF_POINTER, 5, offsetof(struct MAC_ParametersXDD_Diff, logicalChannelSR_DelayTimer),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_logicalChannelSR_DelayTimer_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"logicalChannelSR-DelayTimer"
		},
	{ ATF_POINTER, 4, offsetof(struct MAC_ParametersXDD_Diff, longDRX_Cycle),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_longDRX_Cycle_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"longDRX-Cycle"
		},
	{ ATF_POINTER, 3, offsetof(struct MAC_ParametersXDD_Diff, shortDRX_Cycle),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_shortDRX_Cycle_8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"shortDRX-Cycle"
		},
	{ ATF_POINTER, 2, offsetof(struct MAC_ParametersXDD_Diff, multipleSR_Configurations),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multipleSR_Configurations_10,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multipleSR-Configurations"
		},
	{ ATF_POINTER, 1, offsetof(struct MAC_ParametersXDD_Diff, multipleConfiguredGrants),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_multipleConfiguredGrants_12,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"multipleConfiguredGrants"
		},
};
static const int asn_MAP_MAC_ParametersXDD_Diff_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_MAC_ParametersXDD_Diff_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MAC_ParametersXDD_Diff_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* skipUplinkTxDynamic */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* logicalChannelSR-DelayTimer */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* longDRX-Cycle */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* shortDRX-Cycle */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* multipleSR-Configurations */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* multipleConfiguredGrants */
};
asn_SEQUENCE_specifics_t asn_SPC_MAC_ParametersXDD_Diff_specs_1 = {
	sizeof(struct MAC_ParametersXDD_Diff),
	offsetof(struct MAC_ParametersXDD_Diff, _asn_ctx),
	asn_MAP_MAC_ParametersXDD_Diff_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_MAC_ParametersXDD_Diff_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MAC_ParametersXDD_Diff = {
	"MAC-ParametersXDD-Diff",
	"MAC-ParametersXDD-Diff",
	&asn_OP_SEQUENCE,
	asn_DEF_MAC_ParametersXDD_Diff_tags_1,
	sizeof(asn_DEF_MAC_ParametersXDD_Diff_tags_1)
		/sizeof(asn_DEF_MAC_ParametersXDD_Diff_tags_1[0]), /* 1 */
	asn_DEF_MAC_ParametersXDD_Diff_tags_1,	/* Same as above */
	sizeof(asn_DEF_MAC_ParametersXDD_Diff_tags_1)
		/sizeof(asn_DEF_MAC_ParametersXDD_Diff_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MAC_ParametersXDD_Diff_1,
	6,	/* Elements count */
	&asn_SPC_MAC_ParametersXDD_Diff_specs_1	/* Additional specs */
};

