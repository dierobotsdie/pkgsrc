# $NetBSD: Makefile,v 1.42 2013/05/31 12:40:12 wiz Exp $

DISTNAME=	Curses-1.28
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	4
SVR4_PKGNAME=	p5cur
CATEGORIES=	devel perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Curses/}
EXTRACT_SUFX=	.tgz

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Curses/
COMMENT=	Perl5 module for terminal screen handling and optimization
# really it's gnu-gpl-v1+ OR artistic-1.0, but currently we don't have gplv1
LICENSE=	${PERL5_LICENSE}

PKG_INSTALLATION_TYPES=	overwrite pkgviews

USE_NCURSES=		yes
PERL5_PACKLIST=		auto/Curses/.packlist

MAKE_PARAMS+=	PANELS
# does not compile on 2.0 because of conflicts between perl internal header
# files and stdbool.h
#MAKE_PARAMS+=	FORMS MENUS

pre-configure:
	${LN} -sf ${WRKSRC}/hints/c-netbsd.ncurses.h ${WRKSRC}/c-config.h

.include "../../devel/ncurses/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
