#include <windows.h>

#include <string.h>
#include <assert.h>
#include <fileapi.h>

#include <stdio.h>

#ifdef WIN32
#define MAXPATHLEN 1024
#endif

/*---------------------------------------------------------------------------*/
char *dirname(char *path)
{
    static char buffer[260];
    size_t len;
    if (path == NULL) {
        strcpy(buffer, ".");
        return buffer;
    }
    len = strlen(path);
    assert(len<sizeof(buffer));
    if (len != 0 && (path[len - 1] == '/' || path[len - 1] == '\\')) {
        --len;
    }
    while (len != 0 && path[len - 1] != '/' && path[len - 1] != '\\') {
        --len;
    }
    if (len == 0) {
        strcpy(buffer, ".");
    }
    else if (len == 1) {
        if (path[0] == '/' || path[0] == '\\') {
            strcpy(buffer, "/");
        }
        else {
            strcpy(buffer, ".");
        }
    }
    else {
        memcpy(buffer, path, len - 1);
		buffer[len] = '\0';
    }
    return buffer;
}
/*---------------------------------------------------------------------------*/
char *basename(char *path)
{
    static char buffer[260];
    size_t len_start, len;
    if (path == NULL) {
        strcpy(buffer, ".");
        return buffer;
    }
    len = strlen(path);
    assert(len<sizeof(buffer));
    if (len != 0 && (path[len - 1] == '/' || path[len - 1] == '\\')) {
        if (len == 1) {
            strcpy(buffer, "/");
            return buffer;
        }
        --len;
    }
    len_start = len;
    while (len != 0 && path[len - 1] != '/' && path[len - 1] != '\\') {
        --len;
    }
    if (len == 0) {
        strcpy(buffer, ".");
    }
    else {
        memcpy(buffer, path + len, len_start - len);
    }

    return buffer;
}
/*---------------------------------------------------------------------------*/
char *realpath(const char *path, char *resolved_path)
{
    char *pszFilePart;
    if (GetFullPathNameA(path, MAXPATHLEN, resolved_path, &pszFilePart) == 0)
        return NULL;
    return resolved_path;
}
/*---------------------------------------------------------------------------*/