/*
 * Static fuse_config.h for Bazel builds (Linux).
 *
 * This replaces the Meson-generated private config header with
 * hardcoded values for a modern Linux system.
 */

#ifndef FUSE_CONFIG_H
#define FUSE_CONFIG_H

#define PACKAGE_VERSION "3.19.0-rc0"

/* POSIX / Linux functions */
#define HAVE_FORK 1
#define HAVE_FSTATAT 1
#define HAVE_OPENAT 1
#define HAVE_READLINKAT 1
#define HAVE_PIPE2 1
#define HAVE_SPLICE 1
#define HAVE_VMSPLICE 1
#define HAVE_POSIX_FALLOCATE 1
#define HAVE_FDATASYNC 1
#define HAVE_UTIMENSAT 1
#define HAVE_COPY_FILE_RANGE 1
#define HAVE_FALLOCATE 1

/* Special function checks */
#define HAVE_PTHREAD_SETNAME_NP 1
#define HAVE_CLOSE_RANGE 1

/* Library / system functions */
#define HAVE_SETXATTR 1
#define HAVE_BACKTRACE 1
#define HAVE_STATX 1

/* Header checks */
#define HAVE_SYS_XATTR_H 1
#define HAVE_LINUX_LIMITS_H 1

/* Struct member checks */
#define HAVE_STRUCT_STAT_ST_ATIM 1

/* Features NOT enabled in this static config:
 *   HAVE_URING
 *   USDT_ENABLED
 *   HAVE_ICONV
 *   HAVE_FSPACECTL
 *   HAVE_LISTMOUNT
 *   HAVE_STRUCT_STAT_ST_ATIMESPEC
 */

#endif /* FUSE_CONFIG_H */
