#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>


/**
 * create_file - function to create a file
 * @filename: file name
 * @text_content: content of file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
  //int empty;
  // empty = open(filename, O_CREAT | O_RDWR);
  
  if (filename == NULL)
    return (-1);
  if (text_content == NULL)
    return 1;

  int fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);
  if (fd == -1)
    {
      //printf("failed to creat a file");
    return -1;
    }
  write(fd, text_content, strlen(text_content));

  close(fd);
  return 1;
    
}
