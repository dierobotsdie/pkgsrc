# $NetBSD: Makefile,v 1.1 2013/06/16 18:56:06 sno Exp $
#

DISTNAME=	elementary-1.7.7
CATEGORIES=	x11
MASTER_SITES=	http://download.enlightenment.org/releases/
EXTRACT_SUFX=	.tar.bz2

MAINTAINER=	joerg@NetBSD.org
HOMEPAGE=	http://www.enlightenment.org/
COMMENT=	E17 Widget Library
LICENSE=	gnu-lgpl-v2.1

PKG_DESTDIR_SUPPORT=	user-destdir

GNU_CONFIGURE=	yes
USE_LIBTOOL=	yes
USE_TOOLS+=	pkg-config
USE_TOOLS+=	autoconf # because I patched configure.ac
USE_TOOLS+=	gmake

PKGCONFIG_OVERRIDE=	elementary

# currently it is like it is
MODULE_ARCH=	${LOWER_OPSYS}-${LOWER_ARCH}-1.7.7
PLIST_SUBST=	MODULE_ARCH=${MODULE_ARCH}
PRINT_PLIST_AWK+=        { gsub(/${MODULE_ARCH}/, "$${MODULE_ARCH}") }

MAKE_FLAGS+=	MODULE_ARCH=${MODULE_ARCH}

.include "../../devel/ecore/buildlink3.mk"
.include "../../graphics/edje/buildlink3.mk"
.include "../../sysutils/edbus/buildlink3.mk"
.include "../../sysutils/efreet/buildlink3.mk"
.include "../../devel/eet/buildlink3.mk"
.include "../../graphics/evas-png/buildlink3.mk"
.include "../../graphics/evas-jpeg/buildlink3.mk"
.include "../../graphics/evas/buildlink3.mk"
.include "../../devel/eio/buildlink3.mk"
#.include "../../devel/ewheather/buildlink3.mk"
#.include "../../devel/emap/buildlink3.mk"
#.include "../../devel/ethumb/buildlink3.mk"
#.include "../../devel/emotion/buildlink3.mk"
#.include "../../devel/webkit/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
