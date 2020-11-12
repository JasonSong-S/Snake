/*
 * JR_KeyBoard.c (1.0)
 * 键盘按键检测
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#include<conio.h>  // kbhit(): 检查当前是否有键盘输入
#include "JR_KeyBoard.h"

static int JR_KeyValue = 0xFFFFFFFF; // 当前键值


//检测当前是否有键盘输入，并更新键值JR_KeyValue
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

//返回键值ASCII码  或 对应的自定义键值
int JR_GetKeyNum(void)
{
    return JR_KeyValue;
}

//检测指定键是否有按下
int JR_IsKeyDown(const int key)
{
    return (JR_KeyValue == key);
}






