#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
protected:
	string name;
	int cource;
	int age;

public:
	Animal() : Animal("John doe", 1, 18) {}
	explicit Animal(const string name_P) : Animal(name_P, 1, 18) {}
	Animal(const string name_P, const int cource_P) : Animal(name_P, cource_P, 18 + cource_P) {}
	Animal(const string name_P, const int cource_P, const int age_P) : name{ name_P }, cource{ cource_P }, age{ age_P } { }

	Animal(const Animal& obj) : name{ obj.name }, cource{ obj.cource }, age{ obj.age } { }

	void set_name(string name_P) { name = name_P; }
	void set_cource(int cource_P) { cource = cource_P; }
	void set_age(int age_P) { age = age_P; }

	void print() { cout << "\nName: " << name << "\nCource: " << cource << "\nAge: " << age; }

	string get_name() { return name; }
	int get_cource() { return cource; }
	int get_age() { return age; }
};

class Cat:public Animal
{
	string project_theme;
	string done_percent;
	int difficulty_lvl;

public:
	Cat() : Cat("None", "0%", 50) { }
	explicit Cat(const string& theme_P) : Cat(theme_P, "0%", 50) { }
	Cat(const string& theme_P, string done_percent_P) : Cat(theme_P, done_percent_P, 0) { }
	Cat(const string& theme_P, string done_percent_P, int difficulty_lvl_P ) : project_theme{theme_P}, done_percent{done_percent_P}, difficulty_lvl{difficulty_lvl_P} { }

	Cat(const Cat& obj) : project_theme{ obj.project_theme }, done_percent{ obj.done_percent }, difficulty_lvl{ obj.difficulty_lvl } { }

	string set_project_theme(const string theme_P) { project_theme = theme_P; }
	string set_percent(const string percent_P) { done_percent = percent_P; }
	int set_lvl(int lvl_P) { difficulty_lvl = lvl_P; }

	void print() { Animal::print(); cout << "\nProject theme: " << project_theme << "\nDone percent " << done_percent << "\nDifficulty level: " << difficulty_lvl; }

	string get_project_theme() { return project_theme; }
	string get_percent() { return done_percent; }
	int get_lvl() { return difficulty_lvl; }
};

class Dog :public Animal
{
	string project_theme;
	string done_percent;
	int difficulty_lvl;

public:
	Dog() : Dog("None", "0%", 50) { }
	explicit Dog(const string& theme_P) : Dog(theme_P, "0%", 50) { }
	Dog(const string& theme_P, string done_percent_P) : Dog(theme_P, done_percent_P, 0) { }
	Dog(const string& theme_P, string done_percent_P, int difficulty_lvl_P) : project_theme{ theme_P }, done_percent{ done_percent_P }, difficulty_lvl{ difficulty_lvl_P } { }

	Dog(const Dog& obj) : project_theme{ obj.project_theme }, done_percent{ obj.done_percent }, difficulty_lvl{ obj.difficulty_lvl } { }

	string set_project_theme(const string theme_P) { project_theme = theme_P; }
	string set_percent(const string percent_P) { done_percent = percent_P; }
	int set_lvl(int lvl_P) { difficulty_lvl = lvl_P; }

	void print() { Animal::print(); cout << "\nProject theme: " << project_theme << "\nDone percent " << done_percent << "\nDifficulty level: " << difficulty_lvl; }

	string get_project_theme() { return project_theme; }
	string get_percent() { return done_percent; }
	int get_lvl() { return difficulty_lvl; }
};

class Parrot :public Animal
{
	string project_theme;
	string done_percent;
	int difficulty_lvl;

public:
	Parrot() : Parrot("None", "0%", 50) { }
	explicit Parrot(const string& theme_P) : Parrot(theme_P, "0%", 50) { }
	Parrot(const string& theme_P, string done_percent_P) : Parrot(theme_P, done_percent_P, 0) { }
	Parrot(const string& theme_P, string done_percent_P, int difficulty_lvl_P) : project_theme{ theme_P }, done_percent{ done_percent_P }, difficulty_lvl{ difficulty_lvl_P } { }

	Parrot(const Parrot& obj) : project_theme{ obj.project_theme }, done_percent{ obj.done_percent }, difficulty_lvl{ obj.difficulty_lvl } { }

	string set_project_theme(const string theme_P) { project_theme = theme_P; }
	string set_percent(const string percent_P) { done_percent = percent_P; }
	int set_lvl(int lvl_P) { difficulty_lvl = lvl_P; }

	void print() { Animal::print(); cout << "\nProject theme: " << project_theme << "\nDone percent " << done_percent << "\nDifficulty level: " << difficulty_lvl; }

	string get_project_theme() { return project_theme; }
	string get_percent() { return done_percent; }
	int get_lvl() { return difficulty_lvl; }
};