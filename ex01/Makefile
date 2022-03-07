CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	iter
FILE	=	main.cpp
HEADERS	=	iter.hpp

all: $(NAME)

$(NAME): $(FILE) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ $<

fclean:
	$(RM) $(NAME)

re: fclean all
