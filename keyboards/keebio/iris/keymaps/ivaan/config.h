/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// #define USE_I2C
#define EE_HANDS

// home row mods
#define TAPPING_TERM_LESS 125
#define TAPPING_TERM 200
#define TAPPING_TERM_MORE 300
#define TAPPING_TERM_EVEN_MORE 400
#define TAPPING_TERM_PER_KEY

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// but do allow nested taps to cause hold mods
#define PERMISSIVE_HOLD

// combos
#define COMBO_COUNT 8

#define MOUSEKEY_INERTIA
#define MOUSEKEY_MAX_SPEED 	64 // 	Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX 	128 // 	Number of frames until maximum cursor speed is reached
#define MOUSEKEY_FRICTION 	12 // 	How quickly the cursor stops after releasing a key

#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD