//Haiqal Adam
//A17DW0071
//compare two strings
//complete the program below. 
#include <string.h>
#include <iostream>
using namespace std;

int main()
{

	string myName="Mike";//write your name there.
	//make a while loop until user input 'quit' to exit/end the program

	while (true)
	{
		cout <<"Enter your name (or 'quit' to exit): ";
		string userName;
		cin >> userName;
		//get the user input for string.
		if(userName=="Abu")
	       	{
			cout<<"Hey Abu!"<<endl;
		}
		else if(userName=="quit")
		{
			cout<<endl;
			break;
		}
		else
		{
			cout<<"Aha! its "<<myName<<endl;
		}
	}
	return 0;
}


//updated
//signed by haiqal
