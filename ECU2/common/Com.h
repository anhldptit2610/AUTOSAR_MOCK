#ifndef COM_H
#define COM_H

#include "Std_Types.h"
#include "Compiler.h"

/* Define các signal ID được sử dụng */
#define ComConf_ComSignal_HeaterControlSignal  0x01
#define ComConf_ComSignal_HeaterLevelSignal    0x02

/* Trạng thái trả về của hàm COM */
#define E_OK     0
#define E_NOT_OK 1

/* API của COM để gửi và nhận tín hiệu (signal) */
typedef uint8 Std_ReturnType;

/**
 * @brief Gửi một signal qua COM module.
 * @param SignalId: ID của signal cần gửi.
 * @param SignalDataPtr: Con trỏ tới dữ liệu của signal.
 * @return E_OK nếu gửi thành công, E_NOT_OK nếu thất bại.
 */
FUNC(Std_ReturnType, COM_CODE) COM_SendSignal(uint16 SignalId, const void* SignalDataPtr);

/**
 * @brief Nhận một signal qua COM module.
 * @param SignalId: ID của signal cần nhận.
 * @param SignalDataPtr: Con trỏ tới biến để lưu dữ liệu của signal.
 * @return E_OK nếu nhận thành công, E_NOT_OK nếu thất bại.
 */
FUNC(Std_ReturnType, COM_CODE) COM_ReceiveSignal(uint16 SignalId, void* SignalDataPtr);

#endif /* COM_H */
