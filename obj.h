#pragma once
using namespace std;
#include <iostream>
#include <string>
#include <map>
#include <vector>
class Animal {
protected:
	int age;
	map <string, string> classification = {
		{"Phylum", ""},
		{"Class", ""},
		{"Order", ""},
		{"Suborder", ""},
		{"Family", ""},
		{"Subfamily", ""},
		{"Genus", ""},
		{"Species", ""}
	};
public:
	virtual void print() {};
	virtual string sound() { return ""; }
	virtual string sound(string snd) { return snd; }
};

class Cat :public Animal {
public:
	string name;
	Cat();
	Cat(string name_);
	void print();
	string sound();
};
class Dog :public Animal {
public:
	string name;
	Dog();
	Dog(string name_);
	void print();
	string sound();
};
class Parrot :public Animal {
public:
	string name;
	Parrot();
	Parrot(string name_);
	void print();
	string sound(string snd);
};