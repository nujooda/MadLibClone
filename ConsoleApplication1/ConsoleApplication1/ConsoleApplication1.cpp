#include <iostream>
#include <string>
using namespace std;

int main()
{
	string adjective1;
	string girlsName;
	string adjective2;
	string occupation1;
	string placeName;
	string clothing;
	string hobby;
	string adjective3;
	string occupation2;
	string boysName;
	string mansName;


	cout << "Please enter an adjective" << endl;
	getline(cin, adjective1);

	cout << "Please enter a girl's name" << endl;
	getline(cin, girlsName);

	cout << "Please enter another adjective" << endl;
	getline(cin, adjective2);

	cout << "Please enter an occupation" << endl;
	getline(cin, occupation1);

	cout << "Please enter the name of a place" << endl;
	getline(cin, placeName);

	cout << "Please enter the name of an item of clothing in plural" << endl;
	getline(cin, clothing);

	return 0;
}