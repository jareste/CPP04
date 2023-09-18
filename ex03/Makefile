# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jareste- <jareste-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/17 22:04:14 by jareste-          #+#    #+#              #
#    Updated: 2023/09/18 04:40:19 by jareste-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Polymorphism

SRCS = main.cpp AMateria.cpp Ice.cpp

HEADER = AMateria.hpp Ice.hpp

CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

%.o: %.cpp Makefile ${HEADER}
		@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.cpp=.o}

all:
		@$(MAKE) ${NAME} --no-print-directory

${NAME}:: ${OBJS}
	@${CC} $(CFLAGS) $(OBJS) -o ${NAME}
	@echo "EVERYTHING DONE✌️   "


clean:
			@${RM} ${OBJS}
			@echo "OBJECTS REMOVED😭   "

fclean: clean
			@${RM} ${OBJS} ${NAME}
			@echo "EVERYTHING REMOVED😭 "

re:
			@$(MAKE) fclean --no-print-directory
			@$(MAKE) all --no-print-directory

.PHONY: all clean fclean re


