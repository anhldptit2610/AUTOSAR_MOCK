#ifndef RTE_MIRRORHEATERCONTROL_H
#define RTE_MIRRORHEATERCONTROL_H

/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/
#include "Rte_MirrorHeaterControl_Types.h"
#include "Rte_NvM.h"

/*----------------------------------------------------------------------------*/
/* RTE APIs Prototype Declaration                                             */
/*----------------------------------------------------------------------------*/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_TempData_ReceiveTemperature( P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) tempData );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumidData_ReceiveHumidity( P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) humidData );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_MHControl_HeaterControlSignal(VAR(AUTOSAR_uint8, AUTOMATIC) control);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_MHControl_HeaterLevel(VAR(AUTOSAR_uint8, AUTOMATIC) level);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MHCRP_NvM_ReadTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_DstPtr );

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_MHCPP_NvM_WriteTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) NvM_SrcPtr );

/*----------------------------------------------------------------------------*/
/* Runnables Prototype Declaration                                            */
/*----------------------------------------------------------------------------*/
extern FUNC(void, RTE_CODE) Rte_InitMirrorHeater( VAR(void, AUTOMATIC) );
extern FUNC(void, RTE_CODE) Rte_ControlMirrorHeater(VAR(void, AUTOMATIC));

#endif /* RTE_MIRRORHEATERCONTROL_H */

/* End of Rte_MirrorHeaterControk.h */