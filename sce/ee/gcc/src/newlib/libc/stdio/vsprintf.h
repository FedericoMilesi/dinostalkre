// STATUS: NOT STARTED

#ifndef SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VSPRINTF_H
#define SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VSPRINTF_H

int vsprintf(char *str, char *fmt, va_list ap);
int vsprintf_r(_reent *ptr, char *str, char *fmt, va_list ap);

#endif // SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VSPRINTF_H
