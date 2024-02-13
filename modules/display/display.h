//=====[#include guards - begin]===============================================

#ifndef _DISPLAY_H_
#define _DISPLAY_H_

//=====[Declaration of public defines]=========================================
#define DISPLAY_REFRESH_TIME_MS 1000
#define SYSTEM_TIME_INCREMENT_MS   10
//=====[Declaration of public data types]======================================

//=====[Declarations (prototypes) of public functions]=========================

void displayInit( void );
 
void displayCharPositionWrite( uint8_t charPositionX, uint8_t charPositionY );

void displayStringWrite( const char * str );

void userInterfaceDisplayInit();

//=====[#include guards - end]=================================================

#endif // _DISPLAY_H_