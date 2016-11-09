////////////////
//Anna Tran
//CS 172 Sec 1
//13.5
////////////////
//FIXXXXX
//Aready started before Stepen made 2010-2014 baby name ranking text files. Please enter 2001-2010

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	char g;
	string bnf, name, gname, bname;
	int year, rank,amount, gamount,bamount;
	cout << "Enter the year for the most popular baby names" << endl;
	//Enter 2001 - 2010 years
	cin >> year;

	switch (year) {
	case 2001:bnf = "Babynameranking2001.txt";
		break;
	case 2002:bnf = "Babynameranking2002.txt";
		break;
	case 2003:bnf = "Babynameranking2003.txt";
		break;
	case 2004:bnf = "Babynameranking2004.txt";
		break;
	case 2005:bnf = "Babynameranking2005.txt";
		break;
	case 2006:bnf = "Babynameranking2006.txt";
		break;
	case 2007:bnf = "Babynameranking2007.txt";
		break;
	case 2008:bnf = "Babynameranking2008.txt";
		break;
	case 2009:bnf = "Babynameranking2009.txt";
		break;
	case 2010:bnf = "Babynameranking2010.txt";
		break;
	default: cout << "That year is not available" << endl;
		return 0;
	}
	//open file
	ifstream yearfile(bnf.c_str());
	if (yearfile.fail())
	{
		cout << "Error, could not open file" << endl;
		return 0;
	}
	cout << "Enter m or f for gender" << endl;
	cin >> g;
	cout << "Enter a name" << endl;
	cin >> name;

	
		while (getline(yearfile,bnf))
		{
			yearfile >> rank >> bname >> bamount >> gname >> gamount;
			if (name==bname)
			{
				cout << bname << " is rank " << rank << " for the year " << endl;
			}
			else if (name==gname)
			{
				cout << gname << " is rank " << rank << " for the year " << endl;
			}
	
			
			
		}
		yearfile.close();
	
	return 0;
}
		
		

