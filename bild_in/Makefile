NAME = bild

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = echo.c\
	   pwd.c\
	   env.c\
	   cd.c\
	   exit.c\
	   unset.c\
	   export.c\
	   error.c\
	   main.c \
	   utils.c

$(NAME)	: 
	$(CC) $(CFLAG) $(SRCS) -o $@

fclean :
	rm -f $(NAME)

re :
	$(MAKE) fclean
	$(MAKE) $(NAME)