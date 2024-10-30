#ifndef RTE_MIRRORHEATERCONTROL_H
#define RTE_MIRRORHEATERCONTROL_H

/*----------------------------------------------------------------------------*/
/* include headers                                                            */
/*----------------------------------------------------------------------------*/
#include "Rte_MirrorHeaterControl_Types.h"
#include "Rte_DataHandle.h"

/*----------------------------------------------------------------------------*/
/* RTE APIs Prototype Declaration                                             */
/*----------------------------------------------------------------------------*/
extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_TempData_ReceiveTemperature( P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) tempData );
#define Rte_Read_ReceiveTemperature        Rte_Read_RP_TempData_ReceiveTemperature

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Read_RP_HumidData_ReceiveHumidity( P2VAR(AUTOSAR_uint8, AUTOMATIC, RTE_APPL_DATA) humidData );
#define Rte_Read_ReceiveHumidity           Rte_Read_RP_HumidData_ReceiveHumidity

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_MHControl_HeaterControlSignal(VAR(AUTOSAR_uint8, AUTOMATIC) control);
#define Rte_Write_HeaterControlSignal      Rte_Write_PP_MHControl_HeaterControlSignal

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Write_PP_MHControl_HeaterLevel(VAR(AUTOSAR_uint8, AUTOMATIC) level);
#define Rte_Write_HeaterLevel              Rte_Write_PP_MHControl_HeaterLevel

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_RP_NvM_ReadTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_DstPtr );
#define Rte_Call_NvM_ReadTmpHumidValue     Rte_Call_RP_NvM_ReadTmpHumidValue

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Call_PP_NvM_WriteTmpHumidValue( P2VAR(AUTOSAR_uint16, AUTOMATIC) NvM_SrcPtr );
#define Rte_Call_NvM_WriteTmpHumidValue    Rte_Call_RP_NvM_WriteTmpHumidValue


/*----------------------------------------------------------------------------*/
/* Runnables Prototype Declaration                                            */
/*----------------------------------------------------------------------------*/
//extern FUNC(void, RTE_CODE) Rte_InitElectricSeatControl( VAR(void, AUTOMATIC) );
extern FUNC(void, RTE_CODE) Rte_ControlMirrorHeater(VAR(void, AUTOMATIC));

#endif /* RTE_MIRRORHEATERCONTROL_H */

/* End of Rte_MirrorHeaterControk.h */
