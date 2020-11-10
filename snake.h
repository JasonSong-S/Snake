/*#ifndef SNAKE_H_INCLUDED
#define SNAKE_H_INCLUDED



#endif // SNAKE_H_INCLUDED*/

/*
 * snake.h (1.0)
 * 贪吃蛇数据结构的声明与定义
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */


#ifndef SNAKE_H
#define SNAKE_H

#include<stdlib.h>
#include "main.h"

// 游戏资源
extern const char *BG;
extern const char *BODY;
extern const char *BODY_HEAD;
extern const char *BODY_FOOD;

typedef struct _SHOWNODE
{
    int x;
    int y;
    char text[3];
}SHOWNODE;

typedef struct _SNAKE
{
    SHOWNODE node;
    struct _SNAKE *next;
}*SNAKE, SNAKENODE;


typedef struct _POINT
{
    int x;
    int y;
    int flag;
}Point;

SHOWNODE FOOD;  //食物
SNAKE pSnakeHead, pSnaleTail;  //蛇节点指针

// 初始化foodpool
void initFoodPool();

// 将食物置为可用
void useFood(int x, int y);

// 将食物置为不可用
void unuseFood(int x, int y);

// 更新foodpool
void updataeFoodPool(void);

// 更新一个食物
void GetFood(void);

// Add Snake Node into link
void AddSNode(SNAKE psa);

// Del Snake Node from link
void DelSNode(void);

//初始化snake链表
void InitSnakke(int n);

// 检测snake合法性
int checkSnake(void);

//清除snake资源
void DeleteSnake(void);

#endif
