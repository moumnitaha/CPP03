# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/27 15:58:39 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/27 18:56:12 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScavTrap
HEADER = ScavTrap.hpp

FLAGS = -Wall -Wextra -Werror
STD = -std=c++98
CC = c++

SRCS = ScavTrap.cpp ClapTrap.cpp main.cpp
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