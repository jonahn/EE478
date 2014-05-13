#
# This software is licensed under the Public Domain.
#
include $(TOPDIR)/rules.mk

PKG_NAME:=exampleapp
PKG_VERSION:=0.1
PKG_RELEASE:=1

include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/cmake.mk

define Package/exampleapp
	SECTION:=utils
	CATEGORY:=Utilities
	TITLE:=Some dummy application.
endef

define Package/exampleapp/description
	This is some dummy application.
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/exampleapp/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/exampleapp $(1)/usr/bin/

	$(INSTALL_DIR) $(1)/etc/init.d/
	$(INSTALL_BIN) files/exampleapp.init $(1)/etc/init.d/exampleapp
	$(INSTALL_DIR) $(1)/etc/config
	$(INSTALL_CONF) files/exampleapp.config $(1)/etc/config/exampleapp
endef

$(eval $(call BuildPackage,exampleapp))
