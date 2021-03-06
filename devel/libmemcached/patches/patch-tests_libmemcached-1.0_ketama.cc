$NetBSD: patch-tests_libmemcached-1.0_ketama.cc,v 1.2 2013/06/04 21:17:17 fhajny Exp $

--- tests/libmemcached-1.0/ketama.cc.orig	2013-05-05 20:35:41.000000000 +0000
+++ tests/libmemcached-1.0/ketama.cc
@@ -33,6 +33,7 @@
  *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  */
+#define __STDC_CONSTANT_MACROS
 
 #include <config.h>
 #include <libtest/test.hpp>
@@ -43,6 +44,7 @@
 
 #include <tests/ketama.h>
 #include <tests/ketama_test_cases.h>
+#include <stdint.h>
 
 test_return_t ketama_compatibility_libmemcached(memcached_st *)
 {
