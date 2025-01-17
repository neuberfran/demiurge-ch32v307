/*
  Copyright 2019, Awesome Audio Apparatus.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

      https://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
      limitations under the License.
*/

#include <stdbool.h>
#include <stdint.h>

#ifndef _DEMIURGE_DEMIURGE_SPI_H_
#define _DEMIURGE_DEMIURGE_SPI_H_

// Hardware Demiurge API
void demiurge_tick();

// Hardware Driver SPI

typedef struct {
    const char *name;
    const uint16_t inputs;
    const uint16_t outputs;
    const uint16_t gates;
    const uint16_t buttons;
    const uint16_t leds;
    const uint16_t potentionmeters;
    const uint16_t flash;
    const uint16_t max_frequency;  // in kHz
    const uint16_t recommended_frequency; // in kHz
    const bool usb;
    const bool sdcard;
    const bool display;
    const bool button_navigation;
} demiurge_driver_info_t;

void demiurge_driver_init(uint32_t samplerate);
void demiurge_driver_start();
void demiurge_driver_stop();
demiurge_driver_info_t *demiurge_driver_info();

// Gates
void init_gates();
void read_gates();
void update_gates();
void start_gates();
void stop_gates();
void direction_gate(int gate, bool output);

// ADCs
void init_adc();
void read_adc();
void start_adc();
void stop_adc();

// DACs
void init_dac();
void update_dac();
void start_dac();
void stop_dac();

// Timer
void init_timer(int samplerate);
void start_timer();
void stop_timer();

// LEDs
void update_leds();
void init_leds();
void start_leds();
void stop_leds();

// Buttons
void update_buttons();
void init_buttons();
void start_buttons();
void stop_buttons();

// Potentiometers
void update_potentiometers();
void init_potentiometers();
void start_potentiometers();
void stop_potentiometers();

// Display
void update_display();
void init_display();
void start_display();
void stop_display();

// Button Navigation
void read_navigation();
void init_navigation();
void start_navigation();
void stop_navigation();

// Test Points
void init_testpoints();
void start_testpoints();
void stop_testpoints();
void set_testpoint(int point);
void clear_testpoint(int point);

// USB
void update_usb();
void init_usb();
void start_usb();
void stop_usb();

// SDcard
void update_sdcard();
void init_sdcard();
void start_sdcard();
void stop_sdcard();

// Flash Memory
void update_flash();
void init_flash();
void start_flash();
void stop_flash();

#endif
