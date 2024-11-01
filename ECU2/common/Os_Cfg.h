#ifndef OS_CFG_H
#define OS_CFG_H

#include "Std_Types.h"

/* Định nghĩa Event Mask cho các sự kiện */
#define Periodic_Event_1s       (EventMaskType)0x01  /* Sự kiện định kỳ xảy ra mỗi 1 giây */
#define Data_Receive_Event      (EventMaskType)0x02  /* Sự kiện kích hoạt khi nhận dữ liệu */

#endif /* OS_CFG_H */
