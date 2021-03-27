#include "Worker.h"
#include <iostream>
Worker::Worker(std::string fullName, std::string post, int salary, std::string date, int experience) {
	this->fullName = fullName;
	this->post = post;
	this->salary = salary;
	this->date = date;
	this->experience = experience;
}

std::string Worker::GetFullName() const {
	return this->fullName;
}

void Worker::SetFullName(std::string fullName) {
	this->fullName = fullName;
}

std::string Worker::GetPost() const {
	return this->post;
}

void Worker::SetPost(std::string post) {
	this->post = post;
}

int Worker::GetSalary()const {
	return this->salary;
}

void Worker::SetSalary(const int salary) {
	this->salary = salary;
}

std::string Worker::GetDate()const {
	return this->date;
}

void Worker::SetDate(std::string date) {
	this->date = date;
}

int Worker::GetExperience()const {
	return this->experience;
}

void Worker::SetExperience(const int experience) {
	this->experience = experience;
}

std::ostream& operator<< (std::ostream& out, const Worker& worker) {
	out << worker.GetFullName() << ' ' << worker.GetPost() << ' ' << worker.GetSalary()
		<< ' ' << worker.GetDate() << ' ' << worker.GetExperience();
	return out;
 }