#include "mbed.h"
#include "arm_book_lib.h"

int main()  // comentario main
{
    DigitalIn gasDetector(D2);  // constructor ??

    DigitalOut alarmLed(LED1);  // constructor ??

    gasDetector.mode(PullDown);  // método ??

    alarmLed = OFF; // método

    bool alarm = false;

    printf("%s\n", "Hello World");

    printf("%s\n", "Hello World!!!");

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
            printf("%s\n", "Alarma activada");
        } else {
            alarmLed = OFF;
            printf("%s\n", "Alarma desactivada");
        }        
    }
}