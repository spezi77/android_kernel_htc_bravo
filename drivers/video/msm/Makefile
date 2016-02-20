# core framebuffer
#
ifeq ($(CONFIG_FB_MSM_MDSS),y)
obj-y += mdss/
else
obj-y := msm_fb.o

obj-$(CONFIG_FB_MSM_LOGO) += logo.o
obj-$(CONFIG_FB_BACKLIGHT) += msm_fb_bl.o

ifeq ($(CONFIG_FB_MSM_MDP_HW),y)
# MDP DMA/PPP engine
#
obj-y += mdp.o

obj-$(CONFIG_DEBUG_FS) += mdp_debugfs.o

ifeq ($(CONFIG_FB_MSM_MDP40),y)
obj-y += mdp4_util.o
else
obj-y += mdp_hw_init.o
obj-y += mdp_ppp.o
ifeq ($(CONFIG_FB_MSM_MDP31),y)
obj-y += mdp_ppp_v31.o
else
obj-y += mdp_ppp_v20.o
endif
endif

ifeq ($(CONFIG_FB_MSM_OVERLAY),y)
obj-y += mdp4_overlay.o
obj-$(CONFIG_FB_MSM_LCDC) += mdp4_overlay_lcdc.o
ifeq ($(CONFIG_FB_MSM_MIPI_DSI),y)
obj-y += mdp4_overlay_dsi_video.o
obj-y += mdp4_overlay_dsi_cmd.o
else
obj-$(CONFIG_FB_MSM_MDDI) += mdp4_overlay_mddi.o
endif
else
obj-y += mdp_dma_lcdc.o
endif

obj-$(CONFIG_FB_MSM_MDP303) += mdp_dma_dsi_video.o

ifeq ($(CONFIG_FB_MSM_DTV),y)
obj-y += mdp4_dtv.o
obj-y += mdp4_overlay_dtv.o
endif

obj-y += mdp_dma.o
obj-y += mdp_dma_s.o
obj-y += mdp_vsync.o
obj-y += mdp_cursor.o
obj-y += mdp_dma_tv.o
obj-$(CONFIG_ARCH_MSM7X27A) += msm_dss_io_7x27a.o
obj-$(CONFIG_ARCH_MSM8X60) += msm_dss_io_8x60.o
obj-$(CONFIG_ARCH_MSM8960) += msm_dss_io_8960.o

# EBI2
obj-$(CONFIG_FB_MSM_EBI2) += ebi2_lcd.o

# LCDC
obj-$(CONFIG_FB_MSM_LCDC) += lcdc.o

# LVDS
obj-$(CONFIG_FB_MSM_LVDS) += lvds.o

# MDDI
msm_mddi-objs := mddi.o mddihost.o mddihosti.o
obj-$(CONFIG_FB_MSM_MDDI) += msm_mddi.o

# External MDDI
msm_mddi_ext-objs := mddihost_e.o mddi_ext.o
obj-$(CONFIG_FB_MSM_EXTMDDI) += msm_mddi_ext.o

# MIPI gereric
msm_mipi-objs := mipi_dsi.o mipi_dsi_host.o
obj-$(CONFIG_FB_MSM_MIPI_DSI) += msm_mipi.o

# MIPI manufacture
obj-$(CONFIG_FB_MSM_MIPI_DSI_TOSHIBA) += mipi_toshiba.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_NOVATEK) += mipi_novatek.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_ORISE) += mipi_orise.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_RENESAS) += mipi_renesas.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_TRULY) += mipi_truly.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_NT35510) += mipi_NT35510.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_NT35516) += mipi_truly_tft540960_1_e.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_NT35590) += mipi_NT35590.o
obj-$(CONFIG_FB_MSM_MIPI_DSI_SIMULATOR) += mipi_simulator.o

# MIPI Bridge
obj-$(CONFIG_FB_MSM_MIPI_DSI_TC358764_DSI2LVDS) += mipi_tc358764_dsi2lvds.o

# TVEnc
obj-$(CONFIG_FB_MSM_TVOUT) += tvenc.o
ifeq ($(CONFIG_FB_MSM_OVERLAY),y)
obj-$(CONFIG_FB_MSM_TVOUT) += mdp4_overlay_atv.o
endif

# MSM FB Panel
obj-y += msm_fb_panel.o
obj-$(CONFIG_FB_MSM_EBI2_TMD_QVGA_EPSON_QCIF) += ebi2_tmd20.o
obj-$(CONFIG_FB_MSM_EBI2_TMD_QVGA_EPSON_QCIF) += ebi2_l2f.o

obj-$(CONFIG_MSM_MDP40) += mdp_hw40.o

obj-$(CONFIG_FB_MSM_LEGACY_MDP) += mdp_hw_legacy.o

obj-$(CONFIG_FB_MSM_MDP_PPP) += mdp_ppp.o
obj-$(CONFIG_MSM_MDP22) += mdp_ppp22.o
obj-$(CONFIG_MSM_MDP31) += mdp_ppp31.o

# MDDI interface
#
obj-$(CONFIG_FB_MSM_MDDI) += mddi.o

# MDDI client/panel drivers
#
obj-$(CONFIG_FB_MSM_MDDI) += mddi_client_simple.o
obj-$(CONFIG_FB_MSM_MDDI) += mddi_client_toshiba.o
obj-$(CONFIG_FB_MSM_MDDI_NOVTEC) += mddi_client_novb9f6_5582.o
obj-$(CONFIG_FB_MSM_MDDI_EPSON) += mddi_client_epson.o

# MDP LCD controller driver
obj-$(CONFIG_FB_MSM_LCDC) += mdp_lcdc.o

obj-$(CONFIG_MSM_HDMI) += hdmi/
obj-$(CONFIG_FB_MSM_SAGA_PANEL) += lcdc_sony_wvga.o
obj-$(CONFIG_FB_MSM_SPADE_PANEL) += lcdc_spade_wvga.o
obj-$(CONFIG_FB_MSM_VISION_PANEL) += lcdc_sony_wvga.o lcdc_samsung_s6e63m0_wvga.o lcdc_samsung_tl2796a_wvga.o

obj-$(CONFIG_MSM_VIDC_1080P) += vidc/
obj-$(CONFIG_MSM_VIDC_720P) += vidc/
clean:
	rm *.o .*cmd

