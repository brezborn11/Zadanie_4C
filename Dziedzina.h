#pragma once
#include <string>
using namespace std;
class Dziedzina
{
protected:
	string nazwa;
	wstring informacje, uczelnia;
public:
	Dziedzina();
	void info_www();
	void uczel_www();
};

