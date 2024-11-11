/**
 * \file   Assert.hpp
 * \brief  trap errors in the code
 * \author Savindra Kumar
 * \version 1.0
 * \date 2024-2024
 * \bugs no known bugs
 * \warning no 
 * \copyright Copyright (c) 2024 by XXX
 * \
 */

#ifndef ASSERT_HPP
#define ASSERT_HPP

#ifdef DEBUG
#define assert(expr)   do { \
                             if ( !(expr) )\
                             {\
                                 for(;;);\
                             }\
                         }while(0)
#else
#define assert(expr)	( (void) 0)
#endif

#endif
