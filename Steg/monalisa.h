#ifndef MONALISA_H
#define MONALISA_H
#include "defaultcolor.h"

using namespace std;

class Mona_lisa : public Different_color_pixels //Derived Class
{
	private:
		const int x;		// image dimensions
		const int y;		// image dimensions
		
	public:
		Mona_lisa() : x(7), y(200){}		// constructor to set values
		void encode2();     	//function calling
		void decode2();     	//function calling
};
#endif
