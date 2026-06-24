#include QMK_KEYBOARD_H 
#include "quantum.h"
#include "uart.h"

#define LED_PIN E6             //gpio 0x01, PE6

void keyboard_pre_init_user(void) {
    gpio_set_pin_output(LED_PIN);
    gpio_write_pin_low(LED_PIN);
}

void keyboard_post_init_kb(void) {
    uart_init(9600);
}

//serve para enviar tecla sem pressionamento...para testar a uart
void matrix_scan_user(void)
{
    static uint16_t timer = 0;

    if (timer_elapsed(timer) > 2000)
    {
        timer = timer_read();

        uart_write('B');
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {          //Ao pressionar a tecla
        //uart_write((record->event.key.row * 16) + record->event.key.col);

        if (keycode == KC_A) {            //Se pressionar a tecla 'A'
            gpio_write_pin_high(LED_PIN); // Liga o LED
			uart_write(0x41);             //envia letra A  
        } else if (keycode == KC_Z) {     //Ao apertar 'Z'
			uart_write(0x42);
        } else if (keycode == KC_Q) {     //Ao apertar 'Q'
			uart_write(0x30);
        }

    } else {                              // Ao soltar a tecla

        if (keycode == KC_A) {
            gpio_write_pin_low(LED_PIN);  //desliga o LED
			uart_write(0xAA);
        }
    
    }
    return true; // Retorna true para o QMK processar as teclas para o PC
}
