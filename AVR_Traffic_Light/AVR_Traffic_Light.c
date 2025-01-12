#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

void delay(int value){
    for (int i = 0 ; i < value ; i++){
        _delay_ms(1000);
    }
}

int main(){
    
    DDRB = 0b00111000 ;
    while(1){
        PORTB |= (1 << PB3);
        delay(5);
        PORTB &= ~(1 << PB3);
        PORTB |= (1 << PB4);
        delay(5);
        PORTB &= ~(1 << PB4);
        PORTB |= (1 << PB5);
        delay(5);
        PORTB &= ~(1 << PB5);
        PORTB |= (1 << PB4);
        delay(5);
        PORTB &= ~(1 << PB4);

    }

}