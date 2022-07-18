// Write a C++ program to write number 1 to 100 in a data file NOTES.TXT. 

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int i;
	fstream f("NOTES.TXT");
	// f.open("NOTES.TXT");
	f<<"File is oring !";
	f.close();
	return 0;
}
