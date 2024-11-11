/**
 * \file   monitoring.hpp
 * \brief  Monitor class declaration.
 * \author Savindra Kumar
 * \version 1.0
 * \date 2024-2024
 * \bugs no known bugs
 * \warning no 
 * \copyright Copyright (c) 2024 by XXX
 * \
 */

#ifndef MONITORING_HPP
#define MONITORING_HPP

//includes
#include <stdint.h>



/**
 * \brief      Monitoring namespace contains patient vitals monitoring 
 *             related source files
 * \details    This module contains source files for patient temperature, SP02,
 *             heart rate monitoring
 */
namespace Monitoring 
{

/**
 * \class      Monitor
 * \brief      This class monitor patient vitals and alert if it goes 
 *             beyond a limit
 */
class Monitor
{
public:

    /**
     * \brief      patient crtical SPO2 level limit.
     */
    static const uint16_t SPO2_LIMIT = 80;
    
    /**
     * \brief      Contructor.
     * \param[in]  None.
     * \return     None.
     */ 
    Monitor();
    
    /**
     * \brief      destructor.
     * \param[in]  None.
     * \return     None.
     */ 
    virtual ~Monitor();    

    /**
     * \brief      Monitor.
     * \param[in]  None.
     * \return     false - spo2 level not ok and below SPO2_LIMIT.
     *             true - spo2 level ok
     */    
    bool monitorSp02();
    
private:

   /**
     * \brief      getSPO2 reading from sensor.
     * \param[in]  None.
     * \return     SPO2 level in percentage
     */   
    uint16_t getSpo2Reading();

};
}

#endif
