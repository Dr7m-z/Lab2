// Lab2 Ex2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include<string>
class Employee {
public:
	explicit Employee(string firstname, string lastname, double Salary)
		:firstName(firstname), lastName(lastname), salary(Salary) {}
	void setfirstName(string firstname) {
		firstName = firstname;
	}
	void setlastName(string lastname) {
		lastName = lastname;
	}
	void setsalary(double Salary) {
		salary = Salary * 1.1;
		if (Salary < 0)
			salary = 0;
	}
	string getfirstName()const {
		return firstName;
	}
	string getlastName()const {
		return lastName;
	}
	double getsalary()const {
		return salary;
	}
private:
	string firstName;
	string lastName;
	double salary;
};
int main()
{
	Employee employee1("Bob", "Jones", 34500);
	Employee employee2("Susan", "Baker", 37800);
	employee1.setsalary(34500);
	employee2.setsalary(37800);
	cout << "Employee 1:" << employee1.getfirstName() << " " << employee1.getlastName() << ";" << "Yearly Salary: " << employee1.getsalary() << endl;
	cout << "Employee 2:" << employee2.getfirstName() << " " << employee2.getlastName() << ";" << "Yearly Salary: " << employee2.getsalary() << endl;
	cout << "Increasing employee salaries by 10%" << endl;
	cout << "Employee 1:" << employee1.getfirstName() << " " << employee1.getlastName() << ";" << "Yearly Salary: " << employee1.getsalary() << endl;
	cout << "Employee 2:" << employee2.getfirstName() << " " << employee2.getlastName() << ";" << "Yearly Salary: " << employee2.getsalary() << endl;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
