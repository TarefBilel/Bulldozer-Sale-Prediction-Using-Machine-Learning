/* src/include/pg_config.h.  Generated by configure.  */
/* src/include/pg_config.h.in.  Generated from configure.in by autoheader.  */

/* This file is generated from MingW ./configure, and with the following
 * changes to be valid for Visual C++ (and compatible):
 *
 * HAVE_CBRT, HAVE_FUNCNAME_FUNC, HAVE_GETOPT, HAVE_GETOPT_H, HAVE_INTTYPES_H,
 * HAVE_GETOPT_LONG, HAVE_LOCALE_T, HAVE_RINT, HAVE_STRINGS_H, HAVE_STRTOLL,
 * HAVE_STRTOULL, HAVE_STRUCT_OPTION, ENABLE_THREAD_SAFETY,
 * inline, USE_SSE42_CRC32C_WITH_RUNTIME_CHECK
 */

/* Define to the type of arg 1 of 'accept' */
#define ACCEPT_TYPE_ARG1 unsigned int

/* Define to the type of arg 2 of 'accept' */
#define ACCEPT_TYPE_ARG2 struct sockaddr *

/* Define to the type of arg 3 of 'accept' */
#define ACCEPT_TYPE_ARG3 int

/* Define to the return type of 'accept' */
#define ACCEPT_TYPE_RETURN unsigned int PASCAL

/* The alignment requirement of a `double'. */
#define ALIGNOF_DOUBLE 8

/* The alignment requirement of a `int'. */
#define ALIGNOF_INT 4

/* The alignment requirement of a `long'. */
#define ALIGNOF_LONG 4

/* The alignment requirement of a `long long int'. */
#define ALIGNOF_LONG_LONG_INT 8

/* The normal alignment of `PG_INT128_TYPE', in bytes. */
#undef ALIGNOF_PG_INT128_TYPE

/* The alignment requirement of a `short'. */
#define ALIGNOF_SHORT 2

/* Define to the default TCP port number on which the server listens and to
   which clients will try to connect. This can be overridden at run-time, but
   it's convenient if your clients have the right default compiled in.
   (--with-pgport=PORTNUM) */
#define DEF_PGPORT 5432

/* Define to the default TCP port number as a string constant. */
#define DEF_PGPORT_STR "5432"

/* Define to nothing if C supports flexible array members, and to 1 if it does
   not. That way, with a declaration like `struct s { int n; double
   d[FLEXIBLE_ARRAY_MEMBER]; };', the struct hack can be used with pre-C99
   compilers. When computing the size of such an object, don't use 'sizeof
   (struct s)' as it overestimates the size. Use 'offsetof (struct s, d)'
   instead. Don't use 'offsetof (struct s, d[0])', as this doesn't work with
   MSVC and with C++ compilers. */
#define FLEXIBLE_ARRAY_MEMBER

/* Define to 1 if you want National Language Support. (--enable-nls) */
/* #undef ENABLE_NLS */

/* Define to 1 to build client libraries as thread-safe code.
   (--enable-thread-safety) */
#define ENABLE_THREAD_SAFETY 1

/* Define to 1 if gettimeofday() takes only 1 argument. */
/* #undef GETTIMEOFDAY_1ARG */

#ifdef GETTIMEOFDAY_1ARG
# define gettimeofday(a,b) gettimeofday(a)
#endif

/* Define to 1 if you have the `ASN1_STRING_get0_data' function. */
#define HAVE_ASN1_STRING_GET0_DATA 1

/* Define to 1 if you have the `BIO_meth_new' function. */
#define HAVE_BIO_METH_NEW 1

/* Define to 1 if you have the `cbrt' function. */
//#define HAVE_CBRT 1

/* Define to 1 if you have the `class' function. */
/* #undef HAVE_CLASS */

/* Define to 1 if you have the `clock_gettime' function. */
/* #undef HAVE_CLOCK_GETTIME */

/* Define to 1 if your compiler handles computed gotos. */
/* #undef HAVE_COMPUTED_GOTO */

/* Define to 1 if you have the `crypt' function. */
/* #undef HAVE_CRYPT */

/* Define to 1 if you have the <crypt.h> header file. */
/* #undef HAVE_CRYPT_H */

/* Define to 1 if you have the declaration of `fdatasync', and to 0 if you
   don't. */
#define HAVE_DECL_FDATASYNC 0

/* Define to 1 if you have the declaration of `F_FULLFSYNC', and to 0 if you
   don't. */
#define HAVE_DECL_F_FULLFSYNC 0

/* Define to 1 if you have the declaration of
   `LLVMCreateGDBRegistrationListener', and to 0 if you don't. */
#undef HAVE_DECL_LLVMCREATEGDBREGISTRATIONLISTENER

/* Define to 1 if you have the declaration of
   `LLVMCreatePerfJITEventListener', and to 0 if you don't. */
#undef HAVE_DECL_LLVMCREATEPERFJITEVENTLISTENER

/* Define to 1 if you have the declaration of `LLVMGetHostCPUName', and to 0
   if you don't. */
#define HAVE_DECL_LLVMGETHOSTCPUNAME 0

/* Define to 1 if you have the declaration of `LLVMGetHostCPUFeatures', and to 0
   if you don't. */
#define HAVE_DECL_LLVMGETHOSTCPUFEATURES 0

/* Define to 1 if you have the declaration of `LLVMOrcGetSymbolAddressIn', and
   to 0 if you don't. */
#define HAVE_DECL_LLVMORCGETSYMBOLADDRESSIN 0

/* Define to 1 if you have the declaration of `RTLD_GLOBAL', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_GLOBAL 0

/* Define to 1 if you have the declaration of `RTLD_NOW', and to 0 if you
   don't. */
#define HAVE_DECL_RTLD_NOW 0

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the `strtof' function. */
#define HAVE_STRTOF 1

/* Define to 1 if you have the declaration of `strtoll', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOLL 1

/* Define to 1 if you have the declaration of `strtoull', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOULL 1

/* Define to 1 if you have the `dlopen' function. */
/* #undef HAVE_DLOPEN */

/* Define to 1 if you have the <editline/history.h> header file. */
/* #undef HAVE_EDITLINE_HISTORY_H */

/* Define to 1 if you have the <editline/readline.h> header file. */
/* #undef HAVE_EDITLINE_READLINE_H */

/* Define to 1 if you have the `fcvt' function. */
#define HAVE_FCVT 1

/* Define to 1 if you have the `fdatasync' function. */
/* #undef HAVE_FDATASYNC */

/* Define to 1 if you have finite(). */
#define HAVE_FINITE 1

/* Define to 1 if you have the `fpclass' function. */
/* #undef HAVE_FPCLASS */

/* Define to 1 if you have the `fp_class' function. */
/* #undef HAVE_FP_CLASS */

/* Define to 1 if you have the `fp_class_d' function. */
/* #undef HAVE_FP_CLASS_D */

/* Define to 1 if you have the <fp_class.h> header file. */
/* #undef HAVE_FP_CLASS_H */

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#define HAVE_FSEEKO 1

/* Define to 1 if your compiler understands __func__. */
//#define HAVE_FUNCNAME__FUNC 1

/* Define to 1 if your compiler understands __FUNCTION__. */
#define HAVE_FUNCNAME__FUNCTION 1

/* Define to 1 if you have getaddrinfo(). */
/* #undef HAVE_GETADDRINFO */

/* Define to 1 if you have the `gethostbyname_r' function. */
/* #undef HAVE_GETHOSTBYNAME_R */

/* Define to 1 if you have the `getopt' function. */
//#define HAVE_GETOPT 1

/* Define to 1 if you have the <getopt.h> header file. */
//#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
//#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the `getpeereid' function. */
/* #undef HAVE_GETPEEREID */

/* Define to 1 if you have the `getpwuid_r' function. */
/* #undef HAVE_GETPWUID_R */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define to 1 if you have the <history.h> header file. */
/* #undef HAVE_HISTORY_H */

/* Define to 1 if you have the <ieeefp.h> header file. */
/* #undef HAVE_IEEEFP_H */

/* Define to 1 if you have the `inet_aton' function. */
/* #undef HAVE_INET_ATON */

/* Define to 1 if the system has the type `int64'. */
/* #undef HAVE_INT64 */

/* Define to 1 if the system has the type `int8'. */
/* #undef HAVE_INT8 */

/* Define to 1 if you have the <inttypes.h> header file. */
//#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the global variable 'int timezone'. */
#define HAVE_INT_TIMEZONE 1

/* Define to 1 if you have support for IPv6. */
#define HAVE_IPV6 1

/* Define to 1 if you have isinf(). */
#define HAVE_ISINF 1

/* Define to 1 if you have the <langinfo.h> header file. */
/* #undef HAVE_LANGINFO_H */

/* Define to 1 if you have the <ldap.h> header file. */
/* #undef HAVE_LDAP_H */

/* Define to 1 if you have the `ldap_initialize' function. */
/* #undef HAVE_LDAP_INITIALIZE */

/* Define to 1 if you have the `crypto' library (-lcrypto). */
/* #undef HAVE_LIBCRYPTO */

/* Define to 1 if you have the `ldap' library (-lldap). */
/* #undef HAVE_LIBLDAP */

/* Define to 1 if you have the `pam' library (-lpam). */
/* #undef HAVE_LIBPAM */

/* Define if you have a function readline library */
/* #undef HAVE_LIBREADLINE */

/* Define to 1 if you have the `ssl' library (-lssl). */
/* #undef HAVE_LIBSSL */

/* Define to 1 if you have the `wldap32' library (-lwldap32). */
/* #undef HAVE_LIBWLDAP32 */

/* Define to 1 if you have the `z' library (-lz). */
/* #undef HAVE_LIBZ */

/* Define to 1 if the system has the type `locale_t'. */
#define HAVE_LOCALE_T 1

/* Define to 1 if `long int' works and is 64 bits. */
/* #undef HAVE_LONG_INT_64 */

/* Define to 1 if the system has the type `long long int'. */
#if (_MSC_VER > 1200)
#define HAVE_LONG_LONG_INT 1
#endif

/* Define to 1 if `long long int' works and is 64 bits. */
#if (_MSC_VER > 1200)
#define HAVE_LONG_LONG_INT_64 1
#endif

/* Define to 1 if you have the `mbstowcs_l' function. */
#define HAVE_MBSTOWCS_L 1

/* Define to 1 if you have the `memmove' function. */
#define HAVE_MEMMOVE 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if the system has the type `MINIDUMP_TYPE'. */
#define HAVE_MINIDUMP_TYPE 1

/* Define to 1 if you have the `mkdtemp' function. */
/* #undef HAVE_MKDTEMP */

/* Define to 1 if you have the <netinet/tcp.h> header file. */
/* #undef HAVE_NETINET_TCP_H */

/* Define to 1 if you have the `OPENSSL_init_ssl' function. */
/* #undef HAVE_OPENSSL_INIT_SSL */

/* Define to 1 if you have the <pam/pam_appl.h> header file. */
/* #undef HAVE_PAM_PAM_APPL_H */

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef HAVE_POLL_H */

/* Define to 1 if you have the `posix_fallocate' function. */
/* #undef HAVE_POSIX_FALLOCATE */

/* Define to 1 if you have the `ppoll' function. */
/* #undef HAVE_PPOLL */

/* Define to 1 if you have the `pread' function. */
/* #undef HAVE_PREAD */

/* Define to 1 if you have the `pstat' function. */
/* #undef HAVE_PSTAT */

/* Define to 1 if the PS_STRINGS thing exists. */
/* #undef HAVE_PS_STRINGS */

/* Define to 1 if you have the `pwrite' function. */
/* #undef HAVE_PWRITE */

/* Define to 1 if you have the `random' function. */
/* #undef HAVE_RANDOM */

/* Define to 1 if you have the <readline.h> header file. */
/* #undef HAVE_READLINE_H */

/* Define to 1 if you have the <readline/history.h> header file. */
/* #undef HAVE_READLINE_HISTORY_H */

/* Define to 1 if you have the <readline/readline.h> header file. */
/* #undef HAVE_READLINE_READLINE_H */

/* Define to 1 if you have the `readlink' function. */
/* #undef HAVE_READLINK */

/* Define to 1 if you have the `rint' function. */
#if (_MSC_VER >= 1800)
#define HAVE_RINT 1
#endif


/* Define to 1 if you have the global variable
   'rl_completion_append_character'. */
/* #undef HAVE_RL_COMPLETION_APPEND_CHARACTER */

/* Define to 1 if you have the `rl_completion_matches' function. */
/* #undef HAVE_RL_COMPLETION_MATCHES */

/* Define to 1 if you have the `rl_filename_completion_function' function. */
/* #undef HAVE_RL_FILENAME_COMPLETION_FUNCTION */

/* Define to 1 if you have the <security/pam_appl.h> header file. */
/* #undef HAVE_SECURITY_PAM_APPL_H */

/* Define to 1 if you have the `setenv' function. */
/* #undef HAVE_SETENV */

/* Define to 1 if you have the `setproctitle' function. */
/* #undef HAVE_SETPROCTITLE */

/* Define to 1 if you have the `setsid' function. */
/* #undef HAVE_SETSID */

/* Define to 1 if you have spinlocks. */
#define HAVE_SPINLOCKS 1

/* Define to 1 if you have atomics. */
#define HAVE_ATOMICS 1

/* Define to 1 if you have the `srandom' function. */
/* #undef HAVE_SRANDOM */

/* Define to 1 if you have the `SSL_clear_options' function. */
#define HAVE_SSL_CLEAR_OPTIONS 1

/* Define to 1 if you have the `SSL_CTX_set_num_tickets' function. */
/* #undef HAVE_SSL_CTX_SET_NUM_TICKETS */

/* Define to 1 if you have the `SSL_get_current_compression' function. */
#define HAVE_SSL_GET_CURRENT_COMPRESSION 1

/* Define to 1 if stdbool.h conforms to C99. */
#if (_MSC_VER >= 1800)
#define HAVE_STDBOOL_H 1
#endif

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strchrnul' function. */
/* #undef HAVE_STRCHRNUL */

/* Define to 1 if you have the `strerror_r' function. */
/* #undef HAVE_STRERROR_R */

/* Define to 1 if you have the <strings.h> header file. */
/*#define HAVE_STRINGS_H 1 */

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strsignal' function. */
/* #undef HAVE_STRSIGNAL */

/* Define to 1 if you have the `strtoll' function. */
#ifdef HAVE_LONG_LONG_INT_64
#define HAVE_STRTOLL 1
/* Before VS2013, use Microsoft's nonstandard equivalent function */
#if (_MSC_VER < 1800)
#define strtoll _strtoi64
#endif
#endif

/* Define to 1 if you have the `strtoull' function. */
#ifdef HAVE_LONG_LONG_INT_64
#define HAVE_STRTOULL 1
/* Before VS2013, use Microsoft's nonstandard equivalent function */
#if (_MSC_VER < 1800)
#define strtoull _strtoui64
#endif
#endif

/* Define to 1 if the system has the type `struct addrinfo'. */
#if (_MSC_VER > 1200)
#define HAVE_STRUCT_ADDRINFO 1
#endif

/* Define to 1 if the system has the type `struct cmsgcred'. */
/* #undef HAVE_STRUCT_CMSGCRED */

/* Define to 1 if the system has the type `struct option'. */
//#define HAVE_STRUCT_OPTION 1

/* Define to 1 if `sa_len' is member of `struct sockaddr'. */
/* #undef HAVE_STRUCT_SOCKADDR_SA_LEN */

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#if (_MSC_VER > 1200)
#define HAVE_STRUCT_SOCKADDR_STORAGE 1
#endif

/* Define to 1 if `ss_family' is member of `struct sockaddr_storage'. */
#if (_MSC_VER > 1200)
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1
#endif

/* Define to 1 if `ss_len' is member of `struct sockaddr_storage'. */
/* #undef HAVE_STRUCT_SOCKADDR_STORAGE_SS_LEN */

/* Define to 1 if `__ss_family' is member of `struct sockaddr_storage'. */
/* #undef HAVE_STRUCT_SOCKADDR_STORAGE___SS_FAMILY */

/* Define to 1 if `__ss_len' is member of `struct sockaddr_storage'. */
/* #undef HAVE_STRUCT_SOCKADDR_STORAGE___SS_LEN */

/* Define to 1 if the system has the type `struct sockaddr_un'. */
/* #undef HAVE_STRUCT_SOCKADDR_UN */

/* Define to 1 if `tm_zone' is member of `struct tm'. */
/* #undef HAVE_STRUCT_TM_TM_ZONE */

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the `sync_file_range' function. */
/* #undef HAVE_SYNC_FILE_RANGE */

/* Define to 1 if you have the `sysconf' function. */
/* #undef HAVE_SYSCONF */

/* Define to 1 if you have the syslog interface. */
/* #undef HAVE_SYSLOG */

/* Define to 1 if you have the <sys/ipc.h> header file. */
/* #undef HAVE_SYS_IPC_H */

/* Define to 1 if you have the <sys/prctl.h> header file. */
/* #undef HAVE_SYS_PRCTL_H */

/* Define to 1 if you have the <sys/pstat.h> header file. */
/* #undef HAVE_SYS_PSTAT_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/sem.h> header file. */
/* #undef HAVE_SYS_SEM_H */

/* Define to 1 if you have the <sys/shm.h> header file. */
/* #undef HAVE_SYS_SHM_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/ucred.h> header file. */
/* #undef HAVE_SYS_UCRED_H */

/* Define to 1 if you have the <sys/un.h> header file. */
/* #undef HAVE_SYS_UN_H */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if your `struct tm' has `tm_zone'. Deprecated, use
   `HAVE_STRUCT_TM_TM_ZONE' instead. */
/* #undef HAVE_TM_ZONE */

/* Define to 1 if your compiler understands `typeof' or something similar. */
/* #undef HAVE_TYPEOF */

/* Define to 1 if you have the external array `tzname'. */
/* #undef HAVE_TZNAME */

/* Define to 1 if the system has the type `uint64'. */
/* #undef HAVE_UINT64 */

/* Define to 1 if the system has the type `uint8'. */
/* #undef HAVE_UINT8 */

/* Define to 1 if the system has the type `union semun'. */
/* #undef HAVE_UNION_SEMUN */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have unix sockets. */
/* #undef HAVE_UNIX_SOCKETS */

/* Define to 1 if you have the `unsetenv' function. */
/* #undef HAVE_UNSETENV */

/* Define to 1 if you have the `uselocale' function. */
/* #undef HAVE_USELOCALE */

/* Define to 1 if you have the `utime' function. */
#define HAVE_UTIME 1

/* Define to 1 if you have the `utimes' function. */
/* #undef HAVE_UTIMES */

/* Define to 1 if you have the <utime.h> header file. */
#define HAVE_UTIME_H 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define to 1 if you have the `wcstombs_l' function. */
#define HAVE_WCSTOMBS_L 1

/* Define to 1 if you have the <wctype.h> header file. */
#define HAVE_WCTYPE_H 1

/* Define to 1 if you have the <winldap.h> header file. */
/* #undef HAVE_WINLDAP_H */

/* Define to 1 if you have the `X509_get_signature_nid' function. */
#define HAVE_X509_GET_SIGNATURE_NID 1

/* Define to 1 if the assembler supports X86_64's POPCNTQ instruction. */
/* #undef HAVE_X86_64_POPCNTQ */

/* Define to 1 if the system has the type `_Bool'. */
/* #undef HAVE__BOOL */

/* Define to 1 if your compiler understands __builtin_bswap16. */
/* #undef HAVE__BUILTIN_BSWAP16 */

/* Define to 1 if your compiler understands __builtin_bswap32. */
/* #undef HAVE__BUILTIN_BSWAP32 */

/* Define to 1 if your compiler understands __builtin_bswap64. */
/* #undef HAVE__BUILTIN_BSWAP64 */

/* Define to 1 if your compiler understands __builtin_clz. */
/* #undef HAVE__BUILTIN_CLZ */

/* Define to 1 if your compiler understands __builtin_constant_p. */
/* #undef HAVE__BUILTIN_CONSTANT_P */

/* Define to 1 if your compiler understands __builtin_ctz. */
/* #undef HAVE__BUILTIN_CTZ */

/* Define to 1 if your compiler understands __builtin_$op_overflow. */
/* #undef HAVE__BUILTIN_OP_OVERFLOW */

/* Define to 1 if your compiler understands __builtin_popcount. */
/* #undef HAVE__BUILTIN_POPCOUNT */

/* Define to 1 if your compiler understands __builtin_types_compatible_p. */
/* #undef HAVE__BUILTIN_TYPES_COMPATIBLE_P */

/* Define to 1 if your compiler understands __builtin_unreachable. */
/* #undef HAVE__BUILTIN_UNREACHABLE */

/* Define to 1 if you have the `_configthreadlocale' function. */
#define HAVE__CONFIGTHREADLOCALE 1

/* Define to 1 if you have __cpuid. */
#define HAVE__CPUID 1

/* Define to 1 if you have __get_cpuid. */
#undef HAVE__GET_CPUID

/* Define to 1 if your compiler understands _Static_assert. */
/* #undef HAVE__STATIC_ASSERT */

/* Define to the appropriate printf length modifier for 64-bit ints. */
#define INT64_MODIFIER "ll"

/* Define to 1 if `locale_t' requires <xlocale.h>. */
/* #undef LOCALE_T_IN_XLOCALE */

/* Define to the location of locale files. */
/* #undef LOCALEDIR */

/* Define as the maximum alignment requirement of any C data type. */
#define MAXIMUM_ALIGNOF 8

/* Define bytes to use libc memset(). */
#define MEMSET_LOOP_LIMIT 1024

/* Define to the OpenSSL API version in use. This avoids deprecation warnings
   from newer OpenSSL versions. */
#define OPENSSL_API_COMPAT 0x00908000L

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "pgsql-bugs@lists.postgresql.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "PostgreSQL"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "PostgreSQL 12.20"

/* Define to the version of this package. */
#define PACKAGE_VERSION "12.20"

/* Define to the name of a signed 128-bit integer type. */
#undef PG_INT128_TYPE

/* Define to the name of a signed 64-bit integer type. */
#define PG_INT64_TYPE long long int

/* PostgreSQL version as a string */
#define PG_VERSION "12.20"

/* PostgreSQL version as a number */
#define PG_VERSION_NUM 120020

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "postgresql"

/* Define to the name of the default PostgreSQL service principal in Kerberos.
   (--with-krb-srvnam=NAME) */
#define PG_KRB_SRVNAM "postgres"

/* A string containing the version number, platform, and C compiler */
#define PG_VERSION_STR "PostgreSQL 12.20, compiled by Visual C++ build " CppAsString2(_MSC_VER) ", 64-bit"

/* The size of `bool', as computed by sizeof. */
#define SIZEOF_BOOL 1

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `size_t', as computed by sizeof. */
#ifndef _WIN64
#define SIZEOF_SIZE_T 4
#else
#define SIZEOF_SIZE_T 8
#endif

/* The size of `void *', as computed by sizeof. */
#ifndef _WIN64
#define SIZEOF_VOID_P 4
#else
#define SIZEOF_VOID_P 8
#endif

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r() returns int. */
/* #undef STRERROR_R_INT */

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* Define to 1 to build with assertion checks. (--enable-cassert) */
/* #undef USE_ASSERT_CHECKING */

/* Define to 1 to build with Bonjour support. (--with-bonjour) */
/* #undef USE_BONJOUR */

/* Define to 1 to build with BSD Authentication support. (--with-bsd-auth) */
/* #undef USE_BSD_AUTH */

/* Define to use /dev/urandom for random number generation */
/* #undef USE_DEV_URANDOM */

/* Define to 1 to build with LDAP support. (--with-ldap) */
/* #undef USE_LDAP */

/* Define to 1 to build with LLVM based JIT support. (--with-llvm) */
/* #undef USE_LLVM */

/* Define to select named POSIX semaphores. */
/* #undef USE_NAMED_POSIX_SEMAPHORES */

/* Define to build with OpenSSL support. (--with-openssl) */
/* #undef USE_OPENSSL */

/* Define to use OpenSSL for random number generation */
/* #undef USE_OPENSSL_RANDOM */

/* Define to 1 to build with PAM support. (--with-pam) */
/* #undef USE_PAM */

/* Define to 1 to use software CRC-32C implementation (slicing-by-8). */
#if (_MSC_VER < 1500)
#define USE_SLICING_BY_8_CRC32C 1
#endif

/* Define to 1 use Intel SSE 4.2 CRC instructions. */
/* #undef USE_SSE42_CRC32C */

/* Define to 1 to use Intel SSE 4.2 CRC instructions with a runtime check. */
#if (_MSC_VER >= 1500)
#define USE_SSE42_CRC32C_WITH_RUNTIME_CHECK
#endif

/* Define to select SysV-style semaphores. */
/* #undef USE_SYSV_SEMAPHORES */

/* Define to select SysV-style shared memory. */
#define USE_SYSV_SHARED_MEMORY 1

/* Define to select unnamed POSIX semaphores. */
/* #undef USE_UNNAMED_POSIX_SEMAPHORES */

/* Define to use native Windows API for random number generation */
#define USE_WIN32_RANDOM 1

/* Define to select Win32-style semaphores. */
#define USE_WIN32_SEMAPHORES 1

/* Define to 1 if `wcstombs_l' requires <xlocale.h>. */
/* #undef WCSTOMBS_L_IN_XLOCALE */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
/* #undef _LARGEFILE_SOURCE */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#define inline __inline
#endif

/* Define to keyword to use for C99 restrict support, or to nothing if this is
   not supported */
/* Works for C and C++ in Visual Studio 2008 and upwards */
#if (_MSC_VER >= 1500)
#define pg_restrict __restrict
#else
#define pg_restrict
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
/* not defined, because it'd conflict with __declspec(restrict) */

/* Define to empty if the C compiler does not understand signed types. */
/* #undef signed */

/* Define to how the compiler spells `typeof'. */
/* #undef typeof */
#define PG_MAJORVERSION "12"
/* defines added by config steps */
#ifndef IGNORE_CONFIGURED_SETTINGS
#define USE_LDAP 1
#define HAVE_LIBZ 1
#define BLCKSZ 8192
#define RELSEG_SIZE 131072
#define XLOG_BLCKSZ 8192
#define USE_FLOAT4_BYVAL 1
#define FLOAT4PASSBYVAL true
#define USE_FLOAT8_BYVAL 1
#define FLOAT8PASSBYVAL true
#define ENABLE_GSS 1
#define USE_OPENSSL 1
#define OPENSSL_API_COMPAT 0x00908000L
#define HAVE_X509_GET_SIGNATURE_INFO 1
#define HAVE_SSL_CTX_SET_NUM_TICKETS 1
#define HAVE_ASN1_STRING_GET0_DATA 1
#define HAVE_BIO_METH_NEW 1
#define HAVE_OPENSSL_INIT_SSL 1
#define VAL_CONFIGURE "--enable-thread-safety --with-ldap --with-openssl --with-gssapi"
#endif /* IGNORE_CONFIGURED_SETTINGS */
