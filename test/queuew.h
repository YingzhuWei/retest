#ifndef queuew_h
#define queuew_h
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;
typedef struct Duque{
	dataType data;
	struct Duque *left, *right;
}Deque;

//创建双端队列
Deque* createDeque();
//求双端队列的元素个数
int size(Deque* dq);
//判断端队列是否为空
int empty(Deque* dq);
//取队头元素
dataType front(Deque* dq);
//取队尾元素
dataType back(Deque* dq);
//在队头插入元素X
void push_front(Deque* dq, dataType x);
//在队尾插入元素X
void push_back(Deque* dq, dataType x);
//删除队头元素
void pop_front(Deque* dq);
//删除队尾元素
void pop_back(Deque* dq);
//清空双端队列的所有元素
void clear(Deque* dq);
//输出双端队列的所有元素
void print(Deque* dq);

#endif

/*
//初始化队列
LinkQueue* initQueue();
//判断队列是否为空
int Empty(LinkQueue *q);
//元素x进队列
void push(LinkQueue *q, dataType x);
//出队列
void pop(LinkQueue *);
//取队头元素的值
dataType front(LinkQueue *q); 
//取队为元素的值
dataType back(LinkQueue *q); 
//计算队列的大小
int size(LinkQueue *q);

#endif
*/

