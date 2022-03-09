CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	array
FILES	=	main.cpp
HEADERS	=	Array.hpp Array.tpp

OBJ		=	$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(FILES) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ $<

fclean:
	$(RM) $(NAME)

re: fclean all
