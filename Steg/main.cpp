#include <iostream>
#include "defaultcolor.h"
#include "codesheet.h"
#include "monalisa.h"

using namespace std;

int main() 
{
	Different_color_pixels dcp;			// object of different color pixels class
	Mona_lisa ml;						// object of mona lisa class
	Code_sheet cs;						// object of codesheet class
	
	system("Color 1A");
	time_t tim;  //create variable of time_t
	time(&tim); //pass variable tim to time function
	cout<<"\n\n\n\n\n\n\n\n\n\t\t\tWelcome To Steganography!\n\n\n\n\n\n\n\n";			// welcome message
	Sleep(2000);
	int x,y;

	do
	{
		
		system("CLS");
		cout<<"\t\t\tWhat Would You Like To Do?\n";		// ask if user wants encode , decode
		Sleep(1000);
		cout<<"\t\t\t1) Encode Message\n";	
		cout<<"\t\t\t2) Decode Message\n";
		cout<<"\t\t\t3) Exit\n";
		cout<<"\n\t\t\t-> ";
		cin>>x;
	
	     if(x==1)		// if user wants to encode
	   {
		   	system("CLS");
			cout<<"How Would You Like To Encode Your Message?\n";	// ask how user wants to encode message
			Sleep(500);
			cout<<"\n\t\t\t1) By Using A Random Image\n";	// by creating image (different color pixels)
			cout<<"\t\t\t2) By Using Mona Lisa's Image\n";	// by using created image(mona lisa class)
			cout<<"\t\t\t3) By Using A Code Sheet\n";		// by changing each character of your string to random characters
			cout<<"\n\t\t\t-> ";
			cin>>y;
			if(y==1)		// encode through image creation
			{
				dcp.encode1();		//Function calling (different color pixels, image creation method)
				
				cout <<"\n\n\t\t\t\t\t\t"<<ctime(&tim)<<"\n"; // this translates what was returned from time() into a readable format
				system("pause");
			}
			else if(y==2)		// encode through created image
			{
				ml.encode2();		//Function calling(mona lisa , created image method)
				
				cout <<"\n\n\t\t\t\t\t\t"<<ctime(&tim)<<"\n";
				system("pause");
			}
			else if(y==3)	// encode through codesheet
			{
				cs.encode3();	//Function calling (codesheet, changing each character of your string to random characters)
				
				cout <<"\n\n\t\t\t\t\t\t"<<ctime(&tim)<<"\n";
				system("pause");
			}
	   }
	    else if(x==2)	// if user wants to decode
	   {
	   	system("CLS");
		cout<<"* Note: Use The Same Methode To Decode Your Message, By Which You Encoded It. *\n\n ";
		cout<<"\n\t\t\tHow Would You Like To Decode Your Message?\n";
		Sleep(500);
		cout<<"\t\t\t1) By Using A Random Image\n";
		cout<<"\t\t\t2) By Using Mona Lisa's Image\n";
		cout<<"\t\t\t3) By Using A Code Sheet\n";
		cout<<"\n\t\t\t-> ";
		cin>>y;
		
		if(y==1)		// decode created image
		{
			dcp.decode1();	// Function calling (different color pixels, image creation method)
			
			cout <<"\n\n\t\t\t\t\t\t"<<ctime(&tim)<<"\n";
			system("pause");
		}
		else if(y==2)		// decode created mona lisa image
		{
			ml.decode2();	//Function calling(mona lisa , created image method)
			
		    cout <<"\n\n\t\t\t\t\t\t"<<ctime(&tim)<<"\n";
			system("pause");
		}
		else if(y==3)	// decode codesheet
		{
			cs.decode3();	//Function calling (codesheet, changing each character of your string to random characters)
			
			cout <<"\n\n\t\t\t\t\t\t"<<ctime(&tim)<<"\n";
			system("pause");
		}
	  }
	  else if(x==3) // if user exits
	  {
	  	cout <<"\n\n\n\nAll Rights Reserved... "<<"\t\t\t\t"<<ctime(&tim); // this translates what was returned from time() into a readable format
			return 0;
			
			

	  }
	  else
	  {
	  	system("CLS");
	  	cout<<"\t\t\t\tERROR!\n\n\n\n"; // generates error if user enters invalid number
	  	Sleep(1000);
	  	cout<<"\n\n\n\n\n\t\t\t\tPLEASE TRY AGAIN!\n\n\n\n\n\n\n\n";
	  	Sleep(3000);
	  	system("CLS");
	  	
	  }
   }while(x!=3);
	return 0;
}
