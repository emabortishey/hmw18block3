#pragma once
#include <iostream>
#include <string.h>
using namespace std;

class Animal
{
protected:
	string clasification;
	string living_area;
	int live_duration;

public:
	Animal() : Animal("butterfly", "air+ground", 1) {}
	explicit Animal(const string class_P) : Animal(class_P, "air+ground", 1) {}
	Animal(const string class_P, const string area_P) : Animal(class_P, area_P, 1) {}
	Animal(const string class_P, const string area_P, const int duration_P) : clasification{ class_P }, living_area{ area_P }, live_duration{ duration_P } { }

	Animal(const Animal& obj) : clasification{ obj.clasification }, living_area{ obj.living_area }, live_duration{ obj.live_duration } { }

	void set_name(string name_P) { clasification = name_P; }
	void set_cource(string cource_P) { living_area = cource_P; }
	void set_age(int age_P) { live_duration = age_P; }

	void print() { cout << "\nName: " << clasification << "\nCource: " << living_area << "\nAge: " << live_duration; }

	string get_name() { return clasification; }
	string get_cource() { return living_area; }
	int get_age() { return live_duration; }
};

class Cat:public Animal
{
	string fur_markings;
	string breed;
	int whiskers_lenth;

public:
	Cat() : Cat("None", "0%", 50) { }
	explicit Cat(const string& fur_P) : Cat(fur_P, "0%", 50) { }
	Cat(const string& fur_P, string breed_P) : Cat(fur_P, breed_P, 0) { }
	Cat(const string& fur_P, string breed_P, int whiskers_P ) : fur_markings{fur_P}, breed{breed_P}, whiskers_lenth{whiskers_P} { }

	Cat(const Cat& obj) : fur_markings{ obj.fur_markings }, breed{ obj.breed }, whiskers_lenth{ obj.whiskers_lenth } { }

	string set_project_theme(const string fur_P) { fur_markings = fur_P; }
	string set_percent(const string breed_P) { breed = breed_P; }
	int set_lvl(int whiskers_P) { whiskers_lenth = whiskers_P; }

	void print() { Animal::print(); cout << "\nProject theme: " << fur_markings << "\nDone percent " << breed << "\nDifficulty level: " << whiskers_lenth; }

	string get_project_theme() { return fur_markings; }
	string get_percent() { return breed; }
	int get_lvl() { return whiskers_lenth; }
};

class Dog :public Animal
{
	string fur_color;
	string breed;
	int teeth_amount;

public:
	Dog() : Dog("None", "0%", 50) { }
	explicit Dog(const string& theme_P) : Dog(theme_P, "0%", 50) { }
	Dog(const string& color_P, string breed_P) : Dog(color_P, breed_P, 0) { }
	Dog(const string& color_P, string breed_P, int amount_P) : fur_color{ color_P }, breed{ breed_P }, teeth_amount{ amount_P } { }

	Dog(const Dog& obj) : fur_color{ obj.fur_color }, breed{ obj.breed }, teeth_amount{ obj.teeth_amount } { }

	string set_project_theme(const string color_P) { fur_color = color_P; }
	string set_percent(const string breed_P) { breed = breed_P; }
	int set_lvl(int amount_P) { teeth_amount = amount_P; }

	void print() { Animal::print(); cout << "\nProject theme: " << fur_color << "\nDone percent " << breed << "\nDifficulty level: " << teeth_amount; }

	string get_project_theme() { return fur_color; }
	string get_percent() { return breed; }
	int get_lvl() { return teeth_amount; }
};

class Parrot :public Animal
{
	string feather_color;
	string breed;
	int beak_lenth;

public:
	Parrot() : Parrot("None", "0%", 50) { }
	explicit Parrot(const string& color_P) : Parrot(color_P, "0%", 50) { }
	Parrot(const string& color_P, string breed_P) : Parrot(color_P, breed_P, 0) { }
	Parrot(const string& color_P, string breed_P, int beak_P) : feather_color{ color_P }, breed{ breed_P }, beak_lenth{ beak_P } { }

	Parrot(const Parrot& obj) : feather_color{ obj.feather_color }, breed{ obj.breed }, beak_lenth{ obj.beak_lenth } { }

	string set_project_theme(const string color_P) { feather_color = color_P; }
	string set_percent(const string breed_P) { breed = breed_P; }
	int set_lvl(int beak_P) { beak_lenth = beak_P; }

	void print() { Animal::print(); cout << "\nProject theme: " << feather_color << "\nDone percent " << breed << "\nDifficulty level: " << beak_lenth; }

	string get_project_theme() { return feather_color; }
	string get_percent() { return breed; }
	int get_lvl() { return beak_lenth; }
};