# $NetBSD: options.mk,v 1.4 2012/04/14 16:25:11 adam Exp $

PKG_OPTIONS_VAR=		PKG_OPTIONS.wordpress

PKG_OPTIONS_REQUIRED_GROUPS=	wordpress
PKG_OPTIONS_GROUP.wordpress=	php-cgi ap-php

PKG_SUGGESTED_OPTIONS=		ap-php

.include "../../mk/bsd.options.mk"

.if !empty(PKG_OPTIONS:Mphp-cgi)
DEPENDS+=	php>=5.2.4:${PHPPKGSRCDIR}
.endif

.if !empty(PKG_OPTIONS:Map-php)
.  include "../../mk/apache.mk"
DEPENDS+=	${APACHE_PKG_PREFIX}-${PHP_PKG_PREFIX}>=4.3.0:../../www/ap-php
.endif
