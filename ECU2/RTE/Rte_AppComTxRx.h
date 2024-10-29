#ifndef RTE_APPCOMTXRX_H
#define RTE_APPCOMTXRX_H

/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/
#include "Rte_AppComTxRx_Type.h"
#include "Rte_DataHandleType.h"
#include "Std_Types.h"
#include "Compiler.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*----------------------------------------------------------------------------*/
/* function prototype declarations                                            */
/*----------------------------------------------------------------------------*/

#define SIG_ID_HeaterControl 0x01
#define SIG_ID_HeaterLevel   0x02

extern FUNC(void, RTE_CODE) RTE_COMCbk_HeaterControl(void);
extern FUNC(void, RTE_CODE) RTE_COMCbk_HeaterLevel(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_APPCOMTXRX_H */