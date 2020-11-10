/*#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED



#endif // MAIN_H_INCLUDED*/

/*
 * main.h (1.0)
 * 贪吃蛇游戏资源、数据结构的声明和定义
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */
    // 这两行的意思不知道是啥？？？  可能是头文件的格式吧
 #ifndef MAIN_H
 #define MAIN_H

   // 导入自己写的各个头文件，JR 可能来自作者的名字，
 #include "JR_timer.h"  // 计时器
 #include "JR_Random.h" // 随机产生食物的地方
 #include "JR_Cursor.h"  //
 #include "JR_KeyBoard.h"
 #include "snake.h"

 //界面规格
#define ROW 20
#define COL 20

//游戏状态
typedef enum _STATUS
{
    WELCOME, GAMING, DIE, PAUSE, STOP
}STATUS;

// 方向
typedef enum _DIRECTION
{
    UP, DOWM, LEFT, RIGHT
}DIRECTION;

#endif


