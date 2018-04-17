#include "defaultcolor.h"
#include "codesheet.h"
#include "monalisa.h"

using namespace std;

void Mona_lisa::encode2()	// using created image(mona lisa class) (encoder)
{
	system("CLS");
	bitmap_image image("mona-lisa.bmp");	//open image of mona lisa
	int dimx=330,x=0;						//setting dimensions x
	int dimy=500,y=0;						//setting dimensions y
	int i=0;
	cout<<"\nEnter Your Message : ";				// enter message to encode
	fflush(stdin);
	getline(cin,Temp);								//saves length of message 	
	
	int len=Temp.length();							//saves length of message 
	
	image.set_pixel(x,y,len,len,len);	// set pixel values
	
	while(i<len)		//runs till the value of i is less then length of image
	{
		x++;	//increament x
		if(x>dimx)	//if value of x is less then 330
		{
			y++;		 //increament y
			x-=dimx;	 //decreament x
		
			if(y>dimy)	//if value of y is less then 500
			{
				y-=dimy;	//decreament y
			}
		}
		if((i)!=len && (i+1)!=len && (i+2)!=len)		//if value of i is not equal to 
		{
			image.set_pixel(x,y,Temp[i],Temp[i+1],Temp[i+2]);	// set pixel values accordingly
		}
		else if((i)!=len && (i+1)!=len)
		{
			image.set_pixel(x,y,Temp[i],Temp[i+1],0);	// set pixel values accordingly
		}
		else if((i)!=len)
		{
			image.set_pixel(x,y,Temp[i],0,0);	// set pixel values accordingly
		}
		i+=3;
	}
	
	string tempname1;
	cout<<"\nPlease Do not use \"mona-lisa.bmp\" name.\n";
	cout<<"\nEnter The Name Of The Image In .bmp Format : ";
	getline(cin,tempname1);
	fflush(stdin);
	
	image.save_image(tempname1);		 //saving image of name given
	cout<<"\n\n\n\t\tMessage Encoded Successfully!\n\n\n";
}

void Mona_lisa::decode2()		 // using created image(mona lisa class) (decoder)
{
	system("CLS");
	string tempname2;
	fflush(stdin);
	cout<<"\nEnter The Name Of The Image You Want To Decode In .bmp Format : ";		// user enter name of image to decode (in .bmp)
	getline(cin,tempname2);
	fflush(stdin);
	bitmap_image image(tempname2);
	int dimx=330,x=0;	//initialize values to dimx ( x axis) and x
	int dimy=500,y=0;	//initialize values to dimy ( y axis) and y
	int count=0;		//initialize count
	unsigned char red,green,blue;	 //intialize red , green , blue as unsigned characters
	image.get_pixel(x,y,red,green,blue); // get pixel values
	int len=red;// initialize length equal to value of red
	
	x++;
	cout<<"\nYOUR MESSAGE : \n\n\t\t";
	for( y;y<dimy;y++)		//loop through y axis
	{
		for( x;x<dimx;x++)  // nested for loop through x axis
		{
			
			image.get_pixel(x,y,red,green,blue);		// get pixel values
			if(count<len)
			{
				cout<<red;		//prints value of red pixel
				count++;  		//increament count
			}
			if(count<len)
			{
				cout<<green;  	//prints value of green pixel
				count++; 		 //increament count
			}
			if(count<len)
			{
				cout<<blue;  //prints value of Blue pixel
				count++;  		//increament count
			}
		}
	}
	cout<<"\n\n\n\t\tMessage Decoded Successfully!\n\n\n";
}
