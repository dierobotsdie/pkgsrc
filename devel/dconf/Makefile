# $NetBSD: Makefile,v 1.18 2013/05/30 09:02:36 prlw1 Exp $

.include "Makefile.common"

CONFIGURE_ARGS+= --disable-editor

PKGCONFIG_OVERRIDE+=	client/dconf.pc.in dbus-1/dconf-dbus-1.pc.in

.include "../../mk/bsd.prefs.mk"
.if ${OPSYS} == "NetBSD"
BUILDLINK_TRANSFORM+=   rm:-ldl
.endif

BUILD_DEPENDS+=	gdbus-codegen-[0-9]*:../../devel/gdbus-codegen
BUILD_DEPENDS+=	libxslt-[0-9]*:../../textproc/libxslt
BUILD_DEPENDS+=	docbook-xsl-[0-9]*:../../textproc/docbook-xsl

BUILDLINK_DEPMETHOD.vala= build
.include "../../lang/vala018/buildlink3.mk"
BUILDLINK_API_DEPENDS.glib2+=	glib2>=2.35.2
.include "../../devel/glib2/modules.mk"
.include "../../sysutils/dbus/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
