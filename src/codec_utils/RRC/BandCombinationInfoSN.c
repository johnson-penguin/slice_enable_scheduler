/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "BandCombinationInfoSN.h"

asn_TYPE_member_t asn_MBR_BandCombinationInfoSN_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombinationInfoSN, bandCombinationIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandCombinationIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandCombinationIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct BandCombinationInfoSN, requestedFeatureSets),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FeatureSetEntryIndex,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"requestedFeatureSets"
		},
};
static const ber_tlv_tag_t asn_DEF_BandCombinationInfoSN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_BandCombinationInfoSN_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandCombinationIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* requestedFeatureSets */
};
asn_SEQUENCE_specifics_t asn_SPC_BandCombinationInfoSN_specs_1 = {
	sizeof(struct BandCombinationInfoSN),
	offsetof(struct BandCombinationInfoSN, _asn_ctx),
	asn_MAP_BandCombinationInfoSN_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_BandCombinationInfoSN = {
	"BandCombinationInfoSN",
	"BandCombinationInfoSN",
	&asn_OP_SEQUENCE,
	asn_DEF_BandCombinationInfoSN_tags_1,
	sizeof(asn_DEF_BandCombinationInfoSN_tags_1)
		/sizeof(asn_DEF_BandCombinationInfoSN_tags_1[0]), /* 1 */
	asn_DEF_BandCombinationInfoSN_tags_1,	/* Same as above */
	sizeof(asn_DEF_BandCombinationInfoSN_tags_1)
		/sizeof(asn_DEF_BandCombinationInfoSN_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_BandCombinationInfoSN_1,
	2,	/* Elements count */
	&asn_SPC_BandCombinationInfoSN_specs_1	/* Additional specs */
};

