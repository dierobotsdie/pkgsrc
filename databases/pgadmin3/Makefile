# $NetBSD: Makefile,v 1.38 2013/06/06 12:54:11 wiz Exp $

DISTNAME=	pgadmin3-1.12.1
PKGREVISION=	17
CATEGORIES=	databases
MASTER_SITES=	${MASTER_SITE_PGSQL:=pgadmin3/release/v${PKGVERSION_NOREV}/src/}

MAINTAINER=	joerg@NetBSD.org
HOMEPAGE=	http://www.pgadmin.org/
COMMENT=	Graphical PostgreSQL client and administration tool

PGSQL_VERSIONS_ACCEPTED=90 84

USE_LANGUAGES=		c c++
USE_TOOLS+=		gmake msgfmt
GNU_CONFIGURE=		yes
CONFIGURE_ARGS+=	--with-wx=${BUILDLINK_PREFIX.wxGTK28}

.include "../../textproc/libxml2/buildlink3.mk"
.include "../../textproc/libxslt/buildlink3.mk"
.include "../../x11/wxGTK28/buildlink3.mk"
.include "../../x11/wxGTK28-contrib/buildlink3.mk"
.include "../../mk/pgsql.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
