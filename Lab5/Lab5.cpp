#include "stdafx.h"

#include "lab_5.h"
#include "lab_helper.h"
#define SIZE 10

int main(void) {

	string arr[SIZE];

	read_file(arr, "C:\\Users\\Elena\\Documents\\Visual Studio 2015\\Projects\\Lab5\\Lab5\\input.txt", SIZE);
	DataStructManager dm(arr, SIZE);
	dm.print();
	cout << endl << endl << "+=================Sorting================+" << endl << endl;
	dm.sort();
	dm.print();

	win32cmd();
	system("pause");
	return EXIT_SUCCESS;
}

