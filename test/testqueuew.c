#include "queuew.h"

int main(){
	Deque *dq = createDeque();
	push_back(dq, 30);
	push_front(dq, 40);
	push_back(dq, 50);
	push_front(dq, 60);
	pop_back(dq);
	print(dq);
}
/*
LinkQueue queue, *q=&queue;
        initQueue(q);
        push(q, 80);
        push(q, 90);
        pop(q);
        push(q, 70);
        printf("队列的元素个数为：%d\n", size(q));
        printf("队头的元素为：%d\n", front(q));
        printf("对尾的元素为", back(q));

	return 0;
}
*/
