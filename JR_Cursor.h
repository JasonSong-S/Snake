/*#ifndef JR_CURSOR_H_INCLUDED
#define JR_CURSOR_H_INCLUDED



#endif // JR_CURSOR_H_INCLUDED*/


/*
 * JR_Cursor.h (1.0)
 * Console 光标的操作
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#ifndef JR_CURSOR_H
#define JR_CURSOR_H

#define MAXCOL 79

//将光标移到指定位置
void JR_SetCursor(int x,int y);

//将光标移到左上角
void JR_SetCursorStart();

/* 将光标向左移动N列 */
void JR_SetCursorLeft(int n);

//将光标向右移动N列
void JR_SetCursorRight(int n);

//将光标向上移动N行
void JR_SetCursorUp(int n);

//将光标向下移动N行
void JR_SetCursorDown(int n);

#endif






