#include "IoHwAb_HumiditySensor.h"

FUNC(Std_ReturnType, AUTOMATIC) Dht22_Read_Data(VAR(AUTOSAR_uint16, AUTOMATIC) humiData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to humiData
    return ret;
}

FUNC(Std_ReturnType, AUTOMATIC) Hdc1080_Read_Data(VAR(AUTOSAR_uint16, AUTOMATIC) humiData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to humiData
    return ret;
}

FUNC(Std_ReturnType, AUTOMATIC) Htu21d_Read_Data(VAR(AUTOSAR_uint16, AUTOMATIC) humiData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to humiData
    return ret;
}

FUNC(Std_ReturnType, AUTOMATIC) Sht31_Read_Data(VAR(AUTOSAR_uint16, AUTOMATIC) humiData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;
    // do something, send data to humiData
    return ret;
}

FUNC(Std_ReturnType, AUTOMATIC) IoHwAb_HumiSensor_ReadData(VAR(TempSensor, AUTOMATIC) id, P2VAR(AUTOSAR_uint16, AUTOMATIC) humiData)
{
    VAR(Std_ReturnType, AUTOMATIC) ret = E_OK;

    switch (id) {
    case HUMI_SENSOR_DHT22:
        ret = Dht22_Read_Data(data);
        break;
    case HUMI_SENSOR_HDC1080:
        ret = Hdc1080_Read_Data(data);
        break;
    case HUMI_SENSOR_HTU21D:
        ret = Htu21d_Read_Data(data);
        break; 
    case HUMI_SENSOR_SHT31:
        ret = Sht31_Read_Data(data);
        break; 
    default:
        break;
    }
    return ret;
}