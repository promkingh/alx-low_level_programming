#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
#define BUFF_SIZE 1024
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);



#endif /* MAIN_H */
