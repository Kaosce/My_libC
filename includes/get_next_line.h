/*
** get_next_line.h for get_next_line in /home/TiphaineLaurent/Library/V2/includes
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri May 26 22:52:51 2017 Tiphaine LAURENT
** Last update Sat May 27 00:54:14 2017 Tiphaine LAURENT
*/

#ifndef GET_NEXT_LINE_H_
# define GET_NEXT_LINE_H_

# define READ_SIZE	1024
# define SIZE_MALLOC	sizeof(char) * 1025

# define ENDLINE	'\0'
# define RETURN		'\n'

typedef struct	s_gnl
{
  int		len;
  int		len_line;
  int		read;
  char		buff[READ_SIZE];
  char		*line;
}		t_gnl;

char		*get_next_line(const int fd);

#endif /* !GET_NEXT_LINE_H_ */
