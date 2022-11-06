#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h> // 断言，判断指针是否为空

// 结构体
struct Node
{
	int data;
	struct Node* next;
};


int main(void)
{
	int* p = (int*)malloc(sizeof(int));
	int* p1 = NULL;
	assert(p1);
	*p = 1;
	int a = *p;

	printf("%d\n", *p);
	printf("%d\n", a);

	return 0;
}
