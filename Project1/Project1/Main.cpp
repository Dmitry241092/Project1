#include <iostream>
#include <string>

void func_for(bool c, int n) {
	for (int i = 0; i <= n; i++)
	{
		if (i % 2 == c)
			std::cout << i << " ";
	}
}

void foo(bool c, int n) {
	func_for(c, n);
}
int main(int argc, char* argv[])
{
    bool c; int x;
    setlocale(0, "Russian");
    std::cout << "¬ведите число:";
    std::cin >> x;
    std::cout << "¬ведите '1' дл€ отображени€ нечетных чисел, либо - '0' дл€ отображени€ четных:";
    std::cin >> c;

    foo(c, x);


    return 0;
}