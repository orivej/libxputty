/*
 *                           0BSD 
 * 
 *                    BSD Zero Clause License
 * 
 *  Copyright (c) 2019 Hermann Meyer
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted.

 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
 * REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
 * INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
 * LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 */

#pragma once

#ifndef XMENU_PRIVATE_H_
#define XMENU_PRIVATE_H_

#include "xmenu.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief _draw_menu_label     - draw the menu label on expose call
 * @param *w_                  - the menu to draw
 * @param *user_data           - attached user_data
 * @return void
 */

void _draw_menu_label(void *w_, void* user_data);

/**
 * @brief _menu_released             - popup the menu on click
 * @param *w_                        - void pointer to the Widget_t button
 * @param *button                    - void pointer to XEvent.xbutton struct
 * @param *user_data                 - void pointer to attached user_data
 * @return void
 */

void _menu_released(void *w_, void* button_, void* user_data);

/**
 * @brief _menu_entry_released       - the menu release func
 * @param *w_                        - void pointer to the Widget_t menu
 * @param *item                      - void pointer to the selected item *(int*)
 * @param *user_data                 - void pointer to the item label *(const char**)
 * @return void
 */

void _menu_entry_released(void *w_, void* item_, void* user_data);

/**
 * @brief _draw_menu           - draw menu on expose call
 * @param *w_                  - the menu to draw
 * @param *user_data           - attached user_data
 * @return void
 */

void _draw_menu(void *w_, void* user_data);

/**
 * @brief _draw_item           - draw item on expose call
 * @param *w_                  - the item to draw
 * @param *user_data           - attached user_data
 * @return void
 */

void _draw_item(void *w_, void* user_data);

/**
 * @brief _draw_accel_item     - draw accel item on expose call
 * @param *w_                  - the item to draw
 * @param *user_data           - attached user_data
 * @return void
 */

void _draw_accel_item(void *w_, void* user_data);

/**
 * @brief _draw_check_item     - draw item on expose call
 * @param *w_                  - the item to draw
 * @param *user_data           - attached user_data
 * @return void
 */

void _draw_check_item(void *w_, void* user_data);

/**
 * @brief _draw_viewslider     - draw a slider on the viewport
 * to indicate the view point
 * @param *w_                  - void pointer to view_port
 * @param *user_data           - attached user_data
 * @return void
 */

void _draw_viewslider(void *w_, void* user_data);

/**
 * @brief _set_viewpoint       - move the view_port to position
 * @param *w_                  - void pointer to view_port
 * @param *user_data           - attached user_data
 * @return void
 */

void _set_viewpoint(void *w_, void* user_data);

/**
 * @brief _check_item_button_pressed  - redraw item on button press
 * @param *button                     - the xbutton which is pressed
 * @param *user_data                  - attached user_data
 * @return void
 */

void _check_item_button_pressed(void *w_, void* button_, void* user_data);

/**
 * @brief _radio_item_button_pressed  - redraw item on button press
 * @param *button                     - the xbutton which is pressed
 * @param *user_data                  - attached user_data
 * @return void
 */

void _radio_item_button_pressed(void *w_, void* button_, void* user_data);

/**
 * @brief _configure_menu     - set final size and position of menu to a Widget_t
 * @param *parent             - pointer to the Widget_t the menu should pop over
 * @param *menu               - the menu to show
 * @return void
 */

void _configure_menu(Widget_t *parent, Widget_t *menu, int elem, bool above);

#ifdef __cplusplus
}
#endif

#endif //XMENU_PRIVATE_H_
