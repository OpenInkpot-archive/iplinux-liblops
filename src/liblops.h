#ifndef LIBLOPS_H
#define LIBLOPS_H

#include <sys/types.h>

/*
 * This function is like read(2), but it reads until eof, requested size is read
 * or error occured.
 */
ssize_t lread(int fd, void* buf, size_t count);

/*
 * This function is like write(2), but it writes until everything is written or
 * error occured.
 */
ssize_t lwrite(int fd, const void* buf, size_t count);

#endif
