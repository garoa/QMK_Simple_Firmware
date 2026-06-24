#pragma once
#define TAPPING_TERM 200
#define TAPPING_TOGGLE 1
#define ONESHOT_TAP_TOGGLE 1

//Não precisa declarar estas constantes se usar a funcao uart_init();
//Ao suar estas constatnes a proprio driver nativo UART do QMK já chama uart_init(UART_BAUD) internamente durante o boot do teclado.
//#define UART_DRIVER_BAUDRATE 115200       //Apenas para STM32, RP2040,...
//#define UART_BAUD 9600                  //Apenas para AVR
