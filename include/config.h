/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to the number of bits in type 'ptrdiff_t'. */
/* #undef BITSIZEOF_PTRDIFF_T */

/* Define to the number of bits in type 'sig_atomic_t'. */
/* #undef BITSIZEOF_SIG_ATOMIC_T */

/* Define to the number of bits in type 'size_t'. */
/* #undef BITSIZEOF_SIZE_T */

/* Define to the number of bits in type 'wchar_t'. */
/* #undef BITSIZEOF_WCHAR_T */

/* Define to the number of bits in type 'wint_t'. */
/* #undef BITSIZEOF_WINT_T */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define as the bit index in the word where to find bit 0 of the exponent of
   'double'. */
#define DBL_EXPBIT0_BIT 20

/* Define as the word index where to find the exponent of 'double'. */
#define DBL_EXPBIT0_WORD 1

/* Define to 1 if // is a file system root distinct from /. */
/* #undef DOUBLE_SLASH_IS_DISTINCT_ROOT */

/* Define this to 1 if F_DUPFD behavior does not match POSIX */
/* #undef FCNTL_DUPFD_BUGGY */

/* Define if gettimeofday clobbers the localtime buffer. */
/* #undef GETTIMEOFDAY_CLOBBERS_LOCALTIME */

/* Define this to 'void' or 'struct timezone' to match the system's
   declaration of the second argument to gettimeofday. */
#define GETTIMEOFDAY_TIMEZONE void

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module fscanf shall be considered present. */
#define GNULIB_FSCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module lock shall be considered present. */
#define GNULIB_LOCK 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module malloc-gnu shall be considered present. */
#define GNULIB_MALLOC_GNU 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module msvc-nothrow shall be considered present. */
#define GNULIB_MSVC_NOTHROW 1

/* Define to 1 if printf and friends should be labeled with attribute
   "__gnu_printf__" instead of "__printf__" */
/* #undef GNULIB_PRINTF_ATTRIBUTE_FLAVOR_GNU */

/* Define to 1 to add extern declaration of program_invocation_name to argp.h
   */
#undef GNULIB_PROGRAM_INVOCATION_NAME

/* Define to 1 to add extern declaration of program_invocation_short_name to
   argp.h */
#undef GNULIB_PROGRAM_INVOCATION_SHORT_NAME

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module scanf shall be considered present. */
#define GNULIB_SCANF 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror shall be considered present. */
#define GNULIB_STRERROR 1

/* Define to a C preprocessor expression that evaluates to 1 or 0, depending
   whether the gnulib module strerror_r-posix shall be considered present. */
#define GNULIB_STRERROR_R_POSIX 1

/* Define to 1 when the gnulib module accept should be tested. */
#define GNULIB_TEST_ACCEPT 1

/* Define to 1 when the gnulib module bind should be tested. */
#define GNULIB_TEST_BIND 1

/* Define to 1 when the gnulib module cloexec should be tested. */
#define GNULIB_TEST_CLOEXEC 1

/* Define to 1 when the gnulib module close should be tested. */
#define GNULIB_TEST_CLOSE 1

/* Define to 1 when the gnulib module connect should be tested. */
#define GNULIB_TEST_CONNECT 1

/* Define to 1 when the gnulib module dup2 should be tested. */
#define GNULIB_TEST_DUP2 1

/* Define to 1 when the gnulib module environ should be tested. */
#define GNULIB_TEST_ENVIRON 1

/* Define to 1 when the gnulib module fcntl should be tested. */
#define GNULIB_TEST_FCNTL 1

/* Define to 1 when the gnulib module fdopen should be tested. */
#define GNULIB_TEST_FDOPEN 1

/* Define to 1 when the gnulib module fstat should be tested. */
#define GNULIB_TEST_FSTAT 1

/* Define to 1 when the gnulib module ftruncate should be tested. */
#define GNULIB_TEST_FTRUNCATE 1

/* Define to 1 when the gnulib module getcwd should be tested. */
#define GNULIB_TEST_GETCWD 1

/* Define to 1 when the gnulib module getdtablesize should be tested. */
#define GNULIB_TEST_GETDTABLESIZE 1

/* Define to 1 when the gnulib module getopt-posix should be tested. */
#define GNULIB_TEST_GETOPT_POSIX 1

/* Define to 1 when the gnulib module getpagesize should be tested. */
#define GNULIB_TEST_GETPAGESIZE 1

/* Define to 1 when the gnulib module gettimeofday should be tested. */
#define GNULIB_TEST_GETTIMEOFDAY 1

/* Define to 1 when the gnulib module ioctl should be tested. */
#define GNULIB_TEST_IOCTL 1

/* Define to 1 when the gnulib module listen should be tested. */
#define GNULIB_TEST_LISTEN 1

/* Define to 1 when the gnulib module lstat should be tested. */
#define GNULIB_TEST_LSTAT 1

/* Define to 1 when the gnulib module malloc-posix should be tested. */
#define GNULIB_TEST_MALLOC_POSIX 1

/* Define to 1 when the gnulib module memchr should be tested. */
#define GNULIB_TEST_MEMCHR 1

/* Define to 1 when the gnulib module mempcpy should be tested. */
#define GNULIB_TEST_MEMPCPY 1

/* Define to 1 when the gnulib module nanosleep should be tested. */
#define GNULIB_TEST_NANOSLEEP 1

/* Define to 1 when the gnulib module open should be tested. */
#define GNULIB_TEST_OPEN 1

/* Define to 1 when the gnulib module perror should be tested. */
#define GNULIB_TEST_PERROR 1

/* Define to 1 when the gnulib module pipe should be tested. */
#define GNULIB_TEST_PIPE 1

/* Define to 1 when the gnulib module pthread_sigmask should be tested. */
#define GNULIB_TEST_PTHREAD_SIGMASK 1

/* Define to 1 when the gnulib module pthread-thread should be tested. */
#define GNULIB_TEST_PTHREAD_THREAD 1

/* Define to 1 when the gnulib module putenv should be tested. */
#define GNULIB_TEST_PUTENV 1

/* Define to 1 when the gnulib module raise should be tested. */
#define GNULIB_TEST_RAISE 1

/* Define to 1 when the gnulib module rawmemchr should be tested. */
#define GNULIB_TEST_RAWMEMCHR 1

/* Define to 1 when the gnulib module select should be tested. */
#define GNULIB_TEST_SELECT 1

/* Define to 1 when the gnulib module setenv should be tested. */
#define GNULIB_TEST_SETENV 1

/* Define to 1 when the gnulib module setsockopt should be tested. */
#define GNULIB_TEST_SETSOCKOPT 1

/* Define to 1 when the gnulib module sigaction should be tested. */
#define GNULIB_TEST_SIGACTION 1

/* Define to 1 when the gnulib module sigprocmask should be tested. */
#define GNULIB_TEST_SIGPROCMASK 1

/* Define to 1 when the gnulib module sleep should be tested. */
#define GNULIB_TEST_SLEEP 1

/* Define to 1 when the gnulib module socket should be tested. */
#define GNULIB_TEST_SOCKET 1

/* Define to 1 when the gnulib module stat should be tested. */
#define GNULIB_TEST_STAT 1

/* Define to 1 when the gnulib module strchrnul should be tested. */
#define GNULIB_TEST_STRCHRNUL 1

/* Define to 1 when the gnulib module strerror should be tested. */
#define GNULIB_TEST_STRERROR 1

/* Define to 1 when the gnulib module strerror_r should be tested. */
#define GNULIB_TEST_STRERROR_R 1

/* Define to 1 when the gnulib module strndup should be tested. */
#define GNULIB_TEST_STRNDUP 1

/* Define to 1 when the gnulib module strnlen should be tested. */
#define GNULIB_TEST_STRNLEN 1

/* Define to 1 when the gnulib module symlink should be tested. */
#define GNULIB_TEST_SYMLINK 1

/* Define to 1 when the gnulib module unsetenv should be tested. */
#define GNULIB_TEST_UNSETENV 1

/* Define to 1 when the gnulib module usleep should be tested. */
#define GNULIB_TEST_USLEEP 1

/* Define to 1 when the gnulib module vsnprintf should be tested. */
#define GNULIB_TEST_VSNPRINTF 1

/* Define to 1 if you have 'alloca' after including <alloca.h>, a header that
   may be supplied by this distribution. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <arpa/inet.h> header file. */
#define HAVE_ARPA_INET_H 1

/* Define to 1 if you have the <bp-sym.h> header file. */
/* #undef HAVE_BP_SYM_H */

/* Define to 1 if nanosleep mishandles large arguments. */
#define HAVE_BUG_BIG_NANOSLEEP 1

/* Define to 1 if you have the `catgets' function. */
#define HAVE_CATGETS 1

/* Define to 1 if you have the `chsize' function. */
/* #undef HAVE_CHSIZE */

/* Define to 1 if you have the <crtdefs.h> header file. */
/* #undef HAVE_CRTDEFS_H */

/* Define to 1 if you have the declaration of `alarm', and to 0 if you don't.
   */
#define HAVE_DECL_ALARM 1

/* Define to 1 if you have the declaration of `clearerr_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_CLEARERR_UNLOCKED 1

/* Define to 1 if you have the declaration of `feof_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_FEOF_UNLOCKED 1

/* Define to 1 if you have the declaration of `ferror_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FERROR_UNLOCKED 1

/* Define to 1 if you have the declaration of `fflush_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FFLUSH_UNLOCKED 1

/* Define to 1 if you have the declaration of `fgets_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FGETS_UNLOCKED 1

/* Define to 1 if you have the declaration of `fputc_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `fputs_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FPUTS_UNLOCKED 1

/* Define to 1 if you have the declaration of `fread_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FREAD_UNLOCKED 1

/* Define to 1 if you have the declaration of `fwrite_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_FWRITE_UNLOCKED 1

/* Define to 1 if you have the declaration of `getchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_GETCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of `getc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_GETC_UNLOCKED 1

/* Define to 1 if you have the declaration of `getdtablesize', and to 0 if you
   don't. */
#define HAVE_DECL_GETDTABLESIZE 1

/* Define to 1 if you have the declaration of `inet_pton', and to 0 if you
   don't. */
#define HAVE_DECL_INET_PTON 1

/* Define to 1 if you have the declaration of `program_invocation_name', and
   to 0 if you don't. */
#undef HAVE_DECL_PROGRAM_INVOCATION_NAME

/* Define to 1 if you have the declaration of `program_invocation_short_name',
   and to 0 if you don't. */
#undef HAVE_DECL_PROGRAM_INVOCATION_SHORT_NAME

/* Define to 1 if you have the declaration of `putchar_unlocked', and to 0 if
   you don't. */
#define HAVE_DECL_PUTCHAR_UNLOCKED 1

/* Define to 1 if you have the declaration of `putc_unlocked', and to 0 if you
   don't. */
#define HAVE_DECL_PUTC_UNLOCKED 1

/* Define to 1 if you have the declaration of `setenv', and to 0 if you don't.
   */
#define HAVE_DECL_SETENV 1

/* Define to 1 if you have the declaration of `sleep', and to 0 if you don't.
   */
#define HAVE_DECL_SLEEP 1

/* Define to 1 if you have the declaration of `strerror_r', and to 0 if you
   don't. */
#define HAVE_DECL_STRERROR_R 1

/* Define to 1 if you have the declaration of `strncasecmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRNCASECMP 1

/* Define to 1 if you have the declaration of `strndup', and to 0 if you
   don't. */
#define HAVE_DECL_STRNDUP 1

/* Define to 1 if you have the declaration of `strnlen', and to 0 if you
   don't. */
#define HAVE_DECL_STRNLEN 1

/* Define to 1 if you have the declaration of `unsetenv', and to 0 if you
   don't. */
#define HAVE_DECL_UNSETENV 1

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* Define to 1 if you have the declaration of `_putenv', and to 0 if you
   don't. */
/* #undef HAVE_DECL__PUTENV */

/* Define to 1 if you have the declaration of `_snprintf', and to 0 if you
   don't. */
#define HAVE_DECL__SNPRINTF 0

/* Define to 1 if you have the 'dup2' function. */
#define HAVE_DUP2 1

/* Define if you have the declaration of environ. */
#define HAVE_ENVIRON_DECL 1

/* Define to 1 if you have the `fcntl' function. */
#define HAVE_FCNTL 1

/* Define to 1 if you have the <features.h> header file. */
#define HAVE_FEATURES_H 1

/* Define to 1 if you have the `flockfile' function. */
#define HAVE_FLOCKFILE 1

/* Define to 1 if you have the `ftruncate' function. */
#define HAVE_FTRUNCATE 1

/* Define to 1 if you have the `funlockfile' function. */
#define HAVE_FUNLOCKFILE 1

/* Define to 1 if you have the `getdtablesize' function. */
#define HAVE_GETDTABLESIZE 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long_only' function. */
#define HAVE_GETOPT_LONG_ONLY 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the `inet_pton' function. */
/* #undef HAVE_INET_PTON */

/* Define if you have the 'intmax_t' type in <stdint.h> or <inttypes.h>. */
#define HAVE_INTMAX_T 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if <inttypes.h> exists, doesn't clash with <sys/types.h>, and
   declares uintmax_t. */
#define HAVE_INTTYPES_H_WITH_UINTMAX 1

/* Define to 1 if you have the `ioctl' function. */
#define HAVE_IOCTL 1

/* Define to 1 if <sys/socket.h> defines AF_INET. */
#define HAVE_IPV4 1

/* Define to 1 if <sys/socket.h> defines AF_INET6. */
#define HAVE_IPV6 1

/* Define to 1 if you have the `isblank' function. */
#define HAVE_ISBLANK 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* Define to 1 if you have the <linewrap.h> header file. */
#undef HAVE_LINEWRAP_H

/* Define to 1 if the system has the type 'long long int'. */
#define HAVE_LONG_LONG_INT 1

/* Define to 1 if you have the `lstat' function. */
#define HAVE_LSTAT 1

/* Define to 1 if your system has a GNU libc compatible 'malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC_GNU 1

/* Define if the 'malloc' function is POSIX compliant. */
#define HAVE_MALLOC_POSIX 1

/* Define to 1 if mmap()'s MAP_ANONYMOUS flag is available after including
   config.h and <sys/mman.h>. */
#define HAVE_MAP_ANONYMOUS 1

/* Define to 1 if you have the `mbrtowc' function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mempcpy' function. */
#define HAVE_MEMPCPY 1

/* Define to 1 if you have the `mprotect' function. */
#define HAVE_MPROTECT 1

/* Define to 1 on MSVC platforms that have the "invalid parameter handler"
   concept. */
/* #undef HAVE_MSVC_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the <netdb.h> header file. */
#define HAVE_NETDB_H 1

/* Define to 1 if you have the <netinet/in.h> header file. */
#define HAVE_NETINET_IN_H 1

/* Define to 1 if you have the <OS.h> header file. */
/* #undef HAVE_OS_H */

/* Define to 1 if you have the `pipe' function. */
#define HAVE_PIPE 1

/* Define if program_invocation_name is defined */
#define HAVE_PROGRAM_INVOCATION_NAME 1

/* Define if program_invocation_short_name is defined */
#define HAVE_PROGRAM_INVOCATION_SHORT_NAME 1

/* Define if you have the <pthread.h> header and the POSIX threads API. */
#define HAVE_PTHREAD_API 1

/* Define to 1 if you have the `pthread_atfork' function. */
#define HAVE_PTHREAD_ATFORK 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define if the <pthread.h> defines PTHREAD_MUTEX_RECURSIVE. */
#define HAVE_PTHREAD_MUTEX_RECURSIVE 1

/* Define if the POSIX multithreading library has read/write locks. */
#define HAVE_PTHREAD_RWLOCK 1

/* Define if the 'pthread_rwlock_rdlock' function prefers a writer to a
   reader. */
/* #undef HAVE_PTHREAD_RWLOCK_RDLOCK_PREFER_WRITER */

/* Define to 1 if the pthread_sigmask function can be used (despite bugs). */
/* #undef HAVE_PTHREAD_SIGMASK */

/* Define to 1 if the system has the type `pthread_spinlock_t'. */
#define HAVE_PTHREAD_SPINLOCK_T 1

/* Define to 1 if the system has the type `pthread_t'. */
#define HAVE_PTHREAD_T 1

/* Define to 1 if you have the `raise' function. */
#define HAVE_RAISE 1

/* Define to 1 if you have the `rawmemchr' function. */
#define HAVE_RAWMEMCHR 1

/* Define to 1 if the system has the type `sa_family_t'. */
#define HAVE_SA_FAMILY_T 1

/* Define to 1 if you have the <sched.h> header file. */
#define HAVE_SCHED_H 1

/* Define to 1 if you have the <search.h> header file. */
#define HAVE_SEARCH_H 1

/* Define to 1 if you have the `setdtablesize' function. */
/* #undef HAVE_SETDTABLESIZE */

/* Define to 1 if you have the `setenv' function. */
#define HAVE_SETENV 1

/* Define to 1 if you have the `shutdown' function. */
#define HAVE_SHUTDOWN 1

/* Define to 1 if you have the `sigaction' function. */
#define HAVE_SIGACTION 1

/* Define to 1 if you have the `sigaltstack' function. */
#define HAVE_SIGALTSTACK 1

/* Define to 1 if the system has the type `siginfo_t'. */
/* #undef HAVE_SIGINFO_T */

/* Define to 1 if you have the `siginterrupt' function. */
#define HAVE_SIGINTERRUPT 1

/* Define to 1 if 'sig_atomic_t' is a signed integer type. */
/* #undef HAVE_SIGNED_SIG_ATOMIC_T */

/* Define to 1 if 'wchar_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WCHAR_T */

/* Define to 1 if 'wint_t' is a signed integer type. */
/* #undef HAVE_SIGNED_WINT_T */

/* Define to 1 if the system has the type `sigset_t'. */
#define HAVE_SIGSET_T 1

/* Define to 1 if you have the `sleep' function. */
#define HAVE_SLEEP 1

/* Define to 1 if you have the `snprintf' function. */
#define HAVE_SNPRINTF 1

/* Define if the return value of the snprintf function is the number of of
   bytes (excluding the terminating NUL) that would have been produced if the
   buffer had been large enough. */
#define HAVE_SNPRINTF_RETVAL_C99 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if <stdint.h> exists, doesn't clash with <sys/types.h>, and declares
   uintmax_t. */
#define HAVE_STDINT_H_WITH_UINTMAX 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasecmp' function. */
#define HAVE_STRCASECMP 1

/* Define to 1 if you have the `strchrnul' function. */
#define HAVE_STRCHRNUL 1

/* Define to 1 if you have the `strerror_r' function. */
#define HAVE_STRERROR_R 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strncasecmp' function. */
#define HAVE_STRNCASECMP 1

/* Define to 1 if you have the `strndup' function. */
#define HAVE_STRNDUP 1

/* Define to 1 if you have the `strnlen' function. */
#define HAVE_STRNLEN 1

/* Define to 1 if `sa_sigaction' is a member of `struct sigaction'. */
#define HAVE_STRUCT_SIGACTION_SA_SIGACTION 1

/* Define to 1 if the system has the type `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE 1

/* Define to 1 if `ss_family' is a member of `struct sockaddr_storage'. */
#define HAVE_STRUCT_SOCKADDR_STORAGE_SS_FAMILY 1

/* Define to 1 if `st_atimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMENSEC */

/* Define to 1 if `st_atimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIMESPEC_TV_NSEC */

/* Define to 1 if `st_atim.st__tim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_ATIM_ST__TIM_TV_NSEC */

/* Define to 1 if `st_atim.tv_nsec' is a member of `struct stat'. */
#define HAVE_STRUCT_STAT_ST_ATIM_TV_NSEC 1

/* Define to 1 if `st_birthtimensec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMENSEC */

/* Define to 1 if `st_birthtimespec.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIMESPEC_TV_NSEC */

/* Define to 1 if `st_birthtim.tv_nsec' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BIRTHTIM_TV_NSEC */

/* Define to 1 if you have the `symlink' function. */
#define HAVE_SYMLINK 1

/* Define to 1 if you have the <sysexits.h> header file. */
#define HAVE_SYSEXITS_H 1

/* Define to 1 if you have the <sys/bitypes.h> header file. */
/* #undef HAVE_SYS_BITYPES_H */

/* Define to 1 if you have the <sys/cdefs.h> header file. */
#define HAVE_SYS_CDEFS_H 1

/* Define to 1 if you have the <sys/inttypes.h> header file. */
/* #undef HAVE_SYS_INTTYPES_H */

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/select.h> header file. */
#define HAVE_SYS_SELECT_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#define HAVE_SYS_SOCKET_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/uio.h> header file. */
#define HAVE_SYS_UIO_H 1

/* Define to 1 if you have the `thrd_create' function. */
/* #undef HAVE_THRD_CREATE */

/* Define to 1 if you have the <threads.h> header file. */
#define HAVE_THREADS_H 1

/* Define to 1 if you have the `tsearch' function. */
#define HAVE_TSEARCH 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `unsetenv' function. */
#define HAVE_UNSETENV 1

/* Define to 1 if the system has the type 'unsigned long long int'. */
#define HAVE_UNSIGNED_LONG_LONG_INT 1

/* Define to 1 if you have the `usleep' function. */
#define HAVE_USLEEP 1

/* Define to 1 if you have the `vasnprintf' function. */
/* #undef HAVE_VASNPRINTF */

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* Define to 1 if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the 'wchar_t' type. */
#define HAVE_WCHAR_T 1

/* Define to 1 if you have the `wcrtomb' function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define to 1 if you have the `wcsnlen' function. */
#define HAVE_WCSNLEN 1

/* Define to 1 if the compiler and linker support weak declarations of
   symbols. */
#define HAVE_WEAK_SYMBOLS 1

/* Define to 1 if you have the <winsock2.h> header file. */
/* #undef HAVE_WINSOCK2_H */

/* Define if you have the 'wint_t' type. */
#define HAVE_WINT_T 1

/* Define to 1 if O_NOATIME works. */
#define HAVE_WORKING_O_NOATIME 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
/* #undef HAVE_WS2TCPIP_H */

/* Define to 1 if the system has the type `_Bool'. */
#define HAVE__BOOL 1

/* Define to 1 if you have the `_set_invalid_parameter_handler' function. */
/* #undef HAVE__SET_INVALID_PARAMETER_HANDLER */

/* Define to 1 if you have the `__xpg_strerror_r' function. */
#define HAVE___XPG_STRERROR_R 1

/* Define to 1 if 'lstat' dereferences a symlink specified with a trailing
   slash. */
#define LSTAT_FOLLOWS_SLASHED_SYMLINK 1

/* If malloc(0) is != NULL, define this to 1. Otherwise define this to 0. */
#define MALLOC_0_IS_NONNULL 1

/* Define to a substitute value for mmap()'s MAP_ANONYMOUS flag. */
/* #undef MAP_ANONYMOUS */

/* Use GNU style printf and scanf.  */
#ifndef __USE_MINGW_ANSI_STDIO
# define __USE_MINGW_ANSI_STDIO 1
#endif


/* Define to 1 if open() fails to recognize a trailing slash. */
/* #undef OPEN_TRAILING_SLASH_BUG */

/* Name of package */
#define PACKAGE "dummy"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "dummy"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dummy 0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dummy"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0"

/* Define if <inttypes.h> exists and defines unusable PRI* macros. */
/* #undef PRI_MACROS_BROKEN */

/* Define to the type that is the result of default argument promotions of
   type mode_t. */
#define PROMOTED_MODE_T mode_t

/* Define if pthread_create is an inline function. */
/* #undef PTHREAD_CREATE_IS_INLINE */

/* Define if the pthread_in_use() detection is hard. */
/* #undef PTHREAD_IN_USE_DETECTION_HARD */

/* Define to 1 if pthread_sigmask(), when it fails, returns -1 and sets errno.
   */
/* #undef PTHREAD_SIGMASK_FAILS_WITH_ERRNO */

/* Define to 1 if pthread_sigmask may return 0 and have no effect. */
/* #undef PTHREAD_SIGMASK_INEFFECTIVE */

/* Define to 1 if pthread_sigmask() unblocks signals incorrectly. */
/* #undef PTHREAD_SIGMASK_UNBLOCK_BUG */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'ptrdiff_t'. */
/* #undef PTRDIFF_T_SUFFIX */

/* Define to 1 if stat needs help when passed a file name with a trailing
   slash */
/* #undef REPLACE_FUNC_STAT_FILE */

/* Define to 1 if strerror(0) does not return a message implying success. */
/* #undef REPLACE_STRERROR_0 */

/* Define if vasnprintf exists but is overridden by gnulib. */
/* #undef REPLACE_VASNPRINTF */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'sig_atomic_t'. */
/* #undef SIG_ATOMIC_T_SUFFIX */

/* Define as the maximum value of type 'size_t', if the system doesn't define
   it. */
#ifndef SIZE_MAX
/* # undef SIZE_MAX */
#endif

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'size_t'. */
/* #undef SIZE_T_SUFFIX */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if the `S_IS*' macros in <sys/stat.h> do not work properly. */
/* #undef STAT_MACROS_BROKEN */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if strerror_r returns char *. */
#define STRERROR_R_CHAR_P 1

/* Define to 1 if the type of the st_atim member of a struct stat is struct
   timespec. */
#define TYPEOF_STRUCT_STAT_ST_ATIM_IS_STRUCT_TIMESPEC 1

/* Define if the combination of the ISO C and POSIX multithreading APIs can be
   used. */
/* #undef USE_ISOC_AND_POSIX_THREADS */

/* Define if the ISO C multithreading library can be used. */
/* #undef USE_ISOC_THREADS */

/* Define if the POSIX multithreading library can be used. */
#define USE_POSIX_THREADS 1

/* Define if references to the POSIX multithreading library should be made
   weak. */
#define USE_POSIX_THREADS_WEAK 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable general extensions on macOS.  */
#ifndef _DARWIN_C_SOURCE
# define _DARWIN_C_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable NetBSD extensions on NetBSD.  */
#ifndef _NETBSD_SOURCE
# define _NETBSD_SOURCE 1
#endif
/* Enable OpenBSD extensions on NetBSD.  */
#ifndef _OPENBSD_SOURCE
# define _OPENBSD_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-5:2014.  */
#ifndef __STDC_WANT_IEC_60559_ATTRIBS_EXT__
# define __STDC_WANT_IEC_60559_ATTRIBS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-1:2014.  */
#ifndef __STDC_WANT_IEC_60559_BFP_EXT__
# define __STDC_WANT_IEC_60559_BFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-2:2015.  */
#ifndef __STDC_WANT_IEC_60559_DFP_EXT__
# define __STDC_WANT_IEC_60559_DFP_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-4:2015.  */
#ifndef __STDC_WANT_IEC_60559_FUNCS_EXT__
# define __STDC_WANT_IEC_60559_FUNCS_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TS 18661-3:2015.  */
#ifndef __STDC_WANT_IEC_60559_TYPES_EXT__
# define __STDC_WANT_IEC_60559_TYPES_EXT__ 1
#endif
/* Enable extensions specified by ISO/IEC TR 24731-2:2010.  */
#ifndef __STDC_WANT_LIB_EXT2__
# define __STDC_WANT_LIB_EXT2__ 1
#endif
/* Enable extensions specified by ISO/IEC 24747:2009.  */
#ifndef __STDC_WANT_MATH_SPEC_FUNCS__
# define __STDC_WANT_MATH_SPEC_FUNCS__ 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable X/Open extensions if necessary.  HP-UX 11.11 defines
   mbstate_t only if _XOPEN_SOURCE is defined to 500, regardless of
   whether compiling with -Ae or -D_HPUX_SOURCE=1.  */
#ifndef _XOPEN_SOURCE
/* # undef _XOPEN_SOURCE */
#endif
/* Enable X/Open compliant socket functions that do not require linking
   with -lxnet on HP-UX 11.11.  */
#ifndef _HPUX_ALT_XOPEN_SOCKET_API
# define _HPUX_ALT_XOPEN_SOCKET_API 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if the native Windows multithreading API can be used. */
/* #undef USE_WINDOWS_THREADS */

/* Version number of package */
#define VERSION "0"

/* Define to 1 if unsetenv returns void instead of int. */
/* #undef VOID_UNSETENV */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wchar_t'. */
/* #undef WCHAR_T_SUFFIX */

/* Define if WSAStartup is needed. */
/* #undef WINDOWS_SOCKETS */

/* Define to l, ll, u, ul, ull, etc., as suitable for constants of type
   'wint_t'. */
/* #undef WINT_T_SUFFIX */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Enable large inode numbers on Mac OS X 10.5. */
#define _DARWIN_USE_64_BIT_INODE 1

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 1 to make NetBSD features available. MINIX 3 needs this. */
#define _NETBSD_SOURCE 1

/* The _Noreturn keyword of C11.  */
#ifndef _Noreturn
# if (defined __cplusplus \
      && ((201103 <= __cplusplus && !(__GNUC__ == 4 && __GNUC_MINOR__ == 7)) \
          || (defined _MSC_VER && 1900 <= _MSC_VER)) \
      && 0)
    /* [[noreturn]] is not practically usable, because with it the syntax
         extern _Noreturn void func (...);
       would not be valid; such a declaration would only be valid with 'extern'
       and '_Noreturn' swapped, or without the 'extern' keyword.  However, some
       AIX system header files and several gnulib header files use precisely
       this syntax with 'extern'.  */
#  define _Noreturn [[noreturn]]
# elif ((!defined __cplusplus || defined __clang__) \
        && (201112 <= (defined __STDC_VERSION__ ? __STDC_VERSION__ : 0)  \
            || 4 < __GNUC__ + (7 <= __GNUC_MINOR__)))
   /* _Noreturn works as-is.  */
# elif 2 < __GNUC__ + (8 <= __GNUC_MINOR__) || 0x5110 <= __SUNPRO_C
#  define _Noreturn __attribute__ ((__noreturn__))
# elif 1200 <= (defined _MSC_VER ? _MSC_VER : 0)
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn
# endif
#endif


/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 in order to get the POSIX compatible declarations of socket
   functions. */
/* #undef _POSIX_PII_SOCKET */

/* Define to 1 if you need to in order for 'stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* For standard stat data types on VMS. */
#define _USE_STD_STAT 1

/* Define to rpl_ if the getopt replacement functions and variables should be
   used. */
#define __GETOPT_PREFIX rpl_

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_CONSTANT_MACROS */

/* Define to 1 if the system <stdint.h> predates C++11. */
/* #undef __STDC_LIMIT_MACROS */

/* The _GL_ASYNC_SAFE marker should be attached to functions that are
   signal handlers (for signals other than SIGABRT, SIGPIPE) or can be
   invoked from such signal handlers.  Such functions have some restrictions:
     * All functions that it calls should be marked _GL_ASYNC_SAFE as well,
       or should be listed as async-signal-safe in POSIX
       <https://pubs.opengroup.org/onlinepubs/9699919799/functions/V2_chap02.html#tag_15_04>
       section 2.4.3.  Note that malloc(), sprintf(), and fwrite(), in
       particular, are NOT async-signal-safe.
     * All memory locations (variables and struct fields) that these functions
       access must be marked 'volatile'.  This holds for both read and write
       accesses.  Otherwise the compiler might optimize away stores to and
       reads from such locations that occur in the program, depending on its
       data flow analysis.  For example, when the program contains a loop
       that is intended to inspect a variable set from within a signal handler
           while (!signal_occurred)
             ;
       the compiler is allowed to transform this into an endless loop if the
       variable 'signal_occurred' is not declared 'volatile'.
   Additionally, recall that:
     * A signal handler should not modify errno (except if it is a handler
       for a fatal signal and ends by raising the same signal again, thus
       provoking the termination of the process).  If it invokes a function
       that may clobber errno, it needs to save and restore the value of
       errno.  */
#define _GL_ASYNC_SAFE


/* Please see the Gnulib manual for how to use these macros.

   Suppress extern inline with HP-UX cc, as it appears to be broken; see
   <https://lists.gnu.org/r/bug-texinfo/2013-02/msg00030.html>.

   Suppress extern inline with Sun C in standards-conformance mode, as it
   mishandles inline functions that call each other.  E.g., for 'inline void f
   (void) { } inline void g (void) { f (); }', c99 incorrectly complains
   'reference to static identifier "f" in extern inline function'.
   This bug was observed with Sun C 5.12 SunOS_i386 2011/11/16.

   Suppress extern inline (with or without __attribute__ ((__gnu_inline__)))
   on configurations that mistakenly use 'static inline' to implement
   functions or macros in standard C headers like <ctype.h>.  For example,
   if isdigit is mistakenly implemented via a static inline function,
   a program containing an extern inline function that calls isdigit
   may not work since the C standard prohibits extern inline functions
   from calling static functions (ISO C 99 section 6.7.4.(3).
   This bug is known to occur on:

     OS X 10.8 and earlier; see:
     https://lists.gnu.org/r/bug-gnulib/2012-12/msg00023.html

     DragonFly; see
     http://muscles.dragonflybsd.org/bulk/clang-master-potential/20141111_102002/logs/ah-tty-0.3.12.log

     FreeBSD; see:
     https://lists.gnu.org/r/bug-gnulib/2014-07/msg00104.html

   OS X 10.9 has a macro __header_inline indicating the bug is fixed for C and
   for clang but remains for g++; see <https://trac.macports.org/ticket/41033>.
   Assume DragonFly and FreeBSD will be similar.

   GCC 4.3 and above with -std=c99 or -std=gnu99 implements ISO C99
   inline semantics, unless -fgnu89-inline is used.  It defines a macro
   __GNUC_STDC_INLINE__ to indicate this situation or a macro
   __GNUC_GNU_INLINE__ to indicate the opposite situation.
   GCC 4.2 with -std=c99 or -std=gnu99 implements the GNU C inline
   semantics but warns, unless -fgnu89-inline is used:
     warning: C99 inline functions are not supported; using GNU89
     warning: to disable this warning use -fgnu89-inline or the gnu_inline function attribute
   It defines a macro __GNUC_GNU_INLINE__ to indicate this situation.
 */
#if (((defined __APPLE__ && defined __MACH__) \
      || defined __DragonFly__ || defined __FreeBSD__) \
     && (defined __header_inline \
         ? (defined __cplusplus && defined __GNUC_STDC_INLINE__ \
            && ! defined __clang__) \
         : ((! defined _DONT_USE_CTYPE_INLINE_ \
             && (defined __GNUC__ || defined __cplusplus)) \
            || (defined _FORTIFY_SOURCE && 0 < _FORTIFY_SOURCE \
                && defined __GNUC__ && ! defined __cplusplus))))
# define _GL_EXTERN_INLINE_STDHEADER_BUG
#endif
#if ((__GNUC__ \
      ? defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__ \
      : (199901L <= __STDC_VERSION__ \
         && !defined __HP_cc \
         && !defined __PGI \
         && !(defined __SUNPRO_C && __STDC__))) \
     && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# define _GL_INLINE inline
# define _GL_EXTERN_INLINE extern inline
# define _GL_EXTERN_INLINE_IN_USE
#elif (2 < __GNUC__ + (7 <= __GNUC_MINOR__) && !defined __STRICT_ANSI__ \
       && !defined _GL_EXTERN_INLINE_STDHEADER_BUG)
# if defined __GNUC_GNU_INLINE__ && __GNUC_GNU_INLINE__
   /* __gnu_inline__ suppresses a GCC 4.2 diagnostic.  */
#  define _GL_INLINE extern inline __attribute__ ((__gnu_inline__))
# else
#  define _GL_INLINE extern inline
# endif
# define _GL_EXTERN_INLINE extern
# define _GL_EXTERN_INLINE_IN_USE
#else
# define _GL_INLINE static _GL_UNUSED
# define _GL_EXTERN_INLINE static _GL_UNUSED
#endif

/* In GCC 4.6 (inclusive) to 5.1 (exclusive),
   suppress bogus "no previous prototype for 'FOO'"
   and "no previous declaration for 'FOO'" diagnostics,
   when FOO is an inline function in the header; see
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=54113> and
   <https://gcc.gnu.org/bugzilla/show_bug.cgi?id=63877>.  */
#if __GNUC__ == 4 && 6 <= __GNUC_MINOR__
# if defined __GNUC_STDC_INLINE__ && __GNUC_STDC_INLINE__
#  define _GL_INLINE_HEADER_CONST_PRAGMA
# else
#  define _GL_INLINE_HEADER_CONST_PRAGMA \
     _Pragma ("GCC diagnostic ignored \"-Wsuggest-attribute=const\"")
# endif
# define _GL_INLINE_HEADER_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-prototypes\"") \
    _Pragma ("GCC diagnostic ignored \"-Wmissing-declarations\"") \
    _GL_INLINE_HEADER_CONST_PRAGMA
# define _GL_INLINE_HEADER_END \
    _Pragma ("GCC diagnostic pop")
#else
# define _GL_INLINE_HEADER_BEGIN
# define _GL_INLINE_HEADER_END
#endif

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to long or long long if <stdint.h> and <inttypes.h> don't define. */
/* #undef intmax_t */

/* Work around a bug in Apple GCC 4.0.1 build 5465: In C99 mode, it supports
   the ISO C 99 semantics of 'extern inline' (unlike the GNU C semantics of
   earlier versions), but does not display it by setting __GNUC_STDC_INLINE__.
   __APPLE__ && __MACH__ test for Mac OS X.
   __APPLE_CC__ tests for the Apple compiler and its version.
   __STDC_VERSION__ tests for the C99 mode.  */
#if defined __APPLE__ && defined __MACH__ && __APPLE_CC__ >= 5465 && !defined __cplusplus && __STDC_VERSION__ >= 199901L && !defined __GNUC_STDC_INLINE__
# define __GNUC_STDC_INLINE__ 1
#endif

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to the type of st_nlink in struct stat, or a supertype. */
/* #undef nlink_t */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define as the type of the result of subtracting two pointers, if the system
   doesn't define it. */
/* #undef ptrdiff_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* type to use in place of socklen_t if not defined */
/* #undef socklen_t */

/* Define as a signed type of the same size as size_t. */
/* #undef ssize_t */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */

/* Define as a marker that can be attached to declarations that might not
    be used.  This helps to reduce warnings, such as from
    GCC -Wunused-parameter.  */
#if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__ ((__unused__))
#else
# define _GL_UNUSED
#endif
/* The name _UNUSED_PARAMETER_ is an earlier spelling, although the name
   is a misnomer outside of parameter lists.  */
#define _UNUSED_PARAMETER_ _GL_UNUSED

/* gcc supports the "unused" attribute on possibly unused labels, and
   g++ has since version 4.5.  Note to support C++ as well as C,
   _GL_UNUSED_LABEL should be used with a trailing ;  */
#if !defined __cplusplus || __GNUC__ > 4 \
    || (__GNUC__ == 4 && __GNUC_MINOR__ >= 5)
# define _GL_UNUSED_LABEL _GL_UNUSED
#else
# define _GL_UNUSED_LABEL
#endif

/* The __pure__ attribute was added in gcc 2.96.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 96)
# define _GL_ATTRIBUTE_PURE __attribute__ ((__pure__))
#else
# define _GL_ATTRIBUTE_PURE /* empty */
#endif

/* The __const__ attribute was added in gcc 2.95.  */
#if __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 95)
# define _GL_ATTRIBUTE_CONST __attribute__ ((__const__))
#else
# define _GL_ATTRIBUTE_CONST /* empty */
#endif

/* The __malloc__ attribute was added in gcc 3.  */
#if 3 <= __GNUC__
# define _GL_ATTRIBUTE_MALLOC __attribute__ ((__malloc__))
#else
# define _GL_ATTRIBUTE_MALLOC /* empty */
#endif


/* Define to an unsigned 32-bit type if <sys/types.h> lacks this type. */
/* #undef useconds_t */


#define ENABLE_NLS 0
#define _LIBC 1
