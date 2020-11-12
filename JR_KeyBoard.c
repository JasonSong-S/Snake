/*
 * JR_KeyBoard.c (1.0)
 * ���̰������
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#include<conio.h>  // kbhit(): ��鵱ǰ�Ƿ��м�������
#include "JR_KeyBoard.h"

static int JR_KeyValue = 0xFFFFFFFF; // ��ǰ��ֵ


//��⵱ǰ�Ƿ��м������룬�����¼�ֵJR_KeyValue
int JR_AnyKeys(void)
{
    if(kbhit())
    {
        JR_KeyValue=getch();
        if (JR_KeyValue == JR_KEY_PRE_F)
        {
            JR_KeyValue=JR_KEY_PRE_F - getch();
        }
        else if (JR_KeyValue == JR_KEY_PRE_DIR)
        {
            JR_KeyValue=224000+getch();
        }
        return 1;
    }
    JR_KeyValue=0xFFFFFFFF;
    return 0;
}

//���ؼ�ֵASCII��  �� ��Ӧ���Զ����ֵ
int JR_GetKeyNum(void)
{
    return JR_KeyValue;
}

//���ָ�����Ƿ��а���
int JR_IsKeyDown(const int key)
{
    return (JR_KeyValue == key);
}






