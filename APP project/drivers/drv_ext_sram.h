/*
 * File      : sram.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2015 RT-Thread Develop Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2015-08-03     xiaonong      The first version for STM32F7
 */

#ifndef _DRV_EXT_SRAM_H
#define _DRV_EXT_SRAM_H

void sram_init(void);
void *sram_malloc(unsigned long nbytes);
void sram_free(void *ptr);
void *sram_realloc(void *ptr, unsigned long nbytes);

#endif /*_DRV_EXT_SRAM_H*/
