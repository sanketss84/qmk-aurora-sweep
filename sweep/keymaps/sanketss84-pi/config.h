/* Copyright 2022 splitkb.com <support@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

// Not yet available in `keymap.json` format
#ifdef RGB_MATRIX_ENABLE
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#    define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#    define ENABLE_RGB_MATRIX_SOLID_SPLASH
#    define ENABLE_RGB_MATRIX_RAINBOW_BEACON 
#endif

// Not yet available in `keymap.json` format
#ifdef MOUSEKEY_ENABLE
     // The default is 100
#    define MOUSEKEY_WHEEL_INTERVAL 50
     // The default is 40
#    define MOUSEKEY_WHEEL_TIME_TO_MAX 100
#endif


// https://discord.com/channels/574598631399751680/574739675013578753/1063011857440452608 
// For a better experience you should add #define USB_VBUS_PIN 19U to the config.h when using Liatris or Elite-pi with converter
// It'll be added into the converter eventually
// For ARM MCUs like RP2040 it defaults to SPLIT_USB_DETECT, 
// which is an objectively inferior method of determining which half should be the "master" and which half should be the "slave"
// Liatris and Elite-pi etc have a VBUS detect circuit on GP19 so it's better to use that. 
// Your keyboard will boot faster, is the main difference

#define USB_VBUS_PIN 19U //uncomment this for elite-pi and liatris