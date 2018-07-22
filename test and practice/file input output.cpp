//// Created by Jose
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
//
//	string movie_title;
//	double budget;
//	double gross;
//	double net_profit;
//
//	ifstream infile;
//	ofstream outfile;
//
//	infile.open("indata.txt");
//	outfile.open("outdata.txt");
//	if (!infile.is_open())
//		cout << "file  cant  be open";
//	
//	
//	while (!infile.eof())  //if you dont  recognize this  just  remove  it  and  paste  block  of code  given  in  {} multi times  
//
//	{//this  is  the  block  to  repeat 
//		//reading  file   
//		infile >> movie_title >> budget >> gross;
//		net_profit = gross - budget;
//
//		//writing  file 
//		outfile << "Movie Title: " << movie_title << endl;
//		outfile << setprecision(2) << fixed << showpoint << "Budget: $" << budget << endl << "Gross: $" << gross << endl;
//		outfile << "Profit Margin: $" << net_profit << '\n' << endl;
//
//		//display  out  optional  
//		cout << "Movie Title: " << movie_title << endl;
//		cout << setprecision(2) << fixed << showpoint << "Budget: $" << budget << endl << "Gross: $" << gross << endl;
//		cout << "Profit Margin: $" << net_profit << '\n' << endl;
//	}
//
//
//	infile.close();
//	outfile.close();
//
//
//	return 0;
//}