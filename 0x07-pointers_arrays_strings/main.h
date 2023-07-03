#ifndef FILE_MAIN
#define FILE_MAIN

int_putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsighed int n);
char *_strchr(char *s, char c);
unsighed int_strspn(char *s, char *accept);
char *_strpbrk(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
