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
    std::cout << "������� �����:";
    std::cin >> x;
    std::cout << "������� '1' ��� ����������� �������� �����, ���� - '0' ��� ����������� ������:";
    std::cin >> c;

    foo(c, x);


    return 0;
}