#define F_CPU 16000000UL

#include <util/delay.h>
#include <avr/io.h>



int main(void){
   DDRB = 0b00000111 ;
   PORTB = 0b00111000 ;

    while (1) {
        if(!(PINB & (1 << PB3))){
            PORTB |= (1 << PB0);
        }else {
            PORTB &= ~(1 << PB0);
        }
        if (!(PINB & (1 << PB4))){
            PORTB |= (1 << PB1);
        }else {
            PORTB &= ~(1 << PB1);
            }
        if (!(PINB & (1 << PB5))){
            PORTB |= (1 << PB2);
        }else {
            PORTB &= ~(1 << PB2);
            }
        
    }
    return 0; 

}