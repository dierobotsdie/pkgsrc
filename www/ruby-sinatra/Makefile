# $NetBSD: Makefile,v 1.13 2013/06/16 09:12:18 obache Exp $

DISTNAME=	sinatra-1.4.3
CATEGORIES=	www

MAINTAINER=	obache@NetBSD.org
HOMEPAGE=	http://www.sinatrarb.com/
COMMENT=	Classy web-development dressed in a DSL
LICENSE=	mit

DEPENDS+=	${RUBY_PKGPREFIX}-rack>=1.4<2:../../www/ruby-rack
DEPENDS+=	${RUBY_PKGPREFIX}-rack-protection>=1.4<2:../../www/ruby-rack-protection
DEPENDS+=	${RUBY_PKGPREFIX}-tilt>=1.3.4<2:../../textproc/ruby-tilt

RUBY_RDOC_REQD=	3.0

.include "../../lang/ruby/gem.mk"
.include "../../mk/bsd.pkg.mk"
