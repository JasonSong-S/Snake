/*#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED



#endif // MAIN_H_INCLUDED*/

/*
 * main.h (1.0)
 * ̰������Ϸ��Դ�����ݽṹ�������Ͷ���
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */
    // �����е���˼��֪����ɶ������  ������ͷ�ļ��ĸ�ʽ��
 #ifndef MAIN_H
 #define MAIN_H

   // �����Լ�д�ĸ���ͷ�ļ���JR �����������ߵ����֣�
 #include "JR_timer.h"  // ��ʱ��
 #include "JR_Random.h" // �������ʳ��ĵط�
 #include "JR_Cursor.h"  //
 #include "JR_KeyBoard.h"
 #include "snake.h"

 //������
#define ROW 20
#define COL 20

//��Ϸ״̬
typedef enum _STATUS
{
    WELCOME, GAMING, DIE, PAUSE, STOP
}STATUS;

// ����
typedef enum _DIRECTION
{
    UP, DOWM, LEFT, RIGHT
}DIRECTION;

#endif


