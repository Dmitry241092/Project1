#include <iostream>
#include <string>

int main()
{
	std::string first = "Hello", second = " World";
	std::string final = first + second;
	std::cout << final << "\n";
	std::cout << final.length() << "\n";
	std::string::size_type pos = final.find("Hello World");
	first = final.substr(0);
	second = final.substr(5);
	std::cout << first[0] << "\n";
	std::cout << second[5];
}