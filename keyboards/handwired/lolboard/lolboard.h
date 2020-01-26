/* Copyright 2019 Alan Johnson
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

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    l00, l01, l02, l03, l04, l05, l06, \
    l07, l08, l09, l10, l11, l12, l13, \
    l14, l15, l16, l17, l18, l19, l20, \
    l21, l22, l23, l24, l25, l26, l27, \
    r00, r01, r02, r03, r04, r05, r06, \
    r07, r08, r09, r10, r11, r12, r13, \
    r14, r15, r16, r17, r18, r19, r20, \
    r21, r22, r23, r24, r25, r26, r27  \
) \
{ \
    { l00, l01, l02, l03, l04, l05, l06 }, \
    { l07, l08, l09, l10, l11, l12, l13 }, \
    { l14, l15, l16, l17, l18, l19, l20 }, \
    { l21, l22, l23, l24, l25, l26, l27 }, \
    { r00, r01, r02, r03, r04, r05, r06 }, \
    { r07, r08, r09, r10, r11, r12, r13 }, \
    { r14, r15, r16, r17, r18, r19, r20 }, \
    { r21, r22, r23, r24, r25, r26, r27 }, \
}
