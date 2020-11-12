/*#ifndef JR_RANDOM_H_INCLUDED
#define JR_RANDOM_H_INCLUDED



#endif // JR_RANDOM_H_INCLUDED*/

/*
 * JR_Random.h (1.1)
 * 随机数
 *
 * By Jason song
 * learning from By Eric-JR Chen
 * diamont 1001@163.com
 */

#ifndef JR_RANDOM_H
#define JR_RANDOM_H

// 取随机数
int JR_random(void);

// 取0到max的随机数 [0,max]
int JR_randomIn(int max);

// 取指定范围的随机数 [min,max]
int JR_randomrRange(int min,int max);

#endif



