#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void){
  
   DDRB |= (1 << PB5);
   DDRB |= (1 << PB0);
   while(10){
    PORTB |= (1 << PB5);
    _delay_ms(1500);
    PORTB |= (1 << PB0);
    _delay_ms(1500);
    PORTB &= ~(1 << PB5);
    _delay_ms(1500);
    PORTB &= ~(1 << PB0);
    _delay_ms(1500);

   }
   return 0 ;

}