# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 15:58:39 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/29 17:32:42 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap
HEADER = FragTrap.hpp

FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = c++

SRCS = FragTrap.cpp ClapTrap.cpp main.cpp
OBJS = $(SRCS:%.cpp=%.o)
RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) $(STD) -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) $(STD) -c $< -o $@

clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME)
re: fclean all