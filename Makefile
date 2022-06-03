# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 17:14:20 by sylvain           #+#    #+#              #
#    Updated: 2022/06/03 11:25:26 by sylvain          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Adapted from https://spin.atomicobject.com/2016/08/26/makefile-c-projects/
NAME ?= push_swap
SRC_DIRS ?= ./src
LIBFT ?= libft

SRCS := $(shell find $(SRC_DIRS) -name '*.c')
OBJS := $(addsuffix .o,$(basename $(SRCS)))
DEPS := $(OBJS:.o=.d)

INC_DIRS := $(shell find $(SRC_DIRS) -type d)
INC_FLAGS := $(addprefix -I,$(INC_DIRS))

# TODO: Remove debug flag
CPPFLAGS ?= $(INC_FLAGS) -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME): $(OBJS)
	@make -C $(LIBFT)
	@gcc -o $(NAME) $(OBJS) -L ./libft -lft
# For some reason -lft makes everything work - can't find out why nor what this flag is

# %.c.o: %.c
# 	$(CC) $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	@make clean -C $(LIBFT)
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	@make fclean -C $(LIBFT)
	$(RM) $(NAME)

re: fclean all

.PHONY: clean

-include $(DEPS)