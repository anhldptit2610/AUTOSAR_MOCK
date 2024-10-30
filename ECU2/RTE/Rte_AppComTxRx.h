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

extern FUNC(void, RTE_CODE) Rte_COMCbk_HeaterControl(void);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_APPCOMTXRX_H */