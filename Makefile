CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
LDLIBS 			= ./libft/libft.a
SERVER_NAME 	= server
CLIENT_NAME		= client 
SERVER_SRCS		= server.c
CLIENT_SRCS		= client.c
SERVER_OBJS 	= $(SERVER_SRCS:.c=.o)
CLIENT_OBJS		= $(CLIENT_SRCS:.c=.o)

OBJS 			=   $(SERVER_OBJS) $(CLIENT_OBJS)

all:				$(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME):		$(OBJS)

					make -C ./libft 
					cp libft/libft.a $(SERVER_NAME)
					$(CC) -o $(SERVER_NAME) $(SERVER_SRCS) $(LDLIBS) $(CFLAGS) 

$(CLIENT_NAME):		$(OBJS) 

					cp libft/libft.a $(CLIENT_NAME)
					$(CC) -o $(CLIENT_NAME) $(CLIENT_SRCS) $(LDLIBS) $(CFLAGS)  

clean:
				$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
				 
fclean:	 		clean
				make  fclean -C ./libft
				$(RM) $(SERVER_NAME) $(CLIENT_NAME)
	
re:				fclean all

.PHONY:			all clean fclean remake 