CC				= gcc 
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.
SERVER_NAME 	= server
CLIENT_NAME		= client 
SERVER_SRCS		= server.c utils_server.c utils_server2.c
CLIENT_SRCS		= client.c utils_client.c
SERVER_OBJS 	= $(SERVER_SRCS:.c=.o)
CLIENT_OBJS		= $(CLIENT_SRCS:.c=.o)

OBJS 			=   $(SERVER_OBJS) $(CLIENT_OBJS)

all:				$(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME):		$(OBJS)
					$(CC) -g3 -o $(SERVER_NAME) $(SERVER_SRCS) $(CFLAGS) 

$(CLIENT_NAME):		$(OBJS) 
					$(CC) -o $(CLIENT_NAME) $(CLIENT_SRCS) $(CFLAGS)  

clean:
				$(RM) $(SERVER_OBJS) $(CLIENT_OBJS)
				 
fclean:	 		clean
				$(RM) $(SERVER_NAME) $(CLIENT_NAME)
	
re:				fclean all

.PHONY:			all clean fclean re