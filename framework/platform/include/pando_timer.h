/*********************************************************
 * File name: pando_timer.h
 * Author: xiaoxiao
 * Versions: 1.0
 * Description: declare the types.
 * History:
 *   1.Date: Oct 28, 2015
 *     Author: xiaoxiao
 *     Modification:
 *********************************************************/

#ifndef _PANDO_TIMER_H_
#define _PANDO_TIMER_H_

#include "pando_types.h"

//define the timer structure
struct pd_timer
{
    //the timer interval (millisecond)
    uint16_t interval;
    //whether repeat
    uint8_t repeated;
    //the function pointer to callback if expiry
    void (*expiry_cb)(void);
};

//define the timer no used
enum TIMER_NO
{
    TIMER_1 = 1,
    TIMER_2 = 2,
    TIMER_3 = 3,
}

/******************************************************************************
 * FunctionName : timer_init
 * Description  : init timer.
 * Parameters   : timer_no: the timer indicator.
                  timer_cfg: the config timer.
 * Returns      : 
 ******************************************************************************/
void timer_init(TIMER_NO timer_no, struct pd_timer timer_cfg);

/******************************************************************************
 * FunctionName : timer_start
 * Description  : start timer.
 * Parameters   : timer_no: the timer indicator.
 * Returns      : 
 ******************************************************************************/
void timer_start(TIMER_NO timer_no);

/******************************************************************************
 * FunctionName : timer_stop
 * Description  : stop timer.
 * Parameters   : timer_no: the timer indicator.
 * Returns      : 
 ******************************************************************************/
void timer_stop(TIMER_NO timer_no);

#endif /* _PANDO_TIMER_H_ */
