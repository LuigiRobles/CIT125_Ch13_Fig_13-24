// CIT125 Intro to C++ Luigi Robles
// 08-02-2020 Summer Term
// Ch.13 pg.488 Fig.13-24 Company Name Program
// Displays the company name underlined with hypens

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//declare and initialize variables
	string companyName = "";
	string underline = "";

	cout << "Company name: "; //input part of IPO
	getline(cin, companyName); //function to get company name

	//assign the appropriate number of hypens
	underline.assign(companyName.length(), '-');

	//display the company name and row of hyphens
	cout << endl << companyName
		<< endl << underline << endl; //output part of IPO
	return 0;
} //end of main function
