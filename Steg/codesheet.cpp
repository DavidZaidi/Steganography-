#include "defaultcolor.h"
#include "codesheet.h"
#include "codesheet.h"


using namespace std;

void Code_sheet::encode3()	// hiding string in different character method function called (encoder)
{
	system("CLS");
	ifstream inputFile("Codesheet.txt");
	if(!inputFile)
	{
		cout << "Error: File Does Not Exist Or Cannot Be Opened.";		//generate error if file not found
	}
	string fileName;
	cout<<"\nEnter your message : ";		// enter message to encode
	fflush(stdin);
	getline(cin,Temp);
	cout << "\n\nEnter Output File Name In .txt Format : " ; //requesting file name or input
	cin >> fileName;
	ofstream fout(fileName);		// open file for the message to be encoded on
	char charHold,y2,y3;		//initializing characters charHold, y2, y3
	int x=0,i=0,y1,z;			//initializing int variables
	do
	{
		inputFile.seekg(0);	// reading from file codesheet.txt
		x=Temp[i];			//assigning the message ( string ) array to x
		for(int j=0;j<=94;j++)
		{
			inputFile>>y1>>y2;
			if(x==y1)
			{
				fout<<y2;		//printing the encoded message on the different file character by character
				j=95;
			}
		}
		i++;
	}while( i <= Temp.length() );		// runs till the string's length
	inputFile.close();
	fout.close();		// closing file
	cout<<"\n\n\n\tMessage Encoded Successfully!\n\n\n";
}
void Code_sheet::decode3()		// hiding string in different character method function called (decoder)
{
	system("CLS");
	string filename;
	cout<<"\n\nEnter File Name In .txt Format : ";	//file name to decode	
	fflush(stdin);
	getline(cin,filename);
	ifstream fin1(filename);			//opening the file to be decoded
	if(!fin1)
	{
		cout << "Error: File Does Not Exist Or Cannot Be Opened."; 		// file not found error
	}
	ifstream fin2("Codesheet.txt");			// open the codesheet file
	cout<<"\n\nYour Message : ";
	fflush(stdin);
	char charhold,y2;
	int y1;
	while(!fin1.eof())	//runs through the whole file
	{
		fin2.seekg(0);		//seekg to iterate through the text file
		fin1>>charhold;
		for(int j=0;j<=94;j++)	//loop to search character by character
		{
			fin2>>y1;		//holds desired character from codesheet.txt
			fin2>>y2;		//holds desired character from codesheet.txt
			if((charhold==y2) && (!fin1.eof()))		//runs till the end of file  
			{
				y2=y1;
				cout<<y2;		//prints y2 on console
				j=95;			//sets j value for the loop to end
			}
		}
		
	}
	fin1.close();			//closing file	
	fin2.close();			//closing file	
	cout<<"\n\n\n\t\tMessage Decoded Successfully!\n\n\n";
}
