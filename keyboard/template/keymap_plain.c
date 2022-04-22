/*
Copyright (C) 2018,2019 Jim Jiang <jim@lotlab.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "keymap_common.h"
#include "keyboard_fn.h"

const action_t actionmaps[][MATRIX_ROWS][MATRIX_COLS] = { 
	[0] = ACTIONMAP_ENC(
		FN0,  PSLS,  PAST, PMNS,\
		P7,   P8,    P9,   PPLS, \
		P4,   P5,    P6,  \
		P3,   P2,    P1,   PENT, \
		P0,   FN11, \
		VOLU, VOLD,  FN0 ),



};

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        { 0   ,  1    ,  2     ,  3,       NO_LED },
        { 6   ,  5    ,  4     ,  10,      NO_LED},
        { 7   ,  8    ,  9     ,  NO_LED,  NO_LED },
        { 13  ,  12   ,  11    ,  16    ,  NO_LED },
        { 14  ,NO_LED ,  15    ,  NO_LED,  NO_LED },
    },
    { // LED Index to Physical Position
        { 32, 25 }, { 96, 25 }, { 160, 25 }, { 224, 25 }, 
		{ 160, 75 }, { 96, 75 }, { 32, 75 }, 
		{ 32, 125 }, { 96, 125 }, { 160, 125 },   { 204, 105 },
		{ 160, 175 }, { 96, 175 }, { 32, 175 },  
		{ 64, 225 }, { 160, 225 },{ 204, 205 },
	 },
    { // LED Index to Flag
        255, 4, 4, 4,
		4, 4, 4,
		4, 4, 4, 4,
		4, 4, 4,
        4, 4, 4, }
};
