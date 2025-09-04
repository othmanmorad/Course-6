#include <iostream>
using namespace std;

int main()
{
	char Name[] = "Mohammed Abu-Hadhoud";
	char SchoolName[] = "Programmeg Advices";

	printf("Dear %s , How are you ? \n\n", Name);
	printf("Welcome to %s school \n\n", SchoolName);

	char c = 'S';
	printf("Setting the width of c :%1c \n" ,c);//const
	printf("Setting the width of c :%2c \n", c);
	printf("Setting the width of c :%*c \n", 3, c);//Dinameck
	printf("Setting the width of c :%*c \n", 4, c);
	printf("Setting the width of c :%*c \n", 5, c);
}
