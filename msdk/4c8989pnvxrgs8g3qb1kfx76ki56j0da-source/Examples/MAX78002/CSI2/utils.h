/******************************************************************************
 * Copyright (C) 2023 Maxim Integrated Products, Inc., All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL MAXIM INTEGRATED BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Except as contained in this notice, the name of Maxim Integrated
 * Products, Inc. shall not be used except as stated in the Maxim Integrated
 * Products, Inc. Branding Policy.
 *
 * The mere transfer of this software does not imply any licenses
 * of trade secrets, proprietary technology, copyrights, patents,
 * trademarks, maskwork rights, or any other form of intellectual
 * property whatsoever. Maxim Integrated Products, Inc. retains all
 * ownership rights.
 *
 ******************************************************************************/
#ifndef EXAMPLES_MAX78002_CSI2_UTILS_H_
#define EXAMPLES_MAX78002_CSI2_UTILS_H_

/*****************************     INCLUDES  *********************************/
#include <stdint.h>

/*****************************     MACROS    *********************************/

/*****************************     VARIABLES *********************************/

/*****************************     FUNCTIONS *********************************/
void utils_delay_ms(uint32_t ms);
uint32_t utils_get_time_ms(void);
void utils_hexDump(const char *title, uint8_t *buf, uint32_t len);
int utils_send_img_to_pc(uint8_t *img, uint32_t imgLen, int w, int h, uint8_t *pixelformat);
int utils_stream_img_to_pc_init(uint8_t *img, uint32_t imgLen, int w, int h, uint8_t *pixelformat);
int utils_stream_image_row_to_pc(uint8_t *img, uint32_t imgRowLen);

#endif // EXAMPLES_MAX78002_CSI2_UTILS_H_
