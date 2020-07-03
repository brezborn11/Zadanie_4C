#include "Dziedzina.h"
#include <Windows.h>

Dziedzina::Dziedzina()
{
}

void Dziedzina::info_www()
{
	LPCWSTR napis = informacje.c_str();
	ShellExecute(0, 0, napis, 0, 0, SW_SHOW);
}

void Dziedzina::uczel_www()
{
	LPCWSTR napis = uczelnia.c_str();
	ShellExecute(0, 0, napis, 0, 0, SW_SHOW);

}
