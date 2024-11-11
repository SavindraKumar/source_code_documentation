/**
 * \file   monitoring.hpp
 * \brief  Monitor class declaration.
 * \author Savindra Kumar
 * \version 1.0
 * \date 2024 - 2026
 * \bug no known bugs
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
     * \param[in]  adc measurement channel input.
     * \return     SPO2 level in percentage
     */   
    bool getSpo2Reading(uint8_t adcMeasurementChannel, uint16_t *output);

};


/**
 * \class      ControlAlarm
 * \brief      This class control the alarm if patient hear rate goes above a limit
 */
class ControlAlarm
{

public:

    /**
     * \brief      default constructor.
     * \param[in]  None.
     * \return     None.
     */
	ControlAlarm();

    /**
     * \brief      default destructor.
     * \param[in]  None.
     * \return     None.
     */
	~ControlAlarm();

    /**
     * \brief      read heart rate from renesas ADC
     * \param[in]  None.
     * \return     heart rate.
     */
	uint16_t readHearRate();

    /**
     * \brief      control alarm device if heart rate goes above a limit
     * \param[in]  input - test input
     * \returnval true - alarm device activated successfully
     * \returnval false - error while activating alarm device
     */
	bool controlAlarmDevice(uint8_t input);

private:

};


}

#endif
