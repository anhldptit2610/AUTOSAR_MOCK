#include "IoHwAb_TemperatureSensor.h"

FUNC(Std_ReturnType, AUTOMATIC) Hdc1080_Read_Data(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) tempData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to tempData
    return ret;
}

FUNC(Std_ReturnType, AUTOMATIC) Ath10_Read_Data(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) tempData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to tempData
    return ret;
}

FUNC(Std_ReturnType, AUTOMATIC) Am2320_Read_Data(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) tempData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to tempData
    return ret;
}
FUNC(Std_ReturnType, AUTOMATIC) Hdc2010_Read_Data(P2VAR(AUTOSAR_uint16, AUTOMATIC, RTE_APPL_DATA) tempData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to tempData
    return ret;
}


FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_TempSensor_ReadData(VAR(TempSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC) data)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;

    switch (id) {
    case TEMP_SENSOR_HDC1080:
        ret = Hdc1080_Read_Data(data);
        break;
    case TEMP_SENSOR_ATH10:
        ret = Ath10_Read_Data(data);
        break;
    case TEMP_SENSOR_AM2320:
        ret = Am2320_Read_Data(data);
        break; 
    case TEMP_SENSOR_HDC2010:
        ret = Hdc2010_Read_Data(data);
        break; 
    default:
        break;
    }
    return ret;
}