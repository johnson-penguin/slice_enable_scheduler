/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "../ASN1_Input/rrc_15_3_asn.asn1"
 * 	`asn1c -D ../RRC_output_14Nov/ -fcompound-names -fno-include-deps -findirect-choice -gen-PER`
 */

#ifndef	_RadioLinkMonitoringRS_H_
#define	_RadioLinkMonitoringRS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RadioLinkMonitoringRS-Id.h"
#include <NativeEnumerated.h>
#include "SSB-Index.h"
#include "NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioLinkMonitoringRS__purpose {
	RadioLinkMonitoringRS__purpose_beamFailure	= 0,
	RadioLinkMonitoringRS__purpose_rlf	= 1,
	RadioLinkMonitoringRS__purpose_both	= 2
} e_RadioLinkMonitoringRS__purpose;
typedef enum RadioLinkMonitoringRS__detectionResource_PR {
	RadioLinkMonitoringRS__detectionResource_PR_NOTHING,	/* No components present */
	RadioLinkMonitoringRS__detectionResource_PR_ssb_Index,
	RadioLinkMonitoringRS__detectionResource_PR_csi_RS_Index
} RadioLinkMonitoringRS__detectionResource_PR;

/* RadioLinkMonitoringRS */
typedef struct RadioLinkMonitoringRS {
	RadioLinkMonitoringRS_Id_t	 radioLinkMonitoringRS_Id;
	long	 purpose;
	struct RadioLinkMonitoringRS__detectionResource {
		RadioLinkMonitoringRS__detectionResource_PR present;
		union RadioLinkMonitoringRS__detectionResource_u {
			SSB_Index_t	 ssb_Index;
			NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} detectionResource;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioLinkMonitoringRS_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_purpose_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RadioLinkMonitoringRS;
extern asn_SEQUENCE_specifics_t asn_SPC_RadioLinkMonitoringRS_specs_1;
extern asn_TYPE_member_t asn_MBR_RadioLinkMonitoringRS_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _RadioLinkMonitoringRS_H_ */
#include <asn_internal.h>
