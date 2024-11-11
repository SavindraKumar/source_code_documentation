/**
 * \file   monitoring.cpp
 * \brief  Monitor class implementation.
 * \author Savindra Kumar
 * \version 1.0
 * \date 2024-2024
 * \bugs no known bugs
 * \warning no 
 * \copyright Copyright (c) 2024 by XXX
 * \
 */

//includes
#include "Monitor.hpp"
#include "Assert.hpp"


namespace Monitoring
{

//*****************************************************************************
Monitor::Monitor()
{
}

//*****************************************************************************
Monitor::~Monitor()
{
}


//*****************************************************************************
bool Monitor::monitorSp02()
{
     bool result = false;
     uint16_t spo2InPercentage = getSpo2Reading();
     
     if (spo2InPercentage < SPO2_LIMIT)
     {
         result = true;
     }
     
     return result;
}

//*****************************************************************************
uint16_t Monitor::getSpo2Reading()
{
    uint16_t spo2Level = 0;
    
    //access low level ADC drives to read spo2
    
    //convert into percentage
    
    return spo2Level;
                        
}

} //namespace Monitoring
