/**
 * \file   main.cpp
 * \brief  start application
 * \author Savindra Kumar
 * \version 1.0
 * \date 2024-2024
 * \bugs no known bugs
 * \warning no 
 * \copyright Copyright (c) 2024 by XXX
 * \
 */

//////////////////////////////////////////////////////////////////////
// Copyright (c) 2024 by XXX. This model is the confidential and    //
// proprietary property of XXXX and the possession or use of this    //
// file requires a written license.                                 //
//////////////////////////////////////////////////////////////////////

//includes
#include "Monitor.hpp"

#define DEBUG


namespace Main
{

Monitoring::Monitor monitorObject; 
         
//*****************************************************************************
void main()
{
    bool isSpo2Ok = monitorObject.monitorSp02(); 
      
    if (!isSpo2Ok)
    {
          //notify to hospital staff              
    } 
    
    while(1)
    {
    };
    
}          


} //namespace Monitoring
