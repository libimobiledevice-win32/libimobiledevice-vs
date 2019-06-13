#pragma once

#define SSIZE_T ssize_t

#define PACKAGE_URL "https://github.com/libimobiledevice-win32/libimobiledevice-vs/"

#define S_IFIFO _S_IFIFO
#define S_IFBLK 0x3000

#ifndef S_ISDIR
#define S_ISDIR(mode)  (((mode)& S_IFMT) == S_IFDIR)
#endif

#ifndef S_ISREG
#define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#endif