# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yoyoo <yoyoo@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/16 01:49:52 by yoyoo             #+#    #+#              #
#    Updated: 2021/09/18 16:22:37 by yoyoo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror
LIBFT			= libft.a

SRCS_DIR		= ./src
SRCS			= $(addprefix $(SRCS_DIR)/, main.c operation.c radix_sorting.c arg_check.c error.c hardcoding.c hardcoding_utils.c parsing.c operation2.c)

OBJS_DIR		= ./obj
OBJS			= $(addprefix $(OBJS_DIR)/, $(notdir $(SRCS:.c=.o)))
NAME			= push_swap

all				: $(LIBFT) $(OBJS_DIR) $(NAME)

$(OBJS_DIR)		:
	@mkdir $(OBJS_DIR)

vpath %.c $(SRCS_DIR)

$(LIBFT)		:
	@make bonus -C libft

$(OBJS_DIR)/%.o	: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME)			: $(OBJS) ./src/push_swap.h
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $@
	@printf "   \033[0;32m[push_swap build success🔳]\n\e[0m"
	
clean			:
	@make clean -C libft
	@rm -f $(OBJS)
	@printf "   \033[0;32m[execute clean🥡]\n\e[0m"

fclean			: clean
	@make fclean -C libft
	@rm -f $(NAME)
	@rm -rf $(OBJS_DIR)
	@printf "   \033[0;32m[execute fclean🚽]\n\e[0m"
