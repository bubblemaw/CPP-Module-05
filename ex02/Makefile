NAME = form

SRCS = main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		PresidentialPardonForm.cpp \
		RobotomyRequestForm.cpp \
		ShrubberyCreationForm.cpp \

OBJS = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

$(NAME) : $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean :
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all