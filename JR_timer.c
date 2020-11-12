/*
 * JR_timer.c (1.0)
 * ���߳��еĶ�ʱ��
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#include"JR_timer.h"

// do something here
// define in main.c

extern void mainTimer();

static unsigned long JR_next_time=0xFFFFFFFF;
static unsigned long JR_Interval=1000; // ��ʱ���������λms, Ĭ������


// ��ȡcpuʱ��ms
unsigned long JR_GetTicks(void)
{
    return clock();
}

// ������ʱ��
void startTimer(void)
{
    JR_next_time=JR_GetTicks() + JR_Interval;
}

// ֹͣ��ʱ��
void stopTimer(void)
{
    JR_next_time = 0xFFFFFFFF;
}

//�趨��ʱ�����
void setTimer(int ms)
{
    JR_Interval=ms;
}

// ÿ��Interval����һ��
void ontimer(void)
{
    if (JR_next_time > JR_GetTicks()) return;

    JR_next_time += JR_Interval;
    mainTimer();
}


