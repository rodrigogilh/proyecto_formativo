#include <stdio.h>
#include <avr/io.h>#include <stdint.h>
#include <string.h>#include <avr/eeprom.h>#ifndef F_CPU
#define F_CPU 16000000UL /* quartz with 3,6864 MHz */
#endif#include <util/delay.h>#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <inttypes.h>


#include <avr/io.h>

void Init_variables (void);

int main(void)
{
	
	Init_variables();
	
    while(1)
    {
      
	  for (uint8_t i=0; i<5;i++)
	  {
		   //VALOR INCIAL DE CERO
		   PORTD &=~((1<<1)|(1<<4)|(1<<7));
		   _delay_ms(80);
		   //VALOR INCIAL DE UNO
		   PORTD |=((1<<1)|(1<<4)|(1<<7));
		   _delay_ms(80);
	  }
	  
	  PORTD |=((1<<1)|(1<<4)|(1<<7));
	  
	  for (uint8_t x=0; x<6;x++)
	  {
		    for (uint8_t i=0; i<6;i++)
		    {	    
			    if (i==0){ PORTD |=(1<<1); }
			    if (i==1){ PORTD |=(1<<4); }
			    if (i==2){ PORTD |=(1<<7); }
			    
			    if (i==3){ PORTD &=~(1<<7); }
			    if (i==4){ PORTD &=~(1<<4); }
			    if (i==5){ PORTD &=~(1<<1); }
				_delay_ms(70);
		    }
	  }
	  
	   PORTD |=((1<<1)|(1<<4)|(1<<7));
	   
	   for (uint8_t x=0; x<6;x++)
	   {
		   for (uint8_t i=0; i<6;i++)
		   {
			   if (i==0){ PORTD |=(1<<7); }
			   if (i==1){ PORTD |=(1<<4); }
			   if (i==2){ PORTD |=(1<<1); }
			   
			   if (i==3){ PORTD &=~(1<<1); }
			   if (i==4){ PORTD &=~(1<<4); }
			   if (i==5){ PORTD &=~(1<<7); }
			   _delay_ms(70);
		   }
	   }
	  
    }
}

void Init_variables (void)
{
	DDRD|= 1<<1; 
	DDRD|= 1<<4; 
	DDRD|= 1<<7; 
	
	//VALOR INCIAL DE CERO
	PORTD &=~((1<<1)|(1<<4)|(1<<7));
	
}