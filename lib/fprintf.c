#if LAB >= 5
// XXX change this to use printfmt properly,
// with no string length limitation.

#include <inc/lib.h>

int
fprintf(int fd, const char *fmt, ...)
{
	char buf[256];
	va_list ap;

	va_start(ap, fmt);
	vsnprintf(buf, sizeof buf, fmt, ap);
	va_end(ap);
	return write(fd, buf, strlen(buf));
}
#endif
