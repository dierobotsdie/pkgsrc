# $NetBSD: Makefile,v 1.9 2013/05/31 12:42:38 wiz Exp $

DISTNAME=	Catalyst-Plugin-AutoRestart-0.94
PKGNAME=	p5-${DISTNAME}
PKGREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=Catalyst/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/Catalyst-Plugin-AutoRestart/
COMMENT=	Restart Catalyst when specified memory threshold reached
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-Catalyst-Runtime>=5.7007:../../www/p5-Catalyst-Runtime
DEPENDS+=	p5-Class-Data-Accessor>=0:../../devel/p5-Class-Data-Accessor
DEPENDS+=	p5-MRO-Compat>=0.07:../../devel/p5-MRO-Compat
DEPENDS+=	p5-Proc-ProcessTable>=0.41:../../devel/p5-Proc-ProcessTable
DEPENDS+=	p5-Text-SimpleTable>=0.03:../../textproc/p5-Text-SimpleTable

USE_LANGUAGES=		# empty
PERL5_PACKLIST=		auto/Catalyst/Plugin/AutoRestart/.packlist
PERL5_MODULE_TYPE=	Module::Install::Bundled

.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
