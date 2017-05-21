#include "Utils.h"

int main( int argc, const char *argv[] ) 
{

	if (argc != 3)
	{
		std::cerr << "Usage: ./sum <var1> <var2> " << std::endl;
		exit(1);
	}
	
	double var1 = atof(argv[1]);
	double var2 = atof(argv[2]);

	double s = sum(var1, var2);

	return 0;

}
