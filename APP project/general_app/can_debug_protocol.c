
/***************************************************************************************************
*                    (c) Copyright 1992-2019 Syncretize technologies co.,ltd.
*                                       All Rights Reserved
*
*\File          can_debug_protocol.c
*\Description   
*\Note          
*\Log           2019.03.14    Ver 1.0    庞国瑞
*               创建文件。
***************************************************************************************************/
#include "can_debug_protocol.h"
#include "canbus_middle.h"
#include "param.h"

/***************************************************************************************************
*\Function      can_debug_send
*\Description   
*\Parameter     buf
*\Parameter     len
*\Return        void
*\Note          
*\Log           2019.03.14    Ver 1.0    庞国瑞
*               创建函数。
***************************************************************************************************/
void can_debug_send(u8* buf, u32 len)
{
	if(realtime_param.can_debug_flag==1)
	{
		canbus_middle_send(&CAN, 0x700, buf, len);
	}
}

/***************************************************************************************************
******************************************** END OF FILE *******************************************
***************************************************************************************************/


