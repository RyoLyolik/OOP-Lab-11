#include "obj.h"

Cat::Cat()
{
	classification = {
		{"Phylum", "Chordata"},
		{"Class", "Mammalia"},
		{"Order", "Carnivora"},
		{"Suborder", "Feliformia"},
		{"Family", "Felidae"},
		{"Subfamily", "Felinae"},
		{"Genus", "Felis"},
		{"Species", "F. catus"}
	};
}
Cat::Cat(string name_) {
	classification = {
		{"Phylum", "Chordata"},
		{"Class", "Mammalia"},
		{"Order", "Carnivora"},
		{"Suborder", "Feliformia"},
		{"Family", "Felidae"},
		{"Subfamily", "Felinae"},
		{"Genus", "Felis"},
		{"Species", "F. catus"}
	};
	name = name_;
}
void Cat::print() {
	cout << "����� " << name;
}
string Cat::sound()
{
	return "���";
}
Dog::Dog() {
	classification = {
	{"Phylum", "Chordata"},
	{"Class", "Mammalia"},
	{"Order", "Carnivora"},
	{"Suborder", ""},
	{"Family", "Canidae"},
	{"Subfamily", ""},
	{"Genus", "Canis"},
	{"Species", "F. familiaris"}
	};
}
Dog::Dog(string name_) {
	classification = {
		{"Phylum", "Chordata"},
		{"Class", "Mammalia"},
		{"Order", "Carnivora"},
		{"Suborder", ""},
		{"Family", "Canidae"},
		{"Subfamily", ""},
		{"Genus", "Canis"},
		{"Species", "F. familiaris"}
	};
	name = name_;
}
void Dog::print() {
	cout << "������ " << name;
}
string Dog::sound()
{
	return "���";
}
Parrot::Parrot() {
	classification = {
		{"Phylum", "Chordata"},
		{"Class", "Aves"},
		{"Order", "Psittaciformes"},
		{"Suborder", ""},
		{"Family", "Cacatuidae"},
		{"Subfamily", "Cacatuinae"},
		{"Genus", "Cacatua"},
		{"Species", "Goffini"}
	};
}
Parrot::Parrot(string name_) {
	classification = {
		{"Phylum", "Chordata"},
		{"Class", "Aves"},
		{"Order", "Psittaciformes"},
		{"Suborder", ""},
		{"Family", "Cacatuidae"},
		{"Subfamily", "Cacatuinae"},
		{"Genus", "Cacatua"},
		{"Species", "Goffini"}
	};
	name = name_;
}
void Parrot::print() {
	cout << "������� " << name;
}
string Parrot::sound(string snd)
{
	return snd;
}