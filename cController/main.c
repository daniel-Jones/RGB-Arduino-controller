/* C RGB project controller */

#include <stdio.h>   /* standard I/O */
#include <string.h>  /* string function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* file control definitions */
#include <errno.h>   /* error number definitions */
#include <termios.h> /* POSIX terminal control definitions */

void main(int argc, char* argv[])
{
	/* handle command line arguments */
	if (argc < 2)
	{
		printf("This controller requires an RGB value as an argument.\nExample: %s 255,0,0\n", argv[0]);
	}
}
