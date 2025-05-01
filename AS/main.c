#include <stdio.h>
#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

void IC74158()
{
    DDRA=(0<<DDA7) | (1<<DDA6) | (1<<DDA5) | (1<<DDA4) | (1<<DDA3) | (0<<DDA2) | (0<<DDA1) | (0<<DDA0);
    PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (1<<PORTA2) | (1<<PORTA1) | (1<<PORTA0);

    DDRB=(1<<DDB7) | (1<<DDB6) | (1<<DDB5) | (1<<DDB4) | (1<<DDB3) | (1<<DDB2) | (1<<DDB1) | (1<<DDB0);
    PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

    DDRC=(1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (0<<DDC3) | (0<<DDC2) | (1<<DDC1) | (1<<DDC0);
    PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

    DDRD=(1<<DDD7) | (1<<DDD6) | (1<<DDD5) | (1<<DDD4) | (1<<DDD3) | (1<<DDD2) | (1<<DDD1) | (1<<DDD0);
    PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);

    /*
    PA0 IN (SELECT)
    PA1 IN (A1)
    PA2 IN (B1)
    PC2 IN(STROBE)
    PA3 OUT(Y1)


    */

    PORTA.7=0; //GND
    PORTC.3=1; //VCC

    PORTC.2=1;
    if(PINA.3==1)
    {
        PORTC.2=0;
        PORTA.0=0;
        PORTA.1=0;
        if(PINA.3==1)
        {
            PORTA.1=1;
            if(PINA.3==0)
            {
                PORTA.0=1;
                PORTA.2=0;
                if(PINA.3==1)
                {
                    PORTA.2=1;
                    if(PINA.3==0)
                    {
                        lcd_puts("IC: HD74LS75P");
                    }

                }

            }

        }



    }

}

int main()
{
    printf("Hello world!\n");
    return 0;
}
