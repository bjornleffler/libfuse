/*
 * Static libfuse_config.h for Bazel builds.
 *
 * This replaces the Meson-generated public config header.
 * It is installed alongside the public fuse headers.
 */

#ifndef LIBFUSE_CONFIG_H
#define LIBFUSE_CONFIG_H

#define FUSE_MAJOR_VERSION 3
#define FUSE_MINOR_VERSION 19
#define FUSE_HOTFIX_VERSION 0
#define FUSE_RC_VERSION "rc0"

#define LIBFUSE_BUILT_WITH_VERSIONED_SYMBOLS 1

#endif /* LIBFUSE_CONFIG_H */
