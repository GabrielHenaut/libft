# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghenaut- <ghenaut-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 14:54:52 by ghenaut-          #+#    #+#              #
#    Updated: 2022/05/26 20:56:45 by ghenaut-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: .c.o libft.a all clean fclean re

SRCS	= 	ft_memset.c \
			ft_strlen.c \
			ft_substr.c \
			ft_bzero.c \
			ft_memccpy.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_atoi.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strrchr.c \
			
BONUS	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			t_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \
			

OBJS	= ${SRCS:.c=.o}
BONUS_OBJS	= ${BONUS:.c=.o}
NAME	= libft.a


.c.o:
	@gcc -Wall -Wextra -Werror -c $< -I . -o ${<:.c=.o}

${NAME}: ${OBJS}
	@ar rc ${NAME} ${OBJS}
	@echo "${NAME} created"
	@ranlib ${NAME}
	@echo "${NAME} indexed"

all: ${NAME}
	@make clean

bonus:	${OBJS} ${BONUS_OBJS}
	@ar rc ${NAME} ${OBJS} ${BONUS_OBJS}
	@echo "${NAME} created with bonus"
	@ranlib ${NAME}
	@echo "${NAME} indexed"
	@make clean

clean:
	@rm -f ${OBJS} ${BONUS_OBJS}
	@echo "OBJ deleted"

fclean: clean
	@rm -f ${NAME}
	@echo "${NAME} deleted"

re: fclean all
