
#ifndef LAB_HELPER_H
#define LAB_HELPER_H

#include <string>
#include <cstdio>
#include <iostream>
#include <fstream>

#define get_size(array) sizeof(array)/sizeof(array[0])

using namespace std;

int read_file(string arr[], char file[], int size) {
	ifstream myfile(file);
	if (myfile.is_open()) {
		int i = 0;
		string temp;
		while ((!myfile.eof()) && (i<size)) {
			getline(myfile, arr[i]);
			i += 1;
		}
		myfile.close();
		return 0;
	} else {
		cout << "Unable to open file";
		return 1;
	}
}

void win32cmd(void) {
#ifdef _WIN32_C_LIB
	getchar();
#endif //WIN32
}

#endif // LAB_HELPER_H