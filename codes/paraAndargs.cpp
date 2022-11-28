#include <iostream>

int getValueFromUser()
{
	std::cout << "Enter an integer here: ";
	int input{};
	std::cin >> input;

	return input;
}

void printDouble(int num) // This function now has an integer parameter
{
	std::cout << num << " doubled is: " << num * 2 << '\n'; //*
}

int main()
{
	int num{getValueFromUser()};

	printDouble(num);

	return 0;
}

// example 1
// this function returns an int but takes in 2 numbers(ints in this case) to add up
int add(int x, int y)
{
	return x + y;
}

int main()
{
	// here we use the function and store the return value into our variable “number” after it runs through its code, in this case just adding the numbers.
	int number = add(19, 1);
	std::cout << number << std::endl;
}
