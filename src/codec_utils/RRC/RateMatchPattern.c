/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#include "RateMatchPattern.h"

static int
memb_oneSlot_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 14)) {
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
memb_twoSlots_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 28)) {
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
memb_n2_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 2)) {
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
memb_n4_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 4)) {
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
memb_n5_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 5)) {
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
memb_n8_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 8)) {
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
memb_n10_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 10)) {
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
memb_n20_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 20)) {
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
memb_n40_constraint_9(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 40)) {
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
memb_resourceBlocks_constraint_4(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size == 275)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_memb_oneSlot_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	14	/* (SIZE(14..14)) */};
static asn_per_constraints_t asn_PER_memb_oneSlot_constr_7 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  14,  14 }	/* (SIZE(14..14)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_twoSlots_constr_8 CC_NOTUSED = {
	{ 0, 0 },
	28	/* (SIZE(28..28)) */};
static asn_per_constraints_t asn_PER_memb_twoSlots_constr_8 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  28,  28 }	/* (SIZE(28..28)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_symbolsInResourceBlock_constr_6 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_symbolsInResourceBlock_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n2_constr_10 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
static asn_per_constraints_t asn_PER_memb_n2_constr_10 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n4_constr_11 CC_NOTUSED = {
	{ 0, 0 },
	4	/* (SIZE(4..4)) */};
static asn_per_constraints_t asn_PER_memb_n4_constr_11 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  4,  4 }	/* (SIZE(4..4)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n5_constr_12 CC_NOTUSED = {
	{ 0, 0 },
	5	/* (SIZE(5..5)) */};
static asn_per_constraints_t asn_PER_memb_n5_constr_12 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  5,  5 }	/* (SIZE(5..5)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n8_constr_13 CC_NOTUSED = {
	{ 0, 0 },
	8	/* (SIZE(8..8)) */};
static asn_per_constraints_t asn_PER_memb_n8_constr_13 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  8,  8 }	/* (SIZE(8..8)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n10_constr_14 CC_NOTUSED = {
	{ 0, 0 },
	10	/* (SIZE(10..10)) */};
static asn_per_constraints_t asn_PER_memb_n10_constr_14 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  10,  10 }	/* (SIZE(10..10)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n20_constr_15 CC_NOTUSED = {
	{ 0, 0 },
	20	/* (SIZE(20..20)) */};
static asn_per_constraints_t asn_PER_memb_n20_constr_15 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  20,  20 }	/* (SIZE(20..20)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_n40_constr_16 CC_NOTUSED = {
	{ 0, 0 },
	40	/* (SIZE(40..40)) */};
static asn_per_constraints_t asn_PER_memb_n40_constr_16 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  40,  40 }	/* (SIZE(40..40)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_periodicityAndPattern_constr_9 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_periodicityAndPattern_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_memb_resourceBlocks_constr_5 CC_NOTUSED = {
	{ 0, 0 },
	275	/* (SIZE(275..275)) */};
static asn_per_constraints_t asn_PER_memb_resourceBlocks_constr_5 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  275,  275 }	/* (SIZE(275..275)) */,
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_patternType_constr_3 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_patternType_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_dummy_constr_20 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_dummy_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_symbolsInResourceBlock_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__symbolsInResourceBlock, choice.oneSlot),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_oneSlot_constr_7, &asn_PER_memb_oneSlot_constr_7,  memb_oneSlot_constraint_6 },
		0, 0, /* No default value */
		"oneSlot"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__symbolsInResourceBlock, choice.twoSlots),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_twoSlots_constr_8, &asn_PER_memb_twoSlots_constr_8,  memb_twoSlots_constraint_6 },
		0, 0, /* No default value */
		"twoSlots"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_symbolsInResourceBlock_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* oneSlot */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* twoSlots */
};
static asn_CHOICE_specifics_t asn_SPC_symbolsInResourceBlock_specs_6 = {
	sizeof(struct RateMatchPattern__patternType__bitmaps__symbolsInResourceBlock),
	offsetof(struct RateMatchPattern__patternType__bitmaps__symbolsInResourceBlock, _asn_ctx),
	offsetof(struct RateMatchPattern__patternType__bitmaps__symbolsInResourceBlock, present),
	sizeof(((struct RateMatchPattern__patternType__bitmaps__symbolsInResourceBlock *)0)->present),
	asn_MAP_symbolsInResourceBlock_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_symbolsInResourceBlock_6 = {
	"symbolsInResourceBlock",
	"symbolsInResourceBlock",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_symbolsInResourceBlock_constr_6, &asn_PER_type_symbolsInResourceBlock_constr_6, CHOICE_constraint },
	asn_MBR_symbolsInResourceBlock_6,
	2,	/* Elements count */
	&asn_SPC_symbolsInResourceBlock_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_periodicityAndPattern_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n2),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n2_constr_10, &asn_PER_memb_n2_constr_10,  memb_n2_constraint_9 },
		0, 0, /* No default value */
		"n2"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n4),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n4_constr_11, &asn_PER_memb_n4_constr_11,  memb_n4_constraint_9 },
		0, 0, /* No default value */
		"n4"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n5),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n5_constr_12, &asn_PER_memb_n5_constr_12,  memb_n5_constraint_9 },
		0, 0, /* No default value */
		"n5"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n8),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n8_constr_13, &asn_PER_memb_n8_constr_13,  memb_n8_constraint_9 },
		0, 0, /* No default value */
		"n8"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n10),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n10_constr_14, &asn_PER_memb_n10_constr_14,  memb_n10_constraint_9 },
		0, 0, /* No default value */
		"n10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n20),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n20_constr_15, &asn_PER_memb_n20_constr_15,  memb_n20_constraint_9 },
		0, 0, /* No default value */
		"n20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, choice.n40),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_n40_constr_16, &asn_PER_memb_n40_constr_16,  memb_n40_constraint_9 },
		0, 0, /* No default value */
		"n40"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_periodicityAndPattern_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* n2 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* n4 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* n5 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* n8 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* n10 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* n20 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* n40 */
};
static asn_CHOICE_specifics_t asn_SPC_periodicityAndPattern_specs_9 = {
	sizeof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern),
	offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, _asn_ctx),
	offsetof(struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern, present),
	sizeof(((struct RateMatchPattern__patternType__bitmaps__periodicityAndPattern *)0)->present),
	asn_MAP_periodicityAndPattern_tag2el_9,
	7,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_periodicityAndPattern_9 = {
	"periodicityAndPattern",
	"periodicityAndPattern",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_periodicityAndPattern_constr_9, &asn_PER_type_periodicityAndPattern_constr_9, CHOICE_constraint },
	asn_MBR_periodicityAndPattern_9,
	7,	/* Elements count */
	&asn_SPC_periodicityAndPattern_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_bitmaps_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps, resourceBlocks),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ &asn_OER_memb_resourceBlocks_constr_5, &asn_PER_memb_resourceBlocks_constr_5,  memb_resourceBlocks_constraint_4 },
		0, 0, /* No default value */
		"resourceBlocks"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType__bitmaps, symbolsInResourceBlock),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_symbolsInResourceBlock_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"symbolsInResourceBlock"
		},
	{ ATF_POINTER, 1, offsetof(struct RateMatchPattern__patternType__bitmaps, periodicityAndPattern),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_periodicityAndPattern_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"periodicityAndPattern"
		},
};
static const int asn_MAP_bitmaps_oms_4[] = { 2 };
static const ber_tlv_tag_t asn_DEF_bitmaps_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_bitmaps_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* resourceBlocks */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* symbolsInResourceBlock */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* periodicityAndPattern */
};
static asn_SEQUENCE_specifics_t asn_SPC_bitmaps_specs_4 = {
	sizeof(struct RateMatchPattern__patternType__bitmaps),
	offsetof(struct RateMatchPattern__patternType__bitmaps, _asn_ctx),
	asn_MAP_bitmaps_tag2el_4,
	3,	/* Count of tags in the map */
	asn_MAP_bitmaps_oms_4,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_bitmaps_4 = {
	"bitmaps",
	"bitmaps",
	&asn_OP_SEQUENCE,
	asn_DEF_bitmaps_tags_4,
	sizeof(asn_DEF_bitmaps_tags_4)
		/sizeof(asn_DEF_bitmaps_tags_4[0]) - 1, /* 1 */
	asn_DEF_bitmaps_tags_4,	/* Same as above */
	sizeof(asn_DEF_bitmaps_tags_4)
		/sizeof(asn_DEF_bitmaps_tags_4[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_bitmaps_4,
	3,	/* Elements count */
	&asn_SPC_bitmaps_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_patternType_3[] = {
	{ ATF_POINTER, 0, offsetof(struct RateMatchPattern__patternType, choice.bitmaps),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_bitmaps_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bitmaps"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern__patternType, choice.controlResourceSet),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ControlResourceSetId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"controlResourceSet"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_patternType_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bitmaps */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* controlResourceSet */
};
static asn_CHOICE_specifics_t asn_SPC_patternType_specs_3 = {
	sizeof(struct RateMatchPattern__patternType),
	offsetof(struct RateMatchPattern__patternType, _asn_ctx),
	offsetof(struct RateMatchPattern__patternType, present),
	sizeof(((struct RateMatchPattern__patternType *)0)->present),
	asn_MAP_patternType_tag2el_3,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_patternType_3 = {
	"patternType",
	"patternType",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_patternType_constr_3, &asn_PER_type_patternType_constr_3, CHOICE_constraint },
	asn_MBR_patternType_3,
	2,	/* Elements count */
	&asn_SPC_patternType_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_dummy_value2enum_20[] = {
	{ 0,	7,	"dynamic" },
	{ 1,	10,	"semiStatic" }
};
static const unsigned int asn_MAP_dummy_enum2value_20[] = {
	0,	/* dynamic(0) */
	1	/* semiStatic(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_dummy_specs_20 = {
	asn_MAP_dummy_value2enum_20,	/* "tag" => N; sorted by tag */
	asn_MAP_dummy_enum2value_20,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_dummy_tags_20[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_dummy_20 = {
	"dummy",
	"dummy",
	&asn_OP_NativeEnumerated,
	asn_DEF_dummy_tags_20,
	sizeof(asn_DEF_dummy_tags_20)
		/sizeof(asn_DEF_dummy_tags_20[0]) - 1, /* 1 */
	asn_DEF_dummy_tags_20,	/* Same as above */
	sizeof(asn_DEF_dummy_tags_20)
		/sizeof(asn_DEF_dummy_tags_20[0]), /* 2 */
	{ &asn_OER_type_dummy_constr_20, &asn_PER_type_dummy_constr_20, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_dummy_specs_20	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_RateMatchPattern_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern, rateMatchPatternId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RateMatchPatternId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rateMatchPatternId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern, patternType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_patternType_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"patternType"
		},
	{ ATF_POINTER, 1, offsetof(struct RateMatchPattern, subcarrierSpacing),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SubcarrierSpacing,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"subcarrierSpacing"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RateMatchPattern, dummy),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_dummy_20,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dummy"
		},
};
static const int asn_MAP_RateMatchPattern_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_RateMatchPattern_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RateMatchPattern_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rateMatchPatternId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* patternType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* subcarrierSpacing */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* dummy */
};
asn_SEQUENCE_specifics_t asn_SPC_RateMatchPattern_specs_1 = {
	sizeof(struct RateMatchPattern),
	offsetof(struct RateMatchPattern, _asn_ctx),
	asn_MAP_RateMatchPattern_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_RateMatchPattern_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_RateMatchPattern = {
	"RateMatchPattern",
	"RateMatchPattern",
	&asn_OP_SEQUENCE,
	asn_DEF_RateMatchPattern_tags_1,
	sizeof(asn_DEF_RateMatchPattern_tags_1)
		/sizeof(asn_DEF_RateMatchPattern_tags_1[0]), /* 1 */
	asn_DEF_RateMatchPattern_tags_1,	/* Same as above */
	sizeof(asn_DEF_RateMatchPattern_tags_1)
		/sizeof(asn_DEF_RateMatchPattern_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_RateMatchPattern_1,
	4,	/* Elements count */
	&asn_SPC_RateMatchPattern_specs_1	/* Additional specs */
};

