/*
 * MACHINE GENERATED: DO NOT EDIT
 *
 * ioconf.c, from "SAMSKERNEL"
 */

#include <sys/param.h>
#include <sys/device.h>

extern struct cfdriver audio_cd;
extern struct cfdriver midi_cd;
extern struct cfdriver vga_cd;
extern struct cfdriver wdc_cd;
extern struct cfdriver ahc_cd;
extern struct cfdriver aic_cd;
extern struct cfdriver dpt_cd;
extern struct cfdriver adv_cd;
extern struct cfdriver adw_cd;
extern struct cfdriver bha_cd;
extern struct cfdriver gdt_cd;
extern struct cfdriver twe_cd;
extern struct cfdriver cac_cd;
extern struct cfdriver ami_cd;
extern struct cfdriver isp_cd;
extern struct cfdriver mpt_cd;
extern struct cfdriver uha_cd;
extern struct cfdriver siop_cd;
extern struct cfdriver ep_cd;
extern struct cfdriver lc_cd;
extern struct cfdriver wi_cd;
extern struct cfdriver an_cd;
extern struct cfdriver le_cd;
extern struct cfdriver xl_cd;
extern struct cfdriver fxp_cd;
extern struct cfdriver mtd_cd;
extern struct cfdriver rl_cd;
extern struct cfdriver dc_cd;
extern struct cfdriver sm_cd;
extern struct cfdriver ne_cd;
extern struct cfdriver ie_cd;
extern struct cfdriver pckbc_cd;
extern struct cfdriver opl_cd;
extern struct cfdriver cy_cd;
extern struct cfdriver lpt_cd;
extern struct cfdriver iha_cd;
extern struct cfdriver trm_cd;
extern struct cfdriver lm_cd;
extern struct cfdriver uhci_cd;
extern struct cfdriver ohci_cd;
extern struct cfdriver radio_cd;
extern struct cfdriver nsphy_cd;
extern struct cfdriver nsphyter_cd;
extern struct cfdriver qsphy_cd;
extern struct cfdriver inphy_cd;
extern struct cfdriver iophy_cd;
extern struct cfdriver eephy_cd;
extern struct cfdriver exphy_cd;
extern struct cfdriver rlphy_cd;
extern struct cfdriver lxtphy_cd;
extern struct cfdriver mtdphy_cd;
extern struct cfdriver icsphy_cd;
extern struct cfdriver sqphy_cd;
extern struct cfdriver tqphy_cd;
extern struct cfdriver ukphy_cd;
extern struct cfdriver dcphy_cd;
extern struct cfdriver bmtphy_cd;
extern struct cfdriver brgphy_cd;
extern struct cfdriver xmphy_cd;
extern struct cfdriver amphy_cd;
extern struct cfdriver acphy_cd;
extern struct cfdriver nsgphy_cd;
extern struct cfdriver urlphy_cd;
extern struct cfdriver scsibus_cd;
extern struct cfdriver cd_cd;
extern struct cfdriver ch_cd;
extern struct cfdriver sd_cd;
extern struct cfdriver st_cd;
extern struct cfdriver ss_cd;
extern struct cfdriver uk_cd;
extern struct cfdriver iop_cd;
extern struct cfdriver ioprbs_cd;
extern struct cfdriver atapiscsi_cd;
extern struct cfdriver wd_cd;
extern struct cfdriver mainbus_cd;
extern struct cfdriver pci_cd;
extern struct cfdriver eap_cd;
extern struct cfdriver eso_cd;
extern struct cfdriver auich_cd;
extern struct cfdriver emu_cd;
extern struct cfdriver autri_cd;
extern struct cfdriver clcs_cd;
extern struct cfdriver clct_cd;
extern struct cfdriver maestro_cd;
extern struct cfdriver esa_cd;
extern struct cfdriver yds_cd;
extern struct cfdriver fms_cd;
extern struct cfdriver auvia_cd;
extern struct cfdriver aac_cd;
extern struct cfdriver de_cd;
extern struct cfdriver fpa_cd;
extern struct cfdriver neo_cd;
extern struct cfdriver pciide_cd;
extern struct cfdriver ppb_cd;
extern struct cfdriver lmc_cd;
extern struct cfdriver vr_cd;
extern struct cfdriver tl_cd;
extern struct cfdriver txp_cd;
extern struct cfdriver sv_cd;
extern struct cfdriver bktr_cd;
extern struct cfdriver em_cd;
extern struct cfdriver tx_cd;
extern struct cfdriver ti_cd;
extern struct cfdriver lofn_cd;
extern struct cfdriver hifn_cd;
extern struct cfdriver nofn_cd;
extern struct cfdriver ubsec_cd;
extern struct cfdriver safe_cd;
extern struct cfdriver wb_cd;
extern struct cfdriver sf_cd;
extern struct cfdriver sis_cd;
extern struct cfdriver ste_cd;
extern struct cfdriver cbb_cd;
extern struct cfdriver skc_cd;
extern struct cfdriver sk_cd;
extern struct cfdriver puc_cd;
extern struct cfdriver cmpci_cd;
extern struct cfdriver pcscp_cd;
extern struct cfdriver nge_cd;
extern struct cfdriver bge_cd;
extern struct cfdriver stge_cd;
extern struct cfdriver viaenv_cd;
extern struct cfdriver bce_cd;
extern struct cfdriver pchb_cd;
extern struct cfdriver elansc_cd;
extern struct cfdriver geodesc_cd;
extern struct cfdriver pcib_cd;
extern struct cfdriver hme_cd;
extern struct cfdriver isa_cd;
extern struct cfdriver isadma_cd;
extern struct cfdriver ast_cd;
extern struct cfdriver pcdisplay_cd;
extern struct cfdriver aha_cd;
extern struct cfdriver sea_cd;
extern struct cfdriver wds_cd;
extern struct cfdriver we_cd;
extern struct cfdriver ec_cd;
extern struct cfdriver eg_cd;
extern struct cfdriver el_cd;
extern struct cfdriver ex_cd;
extern struct cfdriver mpu_cd;
extern struct cfdriver sb_cd;
extern struct cfdriver pas_cd;
extern struct cfdriver pss_cd;
extern struct cfdriver sp_cd;
extern struct cfdriver wss_cd;
extern struct cfdriver ess_cd;
extern struct cfdriver gus_cd;
extern struct cfdriver pcppi_cd;
extern struct cfdriver nsclpcsio_cd;
extern struct cfdriver it_cd;
extern struct cfdriver npx_cd;
extern struct cfdriver pccom_cd;
extern struct cfdriver lms_cd;
extern struct cfdriver mms_cd;
extern struct cfdriver wsdisplay_cd;
extern struct cfdriver wskbd_cd;
extern struct cfdriver wsmouse_cd;
extern struct cfdriver pckbd_cd;
extern struct cfdriver pms_cd;
extern struct cfdriver pmsi_cd;
extern struct cfdriver sysbeep_cd;
extern struct cfdriver fdc_cd;
extern struct cfdriver fd_cd;
extern struct cfdriver eisa_cd;
extern struct cfdriver ahb_cd;
extern struct cfdriver fea_cd;
extern struct cfdriver isapnp_cd;
extern struct cfdriver ef_cd;
extern struct cfdriver ym_cd;
extern struct cfdriver joy_cd;
extern struct cfdriver bios_cd;
extern struct cfdriver apm_cd;
extern struct cfdriver pcibios_cd;
extern struct cfdriver cardslot_cd;
extern struct cfdriver cardbus_cd;
extern struct cfdriver pcic_cd;
extern struct cfdriver tcic_cd;
extern struct cfdriver pcmcia_cd;
extern struct cfdriver xe_cd;
extern struct cfdriver ray_cd;
extern struct cfdriver usb_cd;
extern struct cfdriver uhub_cd;
extern struct cfdriver uaudio_cd;
extern struct cfdriver ucom_cd;
extern struct cfdriver ugen_cd;
extern struct cfdriver uhidev_cd;
extern struct cfdriver uhid_cd;
extern struct cfdriver ukbd_cd;
extern struct cfdriver ums_cd;
extern struct cfdriver ulpt_cd;
extern struct cfdriver umass_cd;
extern struct cfdriver urio_cd;
extern struct cfdriver uvisor_cd;
extern struct cfdriver aue_cd;
extern struct cfdriver cue_cd;
extern struct cfdriver kue_cd;
extern struct cfdriver upl_cd;
extern struct cfdriver url_cd;
extern struct cfdriver umodem_cd;
extern struct cfdriver uftdi_cd;
extern struct cfdriver uplcom_cd;
extern struct cfdriver ubsa_cd;
extern struct cfdriver uscanner_cd;
extern struct cfdriver usscanner_cd;

extern struct cfattach audio_ca;
extern struct cfattach midi_ca;
extern struct cfattach radio_ca;
extern struct cfattach nsphy_ca;
extern struct cfattach nsphyter_ca;
extern struct cfattach qsphy_ca;
extern struct cfattach inphy_ca;
extern struct cfattach iophy_ca;
extern struct cfattach eephy_ca;
extern struct cfattach exphy_ca;
extern struct cfattach rlphy_ca;
extern struct cfattach lxtphy_ca;
extern struct cfattach mtdphy_ca;
extern struct cfattach icsphy_ca;
extern struct cfattach sqphy_ca;
extern struct cfattach tqphy_ca;
extern struct cfattach ukphy_ca;
extern struct cfattach dcphy_ca;
extern struct cfattach bmtphy_ca;
extern struct cfattach brgphy_ca;
extern struct cfattach xmphy_ca;
extern struct cfattach amphy_ca;
extern struct cfattach acphy_ca;
extern struct cfattach nsgphy_ca;
extern struct cfattach urlphy_ca;
extern struct cfattach scsibus_ca;
extern struct cfattach cd_ca;
extern struct cfattach ch_ca;
extern struct cfattach sd_ca;
extern struct cfattach st_ca;
extern struct cfattach ss_ca;
extern struct cfattach uk_ca;
extern struct cfattach ioprbs_ca;
extern struct cfattach atapiscsi_ca;
extern struct cfattach wd_ca;
extern struct cfattach mainbus_ca;
extern struct cfattach pci_ca;
extern struct cfattach vga_pci_ca;
extern struct cfattach ahc_pci_ca;
extern struct cfattach dpt_pci_ca;
extern struct cfattach adv_pci_ca;
extern struct cfattach adw_pci_ca;
extern struct cfattach bha_pci_ca;
extern struct cfattach twe_pci_ca;
extern struct cfattach ami_pci_ca;
extern struct cfattach iop_pci_ca;
extern struct cfattach eap_ca;
extern struct cfattach eso_ca;
extern struct cfattach opl_eso_ca;
extern struct cfattach auich_ca;
extern struct cfattach emu_ca;
extern struct cfattach autri_ca;
extern struct cfattach clcs_ca;
extern struct cfattach clct_ca;
extern struct cfattach maestro_ca;
extern struct cfattach esa_ca;
extern struct cfattach yds_ca;
extern struct cfattach opl_yds_ca;
extern struct cfattach fms_ca;
extern struct cfattach auvia_ca;
extern struct cfattach gdt_pci_ca;
extern struct cfattach aac_pci_ca;
extern struct cfattach cac_pci_ca;
extern struct cfattach isp_pci_ca;
extern struct cfattach mpt_pci_ca;
extern struct cfattach de_ca;
extern struct cfattach ep_pci_ca;
extern struct cfattach fpa_ca;
extern struct cfattach le_pci_ca;
extern struct cfattach siop_pci_ca;
extern struct cfattach neo_ca;
extern struct cfattach pciide_ca;
extern struct cfattach ppb_ca;
extern struct cfattach cy_pci_ca;
extern struct cfattach lmc_ca;
extern struct cfattach mtd_pci_ca;
extern struct cfattach rl_pci_ca;
extern struct cfattach vr_ca;
extern struct cfattach tl_ca;
extern struct cfattach txp_ca;
extern struct cfattach sv_ca;
extern struct cfattach bktr_ca;
extern struct cfattach xl_pci_ca;
extern struct cfattach fxp_pci_ca;
extern struct cfattach em_ca;
extern struct cfattach dc_pci_ca;
extern struct cfattach tx_ca;
extern struct cfattach ti_ca;
extern struct cfattach ne_pci_ca;
extern struct cfattach lofn_ca;
extern struct cfattach hifn_ca;
extern struct cfattach nofn_ca;
extern struct cfattach ubsec_ca;
extern struct cfattach safe_ca;
extern struct cfattach wb_ca;
extern struct cfattach sf_ca;
extern struct cfattach sis_ca;
extern struct cfattach ste_ca;
extern struct cfattach uhci_pci_ca;
extern struct cfattach ohci_pci_ca;
extern struct cfattach cbb_pci_ca;
extern struct cfattach skc_ca;
extern struct cfattach sk_ca;
extern struct cfattach puc_ca;
extern struct cfattach wi_pci_ca;
extern struct cfattach an_pci_ca;
extern struct cfattach cmpci_ca;
extern struct cfattach iha_pci_ca;
extern struct cfattach trm_pci_ca;
extern struct cfattach pcscp_ca;
extern struct cfattach nge_ca;
extern struct cfattach bge_ca;
extern struct cfattach stge_ca;
extern struct cfattach viaenv_ca;
extern struct cfattach bce_ca;
extern struct cfattach pchb_ca;
extern struct cfattach elansc_ca;
extern struct cfattach geodesc_ca;
extern struct cfattach pcib_ca;
extern struct cfattach hme_pci_ca;
extern struct cfattach isa_ca;
extern struct cfattach isadma_ca;
extern struct cfattach ast_ca;
extern struct cfattach cy_isa_ca;
extern struct cfattach pckbc_isa_ca;
extern struct cfattach vga_isa_ca;
extern struct cfattach pcdisplay_ca;
extern struct cfattach bha_isa_ca;
extern struct cfattach aic_isa_ca;
extern struct cfattach aha_isa_ca;
extern struct cfattach sea_ca;
extern struct cfattach uha_isa_ca;
extern struct cfattach wds_ca;
extern struct cfattach wdc_isa_ca;
extern struct cfattach lc_isa_ca;
extern struct cfattach ne_isa_ca;
extern struct cfattach we_isa_ca;
extern struct cfattach ec_ca;
extern struct cfattach eg_ca;
extern struct cfattach el_ca;
extern struct cfattach ep_isa_ca;
extern struct cfattach ie_isa_ca;
extern struct cfattach ex_ca;
extern struct cfattach le_isa_ca;
extern struct cfattach mpu_isa_ca;
extern struct cfattach sb_isa_ca;
extern struct cfattach opl_sb_ca;
extern struct cfattach pas_ca;
extern struct cfattach pss_ca;
extern struct cfattach sp_ca;
extern struct cfattach wss_isa_ca;
extern struct cfattach opl_ess_ca;
extern struct cfattach gus_isa_ca;
extern struct cfattach pcppi_ca;
extern struct cfattach midi_pcppi_ca;
extern struct cfattach lpt_isa_ca;
extern struct cfattach lm_isa_ca;
extern struct cfattach nsclpcsio_isa_ca;
extern struct cfattach it_ca;
extern struct cfattach npx_ca;
extern struct cfattach pccom_isa_ca;
extern struct cfattach pccom_commulti_ca;
extern struct cfattach lms_ca;
extern struct cfattach mms_ca;
extern struct cfattach wsdisplay_emul_ca;
extern struct cfattach wskbd_ca;
extern struct cfattach wsmouse_ca;
extern struct cfattach pckbd_ca;
extern struct cfattach pms_ca;
extern struct cfattach pmsi_ca;
extern struct cfattach sysbeep_ca;
extern struct cfattach fdc_ca;
extern struct cfattach fd_ca;
extern struct cfattach ahc_isa_ca;
extern struct cfattach eisa_ca;
extern struct cfattach ahb_ca;
extern struct cfattach ahc_eisa_ca;
extern struct cfattach dpt_eisa_ca;
extern struct cfattach uha_eisa_ca;
extern struct cfattach cac_eisa_ca;
extern struct cfattach ep_eisa_ca;
extern struct cfattach fea_ca;
extern struct cfattach isapnp_ca;
extern struct cfattach mpu_isapnp_ca;
extern struct cfattach wdc_isapnp_ca;
extern struct cfattach aha_isapnp_ca;
extern struct cfattach aic_isapnp_ca;
extern struct cfattach sb_isapnp_ca;
extern struct cfattach wss_isapnp_ca;
extern struct cfattach ess_isapnp_ca;
extern struct cfattach an_isapnp_ca;
extern struct cfattach le_isapnp_ca;
extern struct cfattach ep_isapnp_ca;
extern struct cfattach ef_isapnp_ca;
extern struct cfattach ne_isapnp_ca;
extern struct cfattach we_isapnp_ca;
extern struct cfattach ym_isapnp_ca;
extern struct cfattach pccom_isapnp_ca;
extern struct cfattach joy_isapnp_ca;
extern struct cfattach bios_ca;
extern struct cfattach apm_ca;
extern struct cfattach pcibios_ca;
extern struct cfattach cardslot_ca;
extern struct cfattach cardbus_ca;
extern struct cfattach xl_cardbus_ca;
extern struct cfattach dc_cardbus_ca;
extern struct cfattach fxp_cardbus_ca;
extern struct cfattach rl_cardbus_ca;
extern struct cfattach pcic_isa_ca;
extern struct cfattach pcic_pci_ca;
extern struct cfattach pcic_isapnp_ca;
extern struct cfattach tcic_isa_ca;
extern struct cfattach lpt_puc_ca;
extern struct cfattach pccom_puc_ca;
extern struct cfattach pcmcia_ca;
extern struct cfattach ep_pcmcia_ca;
extern struct cfattach ne_pcmcia_ca;
extern struct cfattach aic_pcmcia_ca;
extern struct cfattach wdc_pcmcia_ca;
extern struct cfattach sm_pcmcia_ca;
extern struct cfattach xe_pcmcia_ca;
extern struct cfattach wi_pcmcia_ca;
extern struct cfattach ray_ca;
extern struct cfattach an_pcmcia_ca;
extern struct cfattach pccom_pcmcia_ca;
extern struct cfattach usb_ca;
extern struct cfattach uhub_ca;
extern struct cfattach uhub_uhub_ca;
extern struct cfattach uaudio_ca;
extern struct cfattach ucom_ca;
extern struct cfattach ugen_ca;
extern struct cfattach uhidev_ca;
extern struct cfattach uhid_ca;
extern struct cfattach ukbd_ca;
extern struct cfattach ums_ca;
extern struct cfattach ulpt_ca;
extern struct cfattach umass_ca;
extern struct cfattach urio_ca;
extern struct cfattach uvisor_ca;
extern struct cfattach aue_ca;
extern struct cfattach cue_ca;
extern struct cfattach kue_ca;
extern struct cfattach upl_ca;
extern struct cfattach url_ca;
extern struct cfattach umodem_ca;
extern struct cfattach uftdi_ca;
extern struct cfattach uplcom_ca;
extern struct cfattach ubsa_ca;
extern struct cfattach uscanner_ca;
extern struct cfattach usscanner_ca;
extern struct cfattach wi_usb_ca;


/* locators */
static int loc[328] = {
	0x220, 0, -1, 0, 5, 1, -1, 0x200,
	0, -1, 0, -1, -1, -1, 0x280, 0,
	-1, 0, -1, -1, -1, 0x240, 0, -1,
	0, 9, -1, -1, 0x300, 0, -1, 0,
	0xa, -1, -1, 0x280, 0, -1, 0, 9,
	-1, -1, 0x280, 0, 0xd0000, 0, 9, -1,
	-1, 0x300, 0, 0xcc000, 0, 0xa, -1, -1,
	0x250, 0, 0xd8000, 0, 9, -1, -1, 0x310,
	0, -1, 0, 5, -1, -1, 0x300, 0,
	-1, 0, 9, -1, -1, -1, 0, -1,
	0, -1, -1, -1, 0x360, 0, 0xd0000, 0,
	7, -1, -1, 0x320, 0, -1, 0, 5,
	-1, -1, 0x360, 0, -1, 0, 0xf, 6,
	-1, 0x300, 0, -1, 0, -1, -1, -1,
	0x220, 0, -1, 0, 7, 1, -1, 0x220,
	0, -1, 0, 7, 6, -1, 0x530, 0,
	-1, 0, 0xa, 0, -1, 0x220, 0, -1,
	0, 7, 1, 6, 0x3f0, 0, -1, 0,
	6, 2, -1, 0x378, 0, -1, 0, 7,
	-1, -1, 0x278, 0, -1, 0, -1, -1,
	-1, 0x3bc, 0, -1, 0, -1, -1, -1,
	0x290, 0, -1, 0, -1, -1, -1, 0xf0,
	0, -1, 0, 0xd, -1, -1, 0x3f8, 0,
	-1, 0, 4, -1, -1, 0x2f8, 0, -1,
	0, 3, -1, -1, 0x3e8, 0, -1, 0,
	5, -1, -1, 0x238, 0, -1, 0, 5,
	-1, -1, 0x23c, 0, -1, 0, 5, -1,
	-1, 0x240, 0, 0xd0000, 0x10000, -1, -1, -1,
	0x3e4, 0, 0xe0000, 0x4000, -1, -1, -1, 0x3e2,
	0, 0xe0000, 0x4000, -1, -1, -1, 0x3e0, 0,
	0xd0000, 0x10000, -1, -1, -1, 0x1a0, 0, -1,
	0, 5, -1, -1, -1, 0, 0xd4000, 0,
	0xc, -1, -1, 0x330, 0, -1, 0, -1,
	-1, -1, 0x334, 0, -1, 0, -1, -1,
	-1, 0x340, 0, -1, 0, 0xb, -1, -1,
	-1, 0, 0xc8000, 0, 5, -1, -1, 0x350,
	0, -1, 0, 0xf, 6, -1, 0x1f0, 0,
	-1, 0, 0xe, -1, -1, 0x170, 0, -1,
	0, 0xf, -1, -1, -1, -1, -1, -1,
	-1, -1, -1, 0, -1, 0, -1, -1,
	0x530, 0, -1, 0, 0xa, 0, -1, 1,
};

#ifndef MAXEXTRALOC
#define MAXEXTRALOC 32
#endif
int extraloc[MAXEXTRALOC] = { -1 };
int nextraloc = MAXEXTRALOC;
int uextraloc = 0;

char *locnames[] = {
	"phy",
	"target",
	"lun",
	"tid",
	"channel",
	"bus",
	"dev",
	"function",
	"slot",
	"irq",
	"port",
	"size",
	"iomem",
	"iosiz",
	"drq",
	"configuration",
	"interface",
	"vendor",
	"product",
	"release",
	"drq2",
	"slave",
	"console",
	"mux",
	"drive",
	"controller",
	"socket",
	"portno",
	"reportid",
};

/* each entry is an index into locnames[]; -1 terminates */
short locnamp[] = {
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 0, -1, 0, -1, 0, -1, 0,
	-1, 1, 2, -1, 3, -1, 4, -1,
	4, -1, 4, -1, 4, -1, 4, -1,
	5, -1, 5, -1, 5, -1, 6, 7,
	-1, 8, -1, 7, 9, -1, 10, 11,
	12, 13, 9, 14, -1, 6, 7, -1,
	10, 15, 16, 17, 18, 19, -1, 10,
	15, 16, 17, 18, 19, -1, 10, 11,
	12, 13, 9, 14, 20, -1, 10, 11,
	12, 13, 9, 14, -1, 21, -1, 10,
	-1, 22, -1, 22, -1, 22, -1, 22,
	23, -1, 22, 23, -1, 23, -1, 23,
	-1, 23, -1, 23, -1, 23, -1, 23,
	-1, 23, -1, 8, -1, 24, -1, 8,
	-1, 8, -1, 25, 26, -1, 25, 26,
	-1, 25, 26, -1, 25, 26, -1, 25,
	26, -1, 25, 26, -1, 27, -1, 27,
	-1, 27, -1, 27, -1, 27, -1, 28,
	-1,
};

/* size of parent vectors */
int pv_size = 219;

/* parent vectors */
short pv[219] = {
	265, 261, 245, 224, 135, 130, 128, 127, 126, 114, 109, 108, 107, 106, 97, 86,
	85, 157, 158, 159, 225, 99, 100, 95, 96, 83, 84, 82, 92, 93, 90, 91,
	165, 166, 70, 223, 167, 168, 71, 72, -1, 258, 271, 143, 144, 145, 43, 147,
	148, 218, 211, 209, 212, 38, 68, 39, 40, 63, 44, 64, 45, 65, 66, 123,
	67, 146, 242, 219, 76, 41, 42, 125, 149, 124, 150, 151, 213, 152, 33, 32,
	-1, 173, 220, 178, 174, 176, 222, 177, 221, 227, 47, 48, 88, 77, 122, 56,
	57, 53, 55, 62, 61, 250, 58, 59, 60, 54, -1, 173, 220, 49, 50, 51,
	52, 227, 216, 172, 55, -1, 234, 235, 236, 238, 237, 239, 232, -1, 256, 204,
	205, 195, 196, 197, 198, -1, 153, 154, 243, 217, 78, -1, 266, 260, 269, 267,
	268, -1, 141, 37, 142, -1, 35, 79, 131, -1, 89, 61, -1, 248, 249, -1,
	35, 134, -1, 173, 220, -1, 110, 111, -1, 136, -1, 215, -1, 175, -1, 36,
	-1, 25, -1, 241, -1, 233, -1, 255, -1, 203, -1, 140, -1, 253, -1, 115,
	-1, 138, -1, 207, -1, 210, -1, 46, -1, 112, -1, 179, -1, 247, -1, 35,
	-1, 229, -1, 113, -1, 60, -1, 222, -1, 48, -1,
};

#define NORM FSTATE_NOTFOUND
#define STAR FSTATE_STAR
#define DNRM FSTATE_DNOTFOUND
#define DSTR FSTATE_DSTAR

struct cfdata cfdata[] = {
    /* attachment       driver        unit  state loc     flags parents nm ivstubs starunit1 */
/*  0: audio* at sb0|sb*|gus0|pas0|sp0|ess*|wss0|wss*|ym*|eap*|eso*|sv*|neo*|cmpci*|clcs*|clct*|auich*|autri*|auvia*|fms*|uaudio*|maestro*|esa*|yds*|emu* */
    {&audio_ca,		&audio_cd,	 0, STAR,     loc,    0, pv+81, 106, 0,    0},
/*  1: midi* at sb0|sb*|opl*|opl*|opl*|opl*|ym*|mpu*|mpu*|autri* */
    {&midi_ca,		&midi_cd,	 0, STAR,     loc,    0, pv+107, 106, 0,    0},
/*  2: radio* at bktr0|fms* */
    {&radio_ca,		&radio_cd,	 0, STAR,     loc,    0, pv+154, 0, 0,    0},
/*  3: nsphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&nsphy_ca,		&nsphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/*  4: nsphyter* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&nsphyter_ca,	&nsphyter_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/*  5: qsphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&qsphy_ca,		&qsphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/*  6: inphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&inphy_ca,		&inphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/*  7: iophy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&iophy_ca,		&iophy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/*  8: eephy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&eephy_ca,		&eephy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/*  9: exphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&exphy_ca,		&exphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 10: rlphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&rlphy_ca,		&rlphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 11: lxtphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&lxtphy_ca,	&lxtphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 12: mtdphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&mtdphy_ca,	&mtdphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 13: icsphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&icsphy_ca,	&icsphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 14: sqphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&sqphy_ca,		&sqphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 15: tqphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&tqphy_ca,		&tqphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 16: ukphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&ukphy_ca,		&ukphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 17: dcphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&dcphy_ca,		&dcphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 18: bmtphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&bmtphy_ca,	&bmtphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 19: brgphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&brgphy_ca,	&brgphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 20: xmphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&xmphy_ca,		&xmphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 21: amphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&amphy_ca,		&amphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 22: acphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&acphy_ca,		&acphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 23: nsgphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&nsgphy_ca,	&nsgphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 24: urlphy* at url*|aue*|xe*|ef*|hme*|bce*|stge*|bge*|nge*|sk*|ste*|sis*|sf*|wb*|tx*|tl*|vr*|ne0|ne1|ne2|ne*|ne*|ne*|dc*|dc*|rl*|rl*|mtd*|fxp*|fxp*|xl*|xl*|ep0|ep0|ep0|ep*|ep*|ep*|ep*|ep* phy -1 */
    {&urlphy_ca,	&urlphy_cd,	 0, STAR, loc+319,    0, pv+ 0, 1, 0,    0},
/* 25: scsibus* at umass*|usscanner*|bha0|bha1|bha2|bha*|aha0|aha1|aha*|ahb*|ahc0|ahc*|ahc*|mpt*|dpt*|dpt*|gdt*|twe*|aac*|ami*|cac*|cac*|iha*|isp*|aic0|aic*|aic*|siop*|adv*|adw*|pcscp*|sea0|trm*|uha0|uha1|uha*|wds0|atapiscsi*|ioprbs* */
    {&scsibus_ca,	&scsibus_cd,	 0, STAR,     loc,    0, pv+41, 80, 0,    0},
/* 26: cd* at scsibus* target -1 lun -1 */
    {&cd_ca,		&cd_cd,		 0, STAR, loc+318,    0, pv+177, 81, 0,    0},
/* 27: ch* at scsibus* target -1 lun -1 */
    {&ch_ca,		&ch_cd,		 0, STAR, loc+318,    0, pv+177, 81, 0,    0},
/* 28: sd* at scsibus* target -1 lun -1 */
    {&sd_ca,		&sd_cd,		 0, STAR, loc+318,    0, pv+177, 81, 0,    0},
/* 29: st* at scsibus* target -1 lun -1 */
    {&st_ca,		&st_cd,		 0, STAR, loc+318,    0, pv+177, 81, 0,    0},
/* 30: ss* at scsibus* target -1 lun -1 */
    {&ss_ca,		&ss_cd,		 0, STAR, loc+318,    0, pv+177, 81, 0,    0},
/* 31: uk* at scsibus* target -1 lun -1 */
    {&uk_ca,		&uk_cd,		 0, STAR, loc+318,    0, pv+177, 81, 0,    0},
/* 32: ioprbs* at iop* tid -1 */
    {&ioprbs_ca,	&ioprbs_cd,	 0, STAR, loc+319,    0, pv+199, 84, 0,    0},
/* 33: atapiscsi* at wdc0|wdc1|wdc*|wdc*|pciide* channel -1 */
    {&atapiscsi_ca,	&atapiscsi_cd,	 0, STAR, loc+319,    0, pv+134, 86, 0,    0},
/* 34: wd* at wdc0|wdc1|wdc*|wdc*|pciide* channel -1 drive -1 */
    {&wd_ca,		&wd_cd,		 0, STAR, loc+318,    0, pv+134, 86, 0,    0},
/* 35: mainbus0 at root */
    {&mainbus_ca,	&mainbus_cd,	 0, NORM,     loc,    0, pv+40, 0, 0,    0},
/* 36: pci* at mainbus0|ppb*|pchb* bus -1 */
    {&pci_ca,		&pci_cd,	 0, STAR, loc+319,    0, pv+150, 96, 0,    0},
/* 37: vga* at pci* dev -1 function -1 */
    {&vga_pci_ca,	&vga_cd,	 1, STAR, loc+318,    0, pv+175, 102, 0,    1},
/* 38: ahc* at pci* dev -1 function -1 */
    {&ahc_pci_ca,	&ahc_cd,	 1, STAR, loc+318,    0, pv+175, 102, 0,    1},
/* 39: dpt* at pci* dev -1 function -1 */
    {&dpt_pci_ca,	&dpt_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 40: dpt* at eisa0 slot -1 */
    {&dpt_eisa_ca,	&dpt_cd,	 0, STAR, loc+319,    0, pv+197, 105, 0,    0},
/* 41: adv* at pci* dev -1 function -1 */
    {&adv_pci_ca,	&adv_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 42: adw* at pci* dev -1 function -1 */
    {&adw_pci_ca,	&adw_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 43: bha* at pci* dev -1 function -1 */
    {&bha_pci_ca,	&bha_cd,	 3, STAR, loc+318,    0, pv+175, 102, 0,    3},
/* 44: twe* at pci* dev -1 function -1 */
    {&twe_pci_ca,	&twe_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 45: ami* at pci* dev -1 function -1 */
    {&ami_pci_ca,	&ami_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 46: iop* at pci* dev -1 function -1 */
    {&iop_pci_ca,	&iop_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 47: eap* at pci* dev -1 function -1 */
    {&eap_ca,		&eap_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 48: eso* at pci* dev -1 function -1 */
    {&eso_ca,		&eso_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 49: opl* at eso* */
    {&opl_eso_ca,	&opl_cd,	 0, STAR,     loc,    0, pv+217, 106, 0,    0},
/* 50: opl* at sb0|sb* */
    {&opl_sb_ca,	&opl_cd,	 0, STAR,     loc,    0, pv+163, 106, 0,    0},
/* 51: opl* at ess* */
    {&opl_ess_ca,	&opl_cd,	 0, STAR,     loc,    0, pv+215, 106, 0,    0},
/* 52: opl* at yds* */
    {&opl_yds_ca,	&opl_cd,	 0, STAR,     loc,    0, pv+213, 106, 0,    0},
/* 53: auich* at pci* dev -1 function -1 */
    {&auich_ca,		&auich_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 54: emu* at pci* dev -1 function -1 */
    {&emu_ca,		&emu_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 55: autri* at pci* dev -1 function -1 */
    {&autri_ca,		&autri_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 56: clcs* at pci* dev -1 function -1 */
    {&clcs_ca,		&clcs_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 57: clct* at pci* dev -1 function -1 */
    {&clct_ca,		&clct_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 58: maestro* at pci* dev -1 function -1 */
    {&maestro_ca,	&maestro_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 59: esa* at pci* dev -1 function -1 */
    {&esa_ca,		&esa_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 60: yds* at pci* dev -1 function -1 */
    {&yds_ca,		&yds_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 61: fms* at pci* dev -1 function -1 */
    {&fms_ca,		&fms_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 62: auvia* at pci* dev -1 function -1 */
    {&auvia_ca,		&auvia_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 63: gdt* at pci* dev -1 function -1 */
    {&gdt_pci_ca,	&gdt_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 64: aac* at pci* dev -1 function -1 */
    {&aac_pci_ca,	&aac_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 65: cac* at pci* dev -1 function -1 */
    {&cac_pci_ca,	&cac_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 66: cac* at eisa0 slot -1 */
    {&cac_eisa_ca,	&cac_cd,	 0, STAR, loc+319,    0, pv+197, 105, 0,    0},
/* 67: isp* at pci* dev -1 function -1 */
    {&isp_pci_ca,	&isp_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 68: mpt* at pci* dev -1 function -1 */
    {&mpt_pci_ca,	&mpt_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 69: de* at pci* dev -1 function -1 */
    {&de_ca,		&de_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 70: ep0 at pci* dev -1 function -1 */
    {&ep_pci_ca,	&ep_cd,		 0, NORM, loc+318,    0, pv+175, 102, 0,    0},
/* 71: ep* at pci* dev -1 function -1 */
    {&ep_pci_ca,	&ep_cd,		 1, STAR, loc+318,    0, pv+175, 102, 0,    1},
/* 72: ep* at pcmcia* function -1 irq -1 */
    {&ep_pcmcia_ca,	&ep_cd,		 1, STAR, loc+318,    0, pv+179, 107, 0,    1},
/* 73: fpa* at pci* dev -1 function -1 */
    {&fpa_ca,		&fpa_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 74: le* at pci* dev -1 function -1 */
    {&le_pci_ca,	&le_cd,		 1, STAR, loc+318,    0, pv+175, 102, 0,    1},
/* 75: le* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&le_isapnp_ca,	&le_cd,		 1, STAR, loc+314,    0, pv+171, 110, 0,    1},
/* 76: siop* at pci* dev -1 function -1 */
    {&siop_pci_ca,	&siop_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 77: neo* at pci* dev -1 function -1 */
    {&neo_ca,		&neo_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 78: pciide* at pci* dev -1 function -1 */
    {&pciide_ca,	&pciide_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 79: ppb* at pci* dev -1 function -1 */
    {&ppb_ca,		&ppb_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 80: cy* at pci* dev -1 function -1 */
    {&cy_pci_ca,	&cy_cd,		 1, STAR, loc+318,    0, pv+175, 102, 0,    1},
/* 81: lmc* at pci* dev -1 function -1 */
    {&lmc_ca,		&lmc_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 82: mtd* at pci* dev -1 function -1 */
    {&mtd_pci_ca,	&mtd_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 83: rl* at pci* dev -1 function -1 */
    {&rl_pci_ca,	&rl_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 84: rl* at cardbus* dev -1 function -1 */
    {&rl_cardbus_ca,	&rl_cd,		 0, STAR, loc+318,    0, pv+181, 117, 0,    0},
/* 85: vr* at pci* dev -1 function -1 */
    {&vr_ca,		&vr_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 86: tl* at pci* dev -1 function -1 */
    {&tl_ca,		&tl_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 87: txp* at pci* dev -1 function -1 */
    {&txp_ca,		&txp_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 88: sv* at pci* dev -1 function -1 */
    {&sv_ca,		&sv_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 89: bktr0 at pci* dev -1 function -1 */
    {&bktr_ca,		&bktr_cd,	 0, NORM, loc+318,    0, pv+175, 102, 0,    0},
/* 90: xl* at pci* dev -1 function -1 */
    {&xl_pci_ca,	&xl_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 91: xl* at cardbus* dev -1 function -1 */
    {&xl_cardbus_ca,	&xl_cd,		 0, STAR, loc+318,    0, pv+181, 117, 0,    0},
/* 92: fxp* at pci* dev -1 function -1 */
    {&fxp_pci_ca,	&fxp_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 93: fxp* at cardbus* dev -1 function -1 */
    {&fxp_cardbus_ca,	&fxp_cd,	 0, STAR, loc+318,    0, pv+181, 117, 0,    0},
/* 94: em* at pci* dev -1 function -1 */
    {&em_ca,		&em_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 95: dc* at pci* dev -1 function -1 */
    {&dc_pci_ca,	&dc_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 96: dc* at cardbus* dev -1 function -1 */
    {&dc_cardbus_ca,	&dc_cd,		 0, STAR, loc+318,    0, pv+181, 117, 0,    0},
/* 97: tx* at pci* dev -1 function -1 */
    {&tx_ca,		&tx_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 98: ti* at pci* dev -1 function -1 */
    {&ti_ca,		&ti_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/* 99: ne* at pci* dev -1 function -1 */
    {&ne_pci_ca,	&ne_cd,		 3, STAR, loc+318,    0, pv+175, 102, 0,    3},
/*100: ne* at pcmcia* function -1 irq -1 */
    {&ne_pcmcia_ca,	&ne_cd,		 3, STAR, loc+318,    0, pv+179, 107, 0,    3},
/*101: lofn* at pci* dev -1 function -1 */
    {&lofn_ca,		&lofn_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*102: hifn* at pci* dev -1 function -1 */
    {&hifn_ca,		&hifn_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*103: nofn* at pci* dev -1 function -1 */
    {&nofn_ca,		&nofn_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*104: ubsec* at pci* dev -1 function -1 */
    {&ubsec_ca,		&ubsec_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*105: safe* at pci* dev -1 function -1 */
    {&safe_ca,		&safe_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*106: wb* at pci* dev -1 function -1 */
    {&wb_ca,		&wb_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*107: sf* at pci* dev -1 function -1 */
    {&sf_ca,		&sf_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*108: sis* at pci* dev -1 function -1 */
    {&sis_ca,		&sis_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*109: ste* at pci* dev -1 function -1 */
    {&ste_ca,		&ste_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*110: uhci* at pci* dev -1 function -1 */
    {&uhci_pci_ca,	&uhci_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*111: ohci* at pci* dev -1 function -1 */
    {&ohci_pci_ca,	&ohci_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*112: cbb* at pci* dev -1 function -1 */
    {&cbb_pci_ca,	&cbb_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*113: skc* at pci* dev -1 function -1 */
    {&skc_ca,		&skc_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*114: sk* at skc* */
    {&sk_ca,		&sk_cd,		 0, STAR,     loc,    0, pv+211, 119, 0,    0},
/*115: puc* at pci* dev -1 function -1 */
    {&puc_ca,		&puc_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*116: wi* at pci* dev -1 function -1 */
    {&wi_pci_ca,	&wi_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*117: wi* at pcmcia* function -1 irq -1 */
    {&wi_pcmcia_ca,	&wi_cd,		 0, STAR, loc+318,    0, pv+179, 107, 0,    0},
/*118: wi* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&wi_usb_ca,	&wi_cd,		 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*119: an* at pci* dev -1 function -1 */
    {&an_pci_ca,	&an_cd,		 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*120: an* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&an_isapnp_ca,	&an_cd,		 0, STAR, loc+314,    0, pv+171, 110, 0,    0},
/*121: an* at pcmcia* function -1 irq -1 */
    {&an_pcmcia_ca,	&an_cd,		 0, STAR, loc+318,    0, pv+179, 107, 0,    0},
/*122: cmpci* at pci* dev -1 function -1 */
    {&cmpci_ca,		&cmpci_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*123: iha* at pci* dev -1 function -1 */
    {&iha_pci_ca,	&iha_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*124: trm* at pci* dev -1 function -1 */
    {&trm_pci_ca,	&trm_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*125: pcscp* at pci* dev -1 function -1 */
    {&pcscp_ca,		&pcscp_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*126: nge* at pci* dev -1 function -1 */
    {&nge_ca,		&nge_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*127: bge* at pci* dev -1 function -1 */
    {&bge_ca,		&bge_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*128: stge* at pci* dev -1 function -1 */
    {&stge_ca,		&stge_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*129: viaenv* at pci* dev -1 function -1 */
    {&viaenv_ca,	&viaenv_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*130: bce* at pci* dev -1 function -1 */
    {&bce_ca,		&bce_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*131: pchb* at pci* dev -1 function -1 */
    {&pchb_ca,		&pchb_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*132: elansc* at pci* dev -1 function -1 */
    {&elansc_ca,	&elansc_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*133: geodesc* at pci* dev -1 function -1 */
    {&geodesc_ca,	&geodesc_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*134: pcib* at pci* dev -1 function -1 */
    {&pcib_ca,		&pcib_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*135: hme* at pci* dev -1 function -1 */
    {&hme_pci_ca,	&hme_cd,	 0, STAR, loc+318,    0, pv+175, 102, 0,    0},
/*136: isa0 at mainbus0|pcib* */
    {&isa_ca,		&isa_cd,	 0, NORM,     loc,    0, pv+160, 96, 0,    0},
/*137: isadma0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&isadma_ca,	&isadma_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*138: ast0 at isa0 port 0x1a0 size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&ast_ca,		&ast_cd,	 0, NORM, loc+245,    0, pv+169, 134, 0,    0},
/*139: cy0 at isa0 port -1 size 0 iomem 0xd4000 iosiz 0 irq 0xc drq -1 drq2 -1 */
    {&cy_isa_ca,	&cy_cd,		 0, NORM, loc+252,    0, pv+169, 134, 0,    0},
/*140: pckbc0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&pckbc_isa_ca,	&pckbc_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*141: vga0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&vga_isa_ca,	&vga_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*142: pcdisplay0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&pcdisplay_ca,	&pcdisplay_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*143: bha0 at isa0 port 0x330 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&bha_isa_ca,	&bha_cd,	 0, NORM, loc+259,    0, pv+169, 134, 0,    0},
/*144: bha1 at isa0 port 0x334 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&bha_isa_ca,	&bha_cd,	 1, DNRM, loc+266,    0, pv+169, 134, 0,    1},
/*145: bha2 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&bha_isa_ca,	&bha_cd,	 2, DNRM, loc+ 77,    0, pv+169, 134, 0,    2},
/*146: aic0 at isa0 port 0x340 size 0 iomem -1 iosiz 0 irq 0xb drq -1 drq2 -1 */
    {&aic_isa_ca,	&aic_cd,	 0, NORM, loc+273,    0, pv+169, 134, 0,    0},
/*147: aha0 at isa0 port 0x330 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&aha_isa_ca,	&aha_cd,	 0, NORM, loc+259,    0, pv+169, 134, 0,    0},
/*148: aha1 at isa0 port 0x334 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&aha_isa_ca,	&aha_cd,	 1, NORM, loc+266,    0, pv+169, 134, 0,    1},
/*149: sea0 at isa0 port -1 size 0 iomem 0xc8000 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&sea_ca,		&sea_cd,	 0, DNRM, loc+280,    0, pv+169, 134, 0,    0},
/*150: uha0 at isa0 port 0x330 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&uha_isa_ca,	&uha_cd,	 0, NORM, loc+259,    0, pv+169, 134, 0,    0},
/*151: uha1 at isa0 port 0x334 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&uha_isa_ca,	&uha_cd,	 1, DNRM, loc+266,    0, pv+169, 134, 0,    1},
/*152: wds0 at isa0 port 0x350 size 0 iomem -1 iosiz 0 irq 0xf drq 6 drq2 -1 */
    {&wds_ca,		&wds_cd,	 0, DNRM, loc+287,    0, pv+169, 134, 0,    0},
/*153: wdc0 at isa0 port 0x1f0 size 0 iomem -1 iosiz 0 irq 0xe drq -1 drq2 -1 */
    {&wdc_isa_ca,	&wdc_cd,	 0, NORM, loc+294,    0, pv+169, 134, 0,    0},
/*154: wdc1 at isa0 port 0x170 size 0 iomem -1 iosiz 0 irq 0xf drq -1 drq2 -1 */
    {&wdc_isa_ca,	&wdc_cd,	 1, NORM, loc+301,    0, pv+169, 134, 0,    1},
/*155: lc0 at isa0 port 0x200 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&lc_isa_ca,	&lc_cd,		 0, NORM, loc+  7,    0, pv+169, 134, 0,    0},
/*156: lc1 at isa0 port 0x280 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&lc_isa_ca,	&lc_cd,		 1, NORM, loc+ 14,    0, pv+169, 134, 0,    1},
/*157: ne0 at isa0 port 0x240 size 0 iomem -1 iosiz 0 irq 9 drq -1 drq2 -1 */
    {&ne_isa_ca,	&ne_cd,		 0, NORM, loc+ 21,    0, pv+169, 134, 0,    0},
/*158: ne1 at isa0 port 0x300 size 0 iomem -1 iosiz 0 irq 0xa drq -1 drq2 -1 */
    {&ne_isa_ca,	&ne_cd,		 1, NORM, loc+ 28,    0, pv+169, 134, 0,    1},
/*159: ne2 at isa0 port 0x280 size 0 iomem -1 iosiz 0 irq 9 drq -1 drq2 -1 */
    {&ne_isa_ca,	&ne_cd,		 2, NORM, loc+ 35,    0, pv+169, 134, 0,    2},
/*160: we0 at isa0 port 0x280 size 0 iomem 0xd0000 iosiz 0 irq 9 drq -1 drq2 -1 */
    {&we_isa_ca,	&we_cd,		 0, NORM, loc+ 42,    0, pv+169, 134, 0,    0},
/*161: we1 at isa0 port 0x300 size 0 iomem 0xcc000 iosiz 0 irq 0xa drq -1 drq2 -1 */
    {&we_isa_ca,	&we_cd,		 1, NORM, loc+ 49,    0, pv+169, 134, 0,    1},
/*162: ec0 at isa0 port 0x250 size 0 iomem 0xd8000 iosiz 0 irq 9 drq -1 drq2 -1 */
    {&ec_ca,		&ec_cd,		 0, NORM, loc+ 56,    0, pv+169, 134, 0,    0},
/*163: eg0 at isa0 port 0x310 size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&eg_ca,		&eg_cd,		 0, DNRM, loc+ 63,    0, pv+169, 134, 0,    0},
/*164: el0 at isa0 port 0x300 size 0 iomem -1 iosiz 0 irq 9 drq -1 drq2 -1 */
    {&el_ca,		&el_cd,		 0, DNRM, loc+ 70,    0, pv+169, 134, 0,    0},
/*165: ep0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&ep_isa_ca,	&ep_cd,		 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*166: ep0 at eisa0 slot -1 */
    {&ep_eisa_ca,	&ep_cd,		 0, NORM, loc+319,    0, pv+197, 105, 0,    0},
/*167: ep* at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&ep_isa_ca,	&ep_cd,		 1, STAR, loc+ 77,    0, pv+169, 134, 0,    1},
/*168: ep* at eisa0 slot -1 */
    {&ep_eisa_ca,	&ep_cd,		 1, STAR, loc+319,    0, pv+197, 105, 0,    1},
/*169: ie0 at isa0 port 0x360 size 0 iomem 0xd0000 iosiz 0 irq 7 drq -1 drq2 -1 */
    {&ie_isa_ca,	&ie_cd,		 0, NORM, loc+ 84,    0, pv+169, 134, 0,    0},
/*170: ex0 at isa0 port 0x320 size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&ex_ca,		&ex_cd,		 0, NORM, loc+ 91,    0, pv+169, 134, 0,    0},
/*171: le0 at isa0 port 0x360 size 0 iomem -1 iosiz 0 irq 0xf drq 6 drq2 -1 */
    {&le_isa_ca,	&le_cd,		 0, NORM, loc+ 98,    0, pv+169, 134, 0,    0},
/*172: mpu* at isa0 port 0x300 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&mpu_isa_ca,	&mpu_cd,	 0, STAR, loc+105,    0, pv+169, 134, 0,    0},
/*173: sb0 at isa0 port 0x220 size 0 iomem -1 iosiz 0 irq 5 drq 1 drq2 -1 */
    {&sb_isa_ca,	&sb_cd,		 0, NORM, loc+  0,    0, pv+169, 134, 0,    0},
/*174: pas0 at isa0 port 0x220 size 0 iomem -1 iosiz 0 irq 7 drq 1 drq2 -1 */
    {&pas_ca,		&pas_cd,	 0, NORM, loc+112,    0, pv+169, 134, 0,    0},
/*175: pss0 at isa0 port 0x220 size 0 iomem -1 iosiz 0 irq 7 drq 6 drq2 -1 */
    {&pss_ca,		&pss_cd,	 0, NORM, loc+119,    0, pv+169, 134, 0,    0},
/*176: sp0 at pss0 port 0x530 size 0 iomem -1 iosiz 0 irq 0xa drq 0 */
    {&sp_ca,		&sp_cd,		 0, NORM, loc+320,    0, pv+173, 142, 0,    0},
/*177: wss0 at isa0 port 0x530 size 0 iomem -1 iosiz 0 irq 0xa drq 0 drq2 -1 */
    {&wss_isa_ca,	&wss_cd,	 0, NORM, loc+126,    0, pv+169, 134, 0,    0},
/*178: gus0 at isa0 port 0x220 size 0 iomem -1 iosiz 0 irq 7 drq 1 drq2 6 */
    {&gus_isa_ca,	&gus_cd,	 0, NORM, loc+133,    0, pv+169, 134, 0,    0},
/*179: pcppi0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&pcppi_ca,		&pcppi_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*180: midi* at pcppi0 */
    {&midi_pcppi_ca,	&midi_cd,	 0, STAR,     loc,    0, pv+203, 148, 0,    0},
/*181: lpt0 at isa0 port 0x378 size 0 iomem -1 iosiz 0 irq 7 drq -1 drq2 -1 */
    {&lpt_isa_ca,	&lpt_cd,	 0, NORM, loc+147,    0, pv+169, 134, 0,    0},
/*182: lpt1 at isa0 port 0x278 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&lpt_isa_ca,	&lpt_cd,	 1, NORM, loc+154,    0, pv+169, 134, 0,    1},
/*183: lpt2 at isa0 port 0x3bc size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&lpt_isa_ca,	&lpt_cd,	 2, NORM, loc+161,    0, pv+169, 134, 0,    2},
/*184: lm0 at isa0 port 0x290 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&lm_isa_ca,	&lm_cd,		 0, NORM, loc+168,    0, pv+169, 134, 0,    0},
/*185: nsclpcsio* at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&nsclpcsio_isa_ca,	&nsclpcsio_cd,	 0, STAR, loc+ 77,    0, pv+169, 134, 0,    0},
/*186: it0 at isa0 port 0x290 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&it_ca,		&it_cd,		 0, NORM, loc+168,    0, pv+169, 134, 0,    0},
/*187: npx0 at isa0 port 0xf0 size 0 iomem -1 iosiz 0 irq 0xd drq -1 drq2 -1 */
    {&npx_ca,		&npx_cd,	 0, NORM, loc+175,    0, pv+169, 134, 0,    0},
/*188: pccom0 at isa0 port 0x3f8 size 0 iomem -1 iosiz 0 irq 4 drq -1 drq2 -1 */
    {&pccom_isa_ca,	&pccom_cd,	 0, NORM, loc+182,    0, pv+169, 134, 0,    0},
/*189: pccom1 at isa0 port 0x2f8 size 0 iomem -1 iosiz 0 irq 3 drq -1 drq2 -1 */
    {&pccom_isa_ca,	&pccom_cd,	 1, NORM, loc+189,    0, pv+169, 134, 0,    1},
/*190: pccom2 at isa0 port 0x3e8 size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&pccom_isa_ca,	&pccom_cd,	 2, NORM, loc+196,    0, pv+169, 134, 0,    2},
/*191: pccom* at ast0 slave -1 */
    {&pccom_commulti_ca,	&pccom_cd,	 3, STAR, loc+319,    0, pv+193, 149, 0,    3},
/*192: pccom* at pcmcia* function -1 irq -1 */
    {&pccom_pcmcia_ca,	&pccom_cd,	 3, STAR, loc+318,    0, pv+179, 107, 0,    3},
/*193: pccom* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&pccom_isapnp_ca,	&pccom_cd,	 3, STAR, loc+314,    0, pv+171, 110, 0,    3},
/*194: pccom* at puc* port -1 */
    {&pccom_puc_ca,	&pccom_cd,	 3, STAR, loc+319,    0, pv+191, 151, 0,    3},
/*195: lms0 at isa0 port 0x23c size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&lms_ca,		&lms_cd,	 0, NORM, loc+210,    0, pv+169, 134, 0,    0},
/*196: lms1 at isa0 port 0x238 size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&lms_ca,		&lms_cd,	 1, NORM, loc+203,    0, pv+169, 134, 0,    1},
/*197: mms0 at isa0 port 0x23c size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&mms_ca,		&mms_cd,	 0, NORM, loc+210,    0, pv+169, 134, 0,    0},
/*198: mms1 at isa0 port 0x238 size 0 iomem -1 iosiz 0 irq 5 drq -1 drq2 -1 */
    {&mms_ca,		&mms_cd,	 1, NORM, loc+203,    0, pv+169, 134, 0,    1},
/*199: wsdisplay* at vga0|vga*|pcdisplay0 console -1 */
    {&wsdisplay_emul_ca,	&wsdisplay_cd,	 0, STAR, loc+319,    0, pv+146, 153, 0,    0},
/*200: wskbd* at ukbd* console -1 mux 1 */
    {&wskbd_ca,		&wskbd_cd,	 0, STAR, loc+326,    0, pv+183, 159, 0,    0},
/*201: wskbd* at pckbd* console -1 mux -1 */
    {&wskbd_ca,		&wskbd_cd,	 0, STAR, loc+318,    0, pv+185, 162, 0,    0},
/*202: wsmouse* at ums*|pms*|pmsi*|lms0|lms1|mms0|mms1 mux 0 */
    {&wsmouse_ca,	&wsmouse_cd,	 0, STAR, loc+325,    0, pv+126, 165, 0,    0},
/*203: pckbd* at pckbc0 slot -1 */
    {&pckbd_ca,		&pckbd_cd,	 0, STAR, loc+319,    0, pv+187, 179, 0,    0},
/*204: pms* at pckbc0 slot -1 */
    {&pms_ca,		&pms_cd,	 0, STAR, loc+319,    0, pv+187, 179, 0,    0},
/*205: pmsi* at pckbc0 slot -1 */
    {&pmsi_ca,		&pmsi_cd,	 0, STAR, loc+319,    0, pv+187, 179, 0,    0},
/*206: sysbeep0 at pcppi0 */
    {&sysbeep_ca,	&sysbeep_cd,	 0, NORM,     loc,    0, pv+203, 148, 0,    0},
/*207: fdc0 at isa0 port 0x3f0 size 0 iomem -1 iosiz 0 irq 6 drq 2 drq2 -1 */
    {&fdc_ca,		&fdc_cd,	 0, NORM, loc+140,    0, pv+169, 134, 0,    0},
/*208: fd* at fdc0 drive -1 */
    {&fd_ca,		&fd_cd,		 0, STAR, loc+319,    0, pv+195, 181, 0,    0},
/*209: ahc0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&ahc_isa_ca,	&ahc_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*210: eisa0 at mainbus0 */
    {&eisa_ca,		&eisa_cd,	 0, NORM,     loc,    0, pv+207, 96, 0,    0},
/*211: ahb* at eisa0 slot -1 */
    {&ahb_ca,		&ahb_cd,	 0, STAR, loc+319,    0, pv+197, 105, 0,    0},
/*212: ahc* at eisa0 slot -1 */
    {&ahc_eisa_ca,	&ahc_cd,	 1, STAR, loc+319,    0, pv+197, 105, 0,    1},
/*213: uha* at eisa0 slot -1 */
    {&uha_eisa_ca,	&uha_cd,	 2, STAR, loc+319,    0, pv+197, 105, 0,    2},
/*214: fea* at eisa0 slot -1 */
    {&fea_ca,		&fea_cd,	 0, STAR, loc+319,    0, pv+197, 105, 0,    0},
/*215: isapnp0 at isa0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 drq2 -1 */
    {&isapnp_ca,	&isapnp_cd,	 0, NORM, loc+ 77,    0, pv+169, 134, 0,    0},
/*216: mpu* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&mpu_isapnp_ca,	&mpu_cd,	 0, STAR, loc+314,    0, pv+171, 110, 0,    0},
/*217: wdc* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&wdc_isapnp_ca,	&wdc_cd,	 2, STAR, loc+314,    0, pv+171, 110, 0,    2},
/*218: aha* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&aha_isapnp_ca,	&aha_cd,	 2, STAR, loc+314,    0, pv+171, 110, 0,    2},
/*219: aic* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&aic_isapnp_ca,	&aic_cd,	 1, STAR, loc+314,    0, pv+171, 110, 0,    1},
/*220: sb* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&sb_isapnp_ca,	&sb_cd,		 1, STAR, loc+314,    0, pv+171, 110, 0,    1},
/*221: wss* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&wss_isapnp_ca,	&wss_cd,	 1, STAR, loc+314,    0, pv+171, 110, 0,    1},
/*222: ess* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&ess_isapnp_ca,	&ess_cd,	 0, STAR, loc+314,    0, pv+171, 110, 0,    0},
/*223: ep* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&ep_isapnp_ca,	&ep_cd,		 1, STAR, loc+314,    0, pv+171, 110, 0,    1},
/*224: ef* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&ef_isapnp_ca,	&ef_cd,		 0, STAR, loc+314,    0, pv+171, 110, 0,    0},
/*225: ne* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&ne_isapnp_ca,	&ne_cd,		 3, STAR, loc+314,    0, pv+171, 110, 0,    3},
/*226: we* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&we_isapnp_ca,	&we_cd,		 2, STAR, loc+314,    0, pv+171, 110, 0,    2},
/*227: ym* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&ym_isapnp_ca,	&ym_cd,		 0, STAR, loc+314,    0, pv+171, 110, 0,    0},
/*228: joy* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&joy_isapnp_ca,	&joy_cd,	 0, STAR, loc+314,    0, pv+171, 110, 0,    0},
/*229: bios0 at mainbus0 */
    {&bios_ca,		&bios_cd,	 0, NORM,     loc,    0, pv+207, 96, 0,    0},
/*230: apm0 at bios0 */
    {&apm_ca,		&apm_cd,	 0, NORM,     loc,    0, pv+209, 182, 0,    0},
/*231: pcibios0 at bios0 */
    {&pcibios_ca,	&pcibios_cd,	 0, NORM,     loc,    0, pv+209, 182, 0,    0},
/*232: cardslot* at cbb* slot -1 */
    {&cardslot_ca,	&cardslot_cd,	 0, STAR, loc+319,    0, pv+201, 183, 0,    0},
/*233: cardbus* at cardslot* slot -1 */
    {&cardbus_ca,	&cardbus_cd,	 0, STAR, loc+319,    0, pv+124, 185, 0,    0},
/*234: pcic0 at isa0 port 0x3e0 size 0 iomem 0xd0000 iosiz 0x10000 irq -1 drq -1 drq2 -1 */
    {&pcic_isa_ca,	&pcic_cd,	 0, NORM, loc+238,    0, pv+169, 134, 0,    0},
/*235: pcic1 at isa0 port 0x3e2 size 0 iomem 0xe0000 iosiz 0x4000 irq -1 drq -1 drq2 -1 */
    {&pcic_isa_ca,	&pcic_cd,	 1, NORM, loc+231,    0, pv+169, 134, 0,    1},
/*236: pcic2 at isa0 port 0x3e4 size 0 iomem 0xe0000 iosiz 0x4000 irq -1 drq -1 drq2 -1 */
    {&pcic_isa_ca,	&pcic_cd,	 2, NORM, loc+224,    0, pv+169, 134, 0,    2},
/*237: pcic* at pci* dev -1 function -1 */
    {&pcic_pci_ca,	&pcic_cd,	 3, STAR, loc+318,    0, pv+175, 102, 0,    3},
/*238: pcic* at isapnp0 port -1 size 0 iomem -1 iosiz 0 irq -1 drq -1 */
    {&pcic_isapnp_ca,	&pcic_cd,	 3, STAR, loc+314,    0, pv+171, 110, 0,    3},
/*239: tcic0 at isa0 port 0x240 size 0 iomem 0xd0000 iosiz 0x10000 irq -1 drq -1 drq2 -1 */
    {&tcic_isa_ca,	&tcic_cd,	 0, DNRM, loc+217,    0, pv+169, 134, 0,    0},
/*240: lpt* at puc* port -1 */
    {&lpt_puc_ca,	&lpt_cd,	 3, STAR, loc+319,    0, pv+191, 151, 0,    3},
/*241: pcmcia* at pcic0|pcic1|pcic2|pcic*|pcic*|tcic0|cardslot* controller -1 socket -1 */
    {&pcmcia_ca,	&pcmcia_cd,	 0, STAR, loc+318,    0, pv+118, 187, 0,    0},
/*242: aic* at pcmcia* function -1 irq -1 */
    {&aic_pcmcia_ca,	&aic_cd,	 1, STAR, loc+318,    0, pv+179, 107, 0,    1},
/*243: wdc* at pcmcia* function -1 irq -1 */
    {&wdc_pcmcia_ca,	&wdc_cd,	 2, STAR, loc+318,    0, pv+179, 107, 0,    2},
/*244: sm* at pcmcia* function -1 irq -1 */
    {&sm_pcmcia_ca,	&sm_cd,		 0, STAR, loc+318,    0, pv+179, 107, 0,    0},
/*245: xe* at pcmcia* function -1 irq -1 */
    {&xe_pcmcia_ca,	&xe_cd,		 0, STAR, loc+318,    0, pv+179, 107, 0,    0},
/*246: ray* at pcmcia* function -1 irq -1 */
    {&ray_ca,		&ray_cd,	 0, STAR, loc+318,    0, pv+179, 107, 0,    0},
/*247: usb* at uhci*|ohci* */
    {&usb_ca,		&usb_cd,	 0, STAR,     loc,    0, pv+166, 204, 0,    0},
/*248: uhub* at usb* */
    {&uhub_ca,		&uhub_cd,	 0, STAR,     loc,    0, pv+205, 204, 0,    0},
/*249: uhub* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uhub_uhub_ca,	&uhub_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*250: uaudio* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uaudio_ca,	&uaudio_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*251: ucom* at umodem*|uvisor*|ubsa*|uftdi*|uplcom* portno -1 */
    {&ucom_ca,		&ucom_cd,	 0, STAR, loc+319,    0, pv+140, 205, 0,    0},
/*252: ugen* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&ugen_ca,		&ugen_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*253: uhidev* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uhidev_ca,	&uhidev_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*254: uhid* at uhidev* reportid -1 */
    {&uhid_ca,		&uhid_cd,	 0, STAR, loc+319,    0, pv+189, 215, 0,    0},
/*255: ukbd* at uhidev* reportid -1 */
    {&ukbd_ca,		&ukbd_cd,	 0, STAR, loc+319,    0, pv+189, 215, 0,    0},
/*256: ums* at uhidev* reportid -1 */
    {&ums_ca,		&ums_cd,	 0, STAR, loc+319,    0, pv+189, 215, 0,    0},
/*257: ulpt* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&ulpt_ca,		&ulpt_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*258: umass* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&umass_ca,		&umass_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*259: urio* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&urio_ca,		&urio_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*260: uvisor* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uvisor_ca,	&uvisor_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*261: aue* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&aue_ca,		&aue_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*262: cue* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&cue_ca,		&cue_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*263: kue* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&kue_ca,		&kue_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*264: upl* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&upl_ca,		&upl_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*265: url* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&url_ca,		&url_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*266: umodem* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&umodem_ca,	&umodem_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*267: uftdi* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uftdi_ca,		&uftdi_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*268: uplcom* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uplcom_ca,	&uplcom_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*269: ubsa* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&ubsa_ca,		&ubsa_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*270: uscanner* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&uscanner_ca,	&uscanner_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
/*271: usscanner* at uhub*|uhub* port -1 configuration -1 interface -1 vendor -1 product -1 release -1 */
    {&usscanner_ca,	&usscanner_cd,	 0, STAR, loc+308,    0, pv+157, 120, 0,    0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {0},
    {(struct cfattach *)-1}
};

short cfroots[] = {
	35 /* mainbus0 */,
	-1
};

int cfroots_size = 2;

/* pseudo-devices */
extern void pfattach(int);
extern void pflogattach(int);
extern void pfsyncattach(int);
extern void loopattach(int);
extern void bpfilterattach(int);
extern void slattach(int);
extern void pppattach(int);
extern void spppattach(int);
extern void tunattach(int);
extern void encattach(int);
extern void bridgeattach(int);
extern void vlanattach(int);
extern void greattach(int);
extern void carpattach(int);
extern void ptyattach(int);
extern void tbattach(int);
extern void vndattach(int);
extern void ccdattach(int);
extern void ksymsattach(int);
extern void systraceattach(int);
extern void gifattach(int);
extern void pctrattach(int);
extern void mtrrattach(int);
extern void sequencerattach(int);
extern void bioattach(int);
extern void wsmuxattach(int);
extern void cryptoattach(int);

char *pdevnames[] = {
	"pf",
	"pflog",
	"pfsync",
	"loop",
	"bpfilter",
	"sl",
	"ppp",
	"sppp",
	"tun",
	"enc",
	"bridge",
	"vlan",
	"gre",
	"carp",
	"pty",
	"tb",
	"vnd",
	"ccd",
	"ksyms",
	"systrace",
	"gif",
	"pctr",
	"mtrr",
	"sequencer",
	"bio",
	"wsmux",
	"crypto",
};

int pdevnames_size = 27;

struct pdevinit pdevinit[] = {
	{ pfattach, 1 },
	{ pflogattach, 1 },
	{ pfsyncattach, 1 },
	{ loopattach, 2 },
	{ bpfilterattach, 8 },
	{ slattach, 2 },
	{ pppattach, 2 },
	{ spppattach, 1 },
	{ tunattach, 2 },
	{ encattach, 1 },
	{ bridgeattach, 2 },
	{ vlanattach, 2 },
	{ greattach, 1 },
	{ carpattach, 2 },
	{ ptyattach, 16 },
	{ tbattach, 1 },
	{ vndattach, 4 },
	{ ccdattach, 4 },
	{ ksymsattach, 1 },
	{ systraceattach, 1 },
	{ gifattach, 4 },
	{ pctrattach, 1 },
	{ mtrrattach, 1 },
	{ sequencerattach, 1 },
	{ bioattach, 1 },
	{ wsmuxattach, 2 },
	{ cryptoattach, 1 },
	{ NULL, 0 }
};
