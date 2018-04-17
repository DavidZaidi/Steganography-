#ifndef DEFAULTCOLOR_H
#define DEFAULTCOLOR_H
#include "bitmap_image.hpp"
#include <windows.h>
#include <iostream>
#include <string>
#include <time.h>


using namespace std;


class Different_color_pixels //Base class
{
	private:
		const char R;          // assigning RGB Red , Green , Blue constant values
		const char G;    	   // assigning RGB Red , Green , Blue constant values
		const char B;		   // assigning RGB Red , Green , Blue constant values
		
	protected:
			string Temp;		// string to encode
	
	public:
	    Different_color_pixels(): R(72) , G(101) , B(200),Temp(""){}		// constructor to set values
	    
		void encode1();		//function calling
		void decode1();		//function calling
		
};
#endif
