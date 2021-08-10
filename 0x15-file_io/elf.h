#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <elf.h>

void ensure_endianness(char little_e, void *data, unsigned int len);
void print_elf_header(void *h);
void print_elf_header_2(void *h);
void put_err(char *str);

#endif /* MAIN_H */

#ifndef HEADERS_H
#define HEADERS_H
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#undef HEADERS_H
#endif /* HEADERS_H */
