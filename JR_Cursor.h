/*#ifndef JR_CURSOR_H_INCLUDED
#define JR_CURSOR_H_INCLUDED



#endif // JR_CURSOR_H_INCLUDED*/


/*
 * JR_Cursor.h (1.0)
 * Console ���Ĳ���
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#ifndef JR_CURSOR_H
#define JR_CURSOR_H

#define MAXCOL 79

//������Ƶ�ָ��λ��
void JR_SetCursor(int x,int y);

//������Ƶ����Ͻ�
void JR_SetCursorStart();

/* ����������ƶ�N�� */
void JR_SetCursorLeft(int n);

//����������ƶ�N��
void JR_SetCursorRight(int n);

//����������ƶ�N��
void JR_SetCursorUp(int n);

//����������ƶ�N��
void JR_SetCursorDown(int n);

#endif






