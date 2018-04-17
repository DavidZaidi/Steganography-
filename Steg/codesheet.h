#ifndef CODESHEET_H
#define CODESHEET_H


#include"defaultcolor.h"
using namespace std;

class Code_sheet : public Different_color_pixels  // Dervied Class, assign class Code_sheet (hiding through different character method)
{
	public:
		void encode3();	 		 //function calling
		void decode3();	  		//function calling
};
#endif
