#ifndef OS_H
#define OS_H

#include "Std_Types.h"

/* Định nghĩa các kiểu cho Task ID và Event Mask */
typedef uint8 TaskType;
typedef uint8 EventMaskType;
typedef EventMaskType* EventMaskRefType;

FUNC(Std_ReturnType, OS_CODE) WaitEvent(EventMaskType Mask);

/**
 * @brief Lấy các sự kiện hiện tại của một task cụ thể.
 * @param TaskID: TaskType, ID của task.
 * @param Event: EventMaskRefType, con trỏ tới biến để lưu các sự kiện đã kích hoạt.
 * @return Std_ReturnType: E_OK nếu thành công, E_NOT_OK nếu có lỗi.
 */
FUNC(Std_ReturnType, OS_CODE) GetEvent(TaskType TaskID, EventMaskRefType Event);

/**
 * @brief Xóa các sự kiện đã xử lý khỏi task hiện tại.
 * @param Mask: EventMaskType, mặt nạ của các sự kiện cần xóa.
 * @return Std_ReturnType: E_OK nếu thành công, E_NOT_OK nếu có lỗi.
 */
FUNC(Std_ReturnType, OS_CODE) ClearEvent(EventMaskType Mask);

#endif /* OS_H */
