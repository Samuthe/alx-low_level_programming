#include "main.h"
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: path of the file
 * @text_content: content to append at end of file
 * Return: 1 on Success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
int size = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd < 0)
return (-1);

if (text_content != NULL)
{

size = strlen(text_content);
fd = write(fd, text_content, size);
if (fd < 0)

return (-1);
}

return (1);
}
