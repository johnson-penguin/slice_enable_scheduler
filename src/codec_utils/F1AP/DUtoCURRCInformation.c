/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "../F1.asn1"
 * 	`asn1c -D ../F1_output/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "DUtoCURRCInformation.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_DUtoCURRCInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DUtoCURRCInformation, cellGroupConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CellGroupConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cellGroupConfig"
		},
	{ ATF_POINTER, 3, offsetof(struct DUtoCURRCInformation, measGapConfig),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasGapConfig,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measGapConfig"
		},
	{ ATF_POINTER, 2, offsetof(struct DUtoCURRCInformation, requestedP_MaxFR1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedP-MaxFR1"
		},
	{ ATF_POINTER, 1, offsetof(struct DUtoCURRCInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_4624P36,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_DUtoCURRCInformation_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_DUtoCURRCInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DUtoCURRCInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellGroupConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measGapConfig */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* requestedP-MaxFR1 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_DUtoCURRCInformation_specs_1 = {
	sizeof(struct DUtoCURRCInformation),
	offsetof(struct DUtoCURRCInformation, _asn_ctx),
	asn_MAP_DUtoCURRCInformation_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_DUtoCURRCInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_DUtoCURRCInformation = {
	"DUtoCURRCInformation",
	"DUtoCURRCInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_DUtoCURRCInformation_tags_1,
	sizeof(asn_DEF_DUtoCURRCInformation_tags_1)
		/sizeof(asn_DEF_DUtoCURRCInformation_tags_1[0]), /* 1 */
	asn_DEF_DUtoCURRCInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_DUtoCURRCInformation_tags_1)
		/sizeof(asn_DEF_DUtoCURRCInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_DUtoCURRCInformation_1,
	4,	/* Elements count */
	&asn_SPC_DUtoCURRCInformation_specs_1	/* Additional specs */
};

