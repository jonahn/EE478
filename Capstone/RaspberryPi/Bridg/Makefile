#
# This software is licensed under the Public Domain.
#
include $(TOPDIR)/rules.mk

PKG_NAME:=bridgd
PKG_VERSION:=0.1
PKG_RELEASE:=1
TARGET_CFLAGS+=$(FPIC) -lpthread

include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/cmake.mk


define Package/bridgd
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=Bridg daemon server application.
	DEPENDS:=+libpthread
endef


define Package/bridgd/description
	Bridge daemon server application.
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/bridgd/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/bridgd $(1)/usr/bin/

	$(INSTALL_DIR) $(1)/etc/init.d/
	$(INSTALL_BIN) files/bridgd.init $(1)/etc/init.d/bridgd
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_CONF) files/bridgd.config $(1)/etc/config/bridgd
endef

$(eval $(call BuildPackage,bridgd,+libpthread))
