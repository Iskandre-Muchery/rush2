##
## EPITECH PROJECT, 2017
## CPoolrush2
## File description:
## Makefile
##

NAME        	=       rush2

CC              =       gcc

CFLAGS          =       -W -Wall -Wextra -Werror -I./include

RM              =       rm -f

SRCS            =	./main.c		    			\
			./estimate_and_print.c		    		\
			./print_rslt.c		    			\
			./my_print_float.c		    		\
			./my_strlen.c					\
			./my_putstr.c					\
			./my_put_nbr.c					\
			./my_putchar.c					\
			./find_an_occurence.c				\
			./find_all_occurence.c				\
			./find_frequencies.c				\
			./cmp_freq_a.c					\
			./cmp_freq_b.c					\
			./cmp_freq_c.c					\
			./cmp_freq_d.c					\
			./cmp_freq_e.c					\
			./cmp_freq_f.c					\
			./cmp_freq_g.c					\
			./cmp_freq_h.c					\
			./cmp_freq_i.c					\
			./cmp_freq_j.c					\
			./cmp_freq_k.c					\
			./cmp_freq_l.c					\
			./cmp_freq_m.c					\
			./cmp_freq_n.c					\
			./cmp_freq_o.c					\
			./cmp_freq_p.c					\
			./cmp_freq_q.c					\
			./cmp_freq_r.c					\
			./cmp_freq_s.c					\
			./cmp_freq_t.c					\
			./cmp_freq_u.c					\
			./cmp_freq_v.c					\
			./cmp_freq_w.c					\
			./cmp_freq_x.c					\
			./cmp_freq_y.c					\
			./cmp_freq_z.c



OBJS            =       $(SRCS:.c=.o)


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(CFLAGS) -o  $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
