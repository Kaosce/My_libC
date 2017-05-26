/*
** get_next_line.c for get_next_line in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri May 26 22:42:13 2017 Tiphaine LAURENT
** Last update Sat May 27 00:25:22 2017 Tiphaine LAURENT
*/

#include <unistd.h>
#include <stdlib.h>

#include "get_next_line.h"

char			*get_next_line(const int fd)
{
  static t_gnl		gnl;

  if ((gnl.len == 0 && (gnl.read = read(fd, gnl.buff, READ_SIZE)) < 1)
      || (gnl.len_line == 0 && (gnl.line = malloc(SIZE_MALLOC)) == NULL))
    return (NULL);
  while (gnl.len != gnl.read)
    {
      if (gnl.buff[gnl.len] == RETURN || gnl.buff[gnl.len] == ENDLINE)
	{
	  gnl.len += 1;
	  gnl.line[gnl.len_line] = 0;
	  gnl.len_line = 0;
	  return (gnl.line);
	}
      gnl.line[gnl.len_line] = gnl.buff[gnl.len];
      gnl.len_line += 1;
      gnl.len += 1;
    }
  gnl.len = 0;
  get_next_line(fd);
  if (gnl.len_line == 0 && gnl.read == 0)
    return (NULL);
  return (gnl.line);
}
