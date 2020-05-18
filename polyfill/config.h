#pragma once

#define SSIZE_T ssize_t

#define PACKAGE_BUGREPORT "https://github.com/libimobiledevice-win32/libimobiledevice-vs/"
#define PACKAGE_URL "https://github.com/libimobiledevice-win32/libimobiledevice-vs/"
#define PACKAGE_VERSION "1.0.0"

#define S_IFIFO _S_IFIFO
#define S_IFBLK 0x3000

#ifndef S_ISDIR
#define S_ISDIR(mode)  (((mode)& S_IFMT) == S_IFDIR)
#endif

#ifndef S_ISREG
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#endif

// See https://unix.superglobalmegacorp.com/Net2/newsrc/sys/unistd.h.html
#ifndef F_OK
#define F_OK 0
#endif

#ifndef W_OK
#define W_OK 02
#endif

#ifndef X_OK
#define X_OK 0
#endif

#ifndef R_OK
#define R_OK 4
#endif

#ifndef PATH_MAX
#define PATH_MAX 260
#endif

#ifndef le16toh
#if __BYTE_ORDER == __BIG_ENDIAN
#define le16toh(x) ((((x) & 0xFF00) >> 8) | (((x) & 0x00FF) << 8))
#else
#define le16toh(x) (x)
#endif
#endif

#ifndef strcasecmp
#define strcasecmp _stricmp
#endif