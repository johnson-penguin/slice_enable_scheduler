/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "MeasResultCellSFTD.h"

static int
memb_sfn_OffsetResult_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 1023)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_frameBoundaryOffsetResult_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -30720 && value <= 30719)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_oer_constraints_t asn_OER_memb_sfn_OffsetResult_constr_3 CC_NOTUSED = {
	{ 2, 1 }	/* (0..1023) */,
	-1};
static asn_per_constraints_t asn_PER_memb_sfn_OffsetResult_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 10,  10,  0,  1023 }	/* (0..1023) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_frameBoundaryOffsetResult_constr_4 CC_NOTUSED = {
	{ 2, 0 }	/* (-30720..30719) */,
	-1};
static asn_per_constraints_t asn_PER_memb_frameBoundaryOffsetResult_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 16,  16, -30720,  30719 }	/* (-30720..30719) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_MeasResultCellSFTD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultCellSFTD, physCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"physCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultCellSFTD, sfn_OffsetResult),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_sfn_OffsetResult_constr_3, &asn_PER_memb_sfn_OffsetResult_constr_3,  memb_sfn_OffsetResult_constraint_1 },
		0, 0, /* No default value */
		"sfn-OffsetResult"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MeasResultCellSFTD, frameBoundaryOffsetResult),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ &asn_OER_memb_frameBoundaryOffsetResult_constr_4, &asn_PER_memb_frameBoundaryOffsetResult_constr_4,  memb_frameBoundaryOffsetResult_constraint_1 },
		0, 0, /* No default value */
		"frameBoundaryOffsetResult"
		},
	{ ATF_POINTER, 1, offsetof(struct MeasResultCellSFTD, rsrp_Result),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RSRP_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsrp-Result"
		},
};
static const int asn_MAP_MeasResultCellSFTD_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_MeasResultCellSFTD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MeasResultCellSFTD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* physCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sfn-OffsetResult */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* frameBoundaryOffsetResult */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* rsrp-Result */
};
asn_SEQUENCE_specifics_t asn_SPC_MeasResultCellSFTD_specs_1 = {
	sizeof(struct MeasResultCellSFTD),
	offsetof(struct MeasResultCellSFTD, _asn_ctx),
	asn_MAP_MeasResultCellSFTD_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_MeasResultCellSFTD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_MeasResultCellSFTD = {
	"MeasResultCellSFTD",
	"MeasResultCellSFTD",
	&asn_OP_SEQUENCE,
	asn_DEF_MeasResultCellSFTD_tags_1,
	sizeof(asn_DEF_MeasResultCellSFTD_tags_1)
		/sizeof(asn_DEF_MeasResultCellSFTD_tags_1[0]), /* 1 */
	asn_DEF_MeasResultCellSFTD_tags_1,	/* Same as above */
	sizeof(asn_DEF_MeasResultCellSFTD_tags_1)
		/sizeof(asn_DEF_MeasResultCellSFTD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_MeasResultCellSFTD_1,
	4,	/* Elements count */
	&asn_SPC_MeasResultCellSFTD_specs_1	/* Additional specs */
};

