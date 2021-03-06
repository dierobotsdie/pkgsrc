$NetBSD: patch-mozilla_netwerk_sctp_src_netinet_sctp__os__userspace.h,v 1.1 2013/05/23 13:25:30 ryoon Exp $

--- mozilla/netwerk/sctp/src/netinet/sctp_os_userspace.h.orig	2013-05-03 03:08:09.000000000 +0000
+++ mozilla/netwerk/sctp/src/netinet/sctp_os_userspace.h
@@ -395,7 +395,9 @@ typedef pthread_t userland_thread_t;
 #define MA_OWNED 7 /* sys/mutex.h typically on FreeBSD */
 #if !defined(__Userspace_os_FreeBSD)
 struct mtx {int dummy;};
+#if !defined(__Userspace_os_NetBSD)
 struct selinfo {int dummy;};
+#endif
 struct sx {int dummy;};
 #endif
 
