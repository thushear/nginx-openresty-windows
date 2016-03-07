#ifndef MK1MF_BUILD
  /* auto-generated by Configure for crypto/cversion.c:
   * for Unix builds, crypto/Makefile.ssl generates functional definitions;
   * Windows builds (and other mk1mf builds) compile cversion.c with
   * -DMK1MF_BUILD and use definitions added to this file by util/mk1mf.pl. */
  #error "Windows builds (PLATFORM=VC-WIN64A) use mk1mf.pl-created Makefiles"
#endif
#ifdef MK1MF_PLATFORM_VC_WIN64A
  /* auto-generated/updated by util/mk1mf.pl for crypto/cversion.c */
  #define CFLAGS "compiler: cl  /MD /Ox -DOPENSSL_THREADS  -DDSO_WIN32 -W3 -Gs0 -Gy -nologo -DOPENSSL_SYSNAME_WIN32 -DWIN32_LEAN_AND_MEAN -DL_ENDIAN -DUNICODE -D_UNICODE -D_CRT_SECURE_NO_DEPRECATE -DOPENSSL_USE_APPLINK -I. -DOPENSSL_NO_RC5 -DOPENSSL_NO_MD2 -DOPENSSL_NO_SSL2 -DOPENSSL_NO_KRB5 -DOPENSSL_NO_JPAKE -DOPENSSL_NO_WEAK_SSL_CIPHERS -DOPENSSL_NO_STATIC_ENGINE    "
  #define PLATFORM "VC-WIN64A"
  #define DATE "Mon Mar  7 03:17:44 2016"
#endif
