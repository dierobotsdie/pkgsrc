# $NetBSD: Makefile,v 1.38 2013/06/06 12:55:05 wiz Exp $

DISTNAME=	kdf-${_KDE_VERSION}
PKGREVISION=	3
CATEGORIES=	sysutils
COMMENT=	Show mount points and disk usage under KDE desktop

.include "../../meta-pkgs/kde4/Makefile.kde4"

.include "../../meta-pkgs/kde4/kde4.mk"

.include "../../graphics/hicolor-icon-theme/buildlink3.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../x11/kdelibs4/buildlink3.mk"

.include "../../mk/bsd.pkg.mk"
