
/***************************************************************************************************
*                    (c) Copyright 1992-2019 Syncretize technologies co.,ltd.
*                                       All Rights Reserved
*
*\File          spi_flash.h
*\Description   
*\Note          
*\Log           2019.03.26    Ver 1.0    庞国瑞
*               创建文件。
***************************************************************************************************/
#ifndef _SPI_FLASH_H
#define _SPI_FLASH_H

#include "public_type.h"

extern void rt_thread_spiflash_init(void);

void write_to_fifo( uint8_t Info );

#endif /*_SPI_FLASH_H*/



/***************************************************************************************************
******************************************** END OF FILE *******************************************
***************************************************************************************************/




