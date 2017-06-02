 /**
 * @file empfaenger.c
 * Betriebssysteme Ringbuffer
 * Beispiel 3
 *
 * @author Hannes Aurednik <ic15b004@technikum-wien.at>
 * @author Eva Dorottya Gergely <ic16b064@technikum-wien.at>
 * @author Daniel Scheidl <ic16b073@technikum-wien.at>
 * @author Raphael Szabo <ic16b062@technikum-wien.at>
 * 
 * @date 2017/06/02
 *
 * @version 0.2
 *
 *
 */

/*
 * -------------------------------------------------------------- includes --
 */



#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "sharedfile.h"

/*
 * --------------------------------------------------------------- defines --
 */



/*
 * --------------------------------------------------------------- globals --
 */

/*
 * ------------------------------------------------------------- functions --
 */
	



int main (int argc, char* argv[])
{
	char *FILENAME = argv[0];
	
	if (do_ringbuffersize(argc, argv) == -1) return EXIT_FAILURE; /*EXIT_FAILURE gehört zur stdlib.h*/
	
	if (do_semaphorinit() == -1 ) return EXIT_FAILURE;
	
	if (do_sharedmemory() != 0) return EXIT_FAILURE;
	
	// Shared Memory einbinden
	
	// Lesen
	
	//Fehlerbehandlung?
	
	//Ausgabe nach stdout
	
	// Semaphore und Shared Memory wegräumen
	
	fprintf(stderr, "Error in %s: %s\n", FILENAME, "fgetc() returned error");	//damits kompiliert (FILENAME UNUSED)
	return 0;
}
	
/*
 * =================================================================== eof ==
 */
