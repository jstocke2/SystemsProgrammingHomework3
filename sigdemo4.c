/* sigdemo4.c - shows how to stop a signal from being generated
 *            - have to kill -9 to stop this one
 */

#include	<stdio.h>
#include	<signal.h>
#include    <termios.h>

main()
{
	//signal( SIGINT, SIG_IGN );  // old way of ignoring the signal
	// access termios data object
	struct termios config;
	int fd;
	// set the ISIG flag which stops signal from being sent at all
	config.c_lflag |= ~ISIG;
	// set the new configuration
	tcsetattr(0, TCSANOW, &config);
	printf("you can't stop me!\n");
	while( 1 )
	{
		sleep(1);
		printf("haha\n");
	}
}
