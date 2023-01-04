/*
 * Copyright (c) 2019, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef LCD_H_
#define LCD_H_

#include "McuSSD1306.h"

/* configuration settings for lv_conf.h: */
#define LCD_LV_DISPLAY_HEIGHT 		(McuSSD1306_HW_SHORTER_SIDE)
#define LCD_LV_DISPLAY_WIDTH 		(McuSSD1306_HW_LONGER_SIDE)
#define LCD_LV_COLOR_DEPTH          (1)
#define LCD_LV_DPI                  (25)

void LCD_SetPixel(int x, int y, int color);

void LCD_UpdateRegion(int x, int y, int w, int h);

void LCD_Init(void);
void LCD_Deinit(void);

#endif /* LCD_H_ */
