/*#ifndef JR_TIMER_H_INCLUDED
#define JR_TIMER_H_INCLUDED



#endif // JR_TIMER_H_INCLUDED*/

/*
 * JR_timer.h (1.0)
 * ���߳��еĶ�ʱ��
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#ifndef JR_TIMER_H
#define JR_TIMER_H

// ��ȡcpuʱ��ms
unsigned long JR_GetTicks(void);

// ������ʱ��
void startTimer(void);

// ֹͣ��ʱ��
void stopTimer(void);

//�趨��ʱ�����
void setTimer(int ms);

// ÿ��Interval����һ��
void ontimer(void);
#endif // JR_TIMER_H_INCLUDED


