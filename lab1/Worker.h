#pragma once
#include <string>
class Worker {
	std::string fullName;
	std::string post;
	int salary;
	std::string date;
	int experience;
public:
	Worker(std::string, std::string, int, std::string, int);

	std::string GetFullName() const;
	void SetFullName(std::string fullName);

	std::string GetPost() const;
	void SetPost(std::string post);

	int GetSalary() const;
	void SetSalary(int salary);

	std::string GetDate() const;
	void SetDate(std::string date);

	int GetExperience()const;
	void SetExperience(int experience);

	friend std::ostream& operator<< (std::ostream& out, const Worker& worker);
};