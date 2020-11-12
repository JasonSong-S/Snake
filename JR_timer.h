/*#ifndef JR_TIMER_H_INCLUDED
#define JR_TIMER_H_INCLUDED



#endif // JR_TIMER_H_INCLUDED*/

/*
 * JR_timer.h (1.0)
 * 单线程中的定时器
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#ifndef JR_TIMER_H
#define JR_TIMER_H

// 获取cpu时间ms
unsigned long JR_GetTicks(void);

// 启动计时器
void startTimer(void);

// 停止计时器
void stopTimer(void);

//设定计时器间隔
void setTimer(int ms);

// 每个Interval触发一次
void ontimer(void);
#endif // JR_TIMER_H_INCLUDED


