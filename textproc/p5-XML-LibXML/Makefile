# $NetBSD: Makefile,v 1.42 2013/05/31 12:42:20 wiz Exp $
#

DISTNAME=	XML-LibXML-2.0016
PKGNAME=	p5-${DISTNAME:S/0016/00.16/}
PKGREVISION=	1
SVR4_PKGNAME=	p5xlx
CATEGORIES=	textproc perl5
MASTER_SITES=	${MASTER_SITE_PERL_CPAN:=XML/}

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	http://search.cpan.org/dist/XML-LibXML/
COMMENT=	Perl interface to the libxml2 library
LICENSE=	${PERL5_LICENSE}

DEPENDS+=	p5-XML-SAX>=0.11:../../textproc/p5-XML-SAX
DEPENDS+=	p5-XML-NamespaceSupport>=1.07:../../textproc/p5-XML-NamespaceSupport

SUPERSEDES=	p5-XML-LibXML-Common<=0.13nb7
CONFLICTS+=	p5-XML-LibXML-Common-[0-9]*

# since version 1.61 the XML::LibXML Perl module
# includes XML::LibXML::XPathContext module
CONFLICTS+=	p5-XML-LibXML-XPathContext-[0-9]*

MAKE_ENV+=		SKIP_SAX_INSTALL=1 # Must be done in the INSTALL script
MAKE_PARAMS+=		INC="-I${LOCALBASE}/include/libxml2"
PERL5_PACKLIST=		auto/XML/LibXML/.packlist

FILES_SUBST+=		PERL5_INSTALLVENDORLIB=${PERL5_INSTALLVENDORLIB:Q}

.include "../../textproc/libxml2/buildlink3.mk"
.include "../../lang/perl5/module.mk"
.include "../../mk/bsd.pkg.mk"
