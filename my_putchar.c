/*
** my_putchar.c for my_putchar.c in /home/lbergin/CPool_Day07
** 
** Made by louis bergin
** Login   <lbergin@epitech.net>
** 
** Started on  Tue Oct 11 14:34:43 2016 louis bergin
** Last update Thu Nov 17 00:19:18 2016 louis bergin
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
