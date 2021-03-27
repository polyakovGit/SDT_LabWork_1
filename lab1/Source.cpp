//������� 5.
//1. ������� ����� ��� �������� ��������� ���������� :
//� �.�.�.,
//� ���������,
//� �����,
//� ���� ����������� �� ������,
//� ���� � ������� �����������.
//2. ������������� ����������� ���������� � ����� �� ����� �������� ������.
//��� �������� ������ ������������ ����.
//3. ���������� ������� ����� ���,
#include <iostream>
#include <string>
#include <stack>
#include "Worker.h"
#include <map>
#include <list>


int main() {
	std::stack<Worker> workers;
	Worker worker0("fullName", "post0", 1000, "someDate", 1), worker1("fullName", "post0", 2000, "someDate", 1),
		worker2("fullName", "post1", 9000, "someDate", 1), worker3("fullName", "post1", 9000, "someDate", 1);

	workers.push(worker0);
	workers.push(worker1);
	workers.push(worker2);
	workers.push(worker3);

	std::map<std::string, std::list<int>>map;
	while (workers.size()) {
		Worker worker = workers.top();
		map[worker.GetPost()].push_back(worker.GetSalary());
		workers.pop();
	}

	double avg = 0;
	for (auto item : map) {
		avg = 0;
		for (int salary : item.second) 
			avg += salary;
		avg /= item.second.size();
		std::cout << item.first << " " << avg << std::endl;
	}
	std::cout << worker0;
	return 0;
}