CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	smm
FILE	=	main.cpp
HEADERS	=	swap.hpp min.hpp max.hpp

TEST	=	my.txt
EXPD	=	expected.txt

all: $(NAME)

$(NAME): $(FILE) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $@ $<

fclean:
	$(RM) $(NAME) $(TEST)

re: fclean all

$(TEST): $(NAME)
	./$< > $@

test: $(TEST)
	diff $< $(EXPD)
