#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *print_all-> function prints anything.
 *@format:all arguments passed.
 *Return: void.
 */

void print_all(const char* const format, ...) {
    va_list args;
    int j;
    va_start(args, format);

    j = 0;
    while (format[j] != '\0') {
        switch (*format) {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's': {
                char* str = va_arg(args, char*);
                if (str == NULL) {
                    printf("(nil)");
                } else {
                    printf("%s", str);
                }
                break;
            }
            default:
                break;
        }
        ++j;
    }

    va_end(args);
    printf("\n");
}
