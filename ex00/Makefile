CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

NAME	=	smm
FILES	=	main.cpp
HEADERS	=	swap.hpp min.hpp max.hpp

OBJ		=	$(FILES:.cpp=.o)

TEST	=	my.txt
EXPD	=	expected.txt

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME) $(TEST)

re: fclean all

$(TEST): $(NAME)
	./$< > $@

test: $(TEST)
	diff $< $(EXPD)
