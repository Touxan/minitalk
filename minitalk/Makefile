NAME	= minitalk

SERVER	= server.c
CLIENT	= client.c

OBJS	= client.o server.o

LIBFT	= libft/libft.a

HEADER	= minitalk.h

all:	$(NAME)

$(NAME):
	make -C libft
	gcc -Wall -Wextra -Werror $(SERVER) $(LIBFT) -o server
	gcc -Wall -Wextra -Werror $(CLIENT) $(LIBFT) -o client

clean:
	make clean -C libft
	rm -f $(OBJS)

fclean:	 clean
	make fclean -C libft
	rm -f server client

re:	fclean all

.PHONY:	all clean fclean re