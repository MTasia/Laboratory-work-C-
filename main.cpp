#include <iostream>
#include <fstream>
#include <string>
#include "menu.cpp"
#include "menu.h"


int mode(int argc, char** argv) {
	if (argc == 0)
		return 1;
	else
		return 2;
}


int main(int argc, char** argv) {
	string str;
	ifstream in("menu.txt");
	getline(in, str);
	in.close();

	launch_menu(mode(argc, argv), str);

	return 0;
}