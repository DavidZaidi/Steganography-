#include "monalisa.h"
#include "codesheet.h"
#include "defaultcolor.h"

using namespace std;

void Different_color_pixels::encode1()		// image creation method function called (encoder)
{
	system("CLS");
	cout<<"Please Wait...";
	const unsigned int dim =10000;
	bitmap_image image(dim,dim);		// dimensions to create image (1000x1000 in this case)

	int x1,x2,x3,x,y;
	for(y=0;y<dim;y++)			// for loop through dimension of y axis
	{
		for(x=0;x<dim; x++)		// nested for loop through dimension of x axis
		{
			do
			{
				x1=rand() % 256;		// assigning random values to R(x1) of Red Green Blue Pixels
				x2=rand() % 256;		// assigning random values to G(x2) of Red Green Blue Pixels
				x3=rand() % 256;		// assigning random values to B(x3) of Red Green Blue Pixels
				image.set_pixel(x,y,x1,x2,x3); 	//setting pixels at values
			}while(x1 == R && x2 == G && x3 ==B);
		}
	}
	system("CLS");
	x=rand() % dim;
	y=rand() % dim;
	cout<<"\nEnter Message : ";	  // enter string to encode
	fflush(stdin);
	getline(cin,Temp);
	int len=Temp.length();		// saves string length
	image.set_pixel(x,y,R,G,B);		// set pixels values
	x++;
	if(x>dim)
	{
		y++;
		x-=dim;
		
		if(y>dim)
		{
			y-=dim;
		}
	}
	image.set_pixel(x,y,len,len,len);		// set pixels values
	
	int i=0;
	while(i<len)
	{
		x++;
		if(x>dim)
		{
			y++;
			x-=dim;
		
			if(y>dim)
			{
				y-=dim;
			}
		}
		if((i)!=len && (i+1)!=len && (i+2)!=len)
		{
			image.set_pixel(x,y,Temp[i],Temp[i+1],Temp[i+2]);	// set pixels values
		}
		else if((i)!=len && (i+1)!=len)
		{
			image.set_pixel(x,y,Temp[i],Temp[i+1],0);	// set pixels values
		}
		else if((i)!=len)
		{
			image.set_pixel(x,y,Temp[i],0,0);	// set pixels values
		}
		i+=3;
	}
	string tempname1;
	cout<<"\nEnter The Name Of The Image In .bmp Format : ";		//image name to encode string at
	getline(cin,tempname1);
	fflush(stdin);
	
	image.save_image(tempname1);	//saving image of name given
	cout<<"\n\n\n\t\tMessage Encoded Successfully!\n\n\n";
}

void Different_color_pixels::decode1()		// image creation method function called (decoder)
{
	system("CLS");
	string tempname2;
	const unsigned int dim =10000;
	fflush(stdin);
	cout<<"\nEnter The Name Of The Image You Want To Decode In .bmp Format : ";		// give image to decode
	getline(cin,tempname2);
	fflush(stdin);
	bitmap_image image(tempname2);			// opens the image to decode
	
	unsigned char red,r;
	unsigned char green,g;
	unsigned char blue,b;
	int len=0,count=0;			//assigning length and count to zero
	cout<<"\nYOUR MESSAGE : \n\n\t\t";
	for(int y=0;y<dim;y++)     // for loop through dimension of y axis
	{
		for(int x=0;x<dim;x++)		// nested for loop through dimension of x axis
		{
			image.get_pixel(x,y,r,g,b);			// get pixel values
			if(r==72 && g ==101 && b==200)		//if values of r g and b are as given
			{
				x++;	// increament x axis
				if(x>dim)	// if x axis value is greater than 100000
				{
					y++;		//increament y axis
					x-=dim; 	// decreament x axis
		
					if(y>dim)	// if y axis value greater than 100000
					{
						y-=dim;		// decreament y axis
					}
				}
				image.get_pixel(x,y,r,g,b);			// get pixel values
				len=r;								// assign length equal to r
				do
				{
					x++;
					if(x>dim)
					{
						y++;
						x-=dim;
		
						if(y>dim)
						{
							y-=dim;
						}
					}
				
					image.get_pixel(x,y,red,green,blue);		// get pixel values
					if(count<len)
					{
						cout<<red;	//prints value of red pixel
						count++;	//increament count
					}
					if(count<len)
					{
						cout<<green;	//prints value of green pixel
						count++;	//increament count
					}
					if(count<len)
					{
						cout<<blue;		//prints value of blue pixel
						count++;		//increament count
					}
				}while(count<len);
			}
		}
	}
	cout<<"\n\n\n\t\tMessage Decoded Successfully!\n\n\n";
}
