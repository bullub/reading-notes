#include <stdio.h>

void inplace_swap(int *x, int *y) {
	printf("(start) x = %d,y = %d\n", *x, *y);
	printf("(start) &x = %p,&y = %p\n", x, y);
	*y = *x ^ *y;
	printf("1) x = %d,y = %d\n", *x, *y);
	printf("1) &x = %p,&y = %p\n", x, y);
	*x = *x ^ *y;
	printf("2) x = %d,y = %d\n", *x, *y);
	printf("2) &x = %p,&y = %p\n", x, y);
	*y = *x ^ *y;
	printf("3) x = %d,y = %d\n", *x, *y);
	printf("3) &x = %p,&y = %p\n", x, y);
}

void reverse_array(int a[], int cnt) {
	int first, last;

	for(first = 0, last = cnt - 1;
		first <= last;
		first ++, last --) {
		inplace_swap(&a[first], &a[last]);
	}

}

int main(int argc, char const *argv[])
{
	int a[] = {1,2,3,4};
	int aLen = sizeof(a)/sizeof(int);


	reverse_array(a, aLen);

	for(int i = 0; i < aLen; i ++) {
		printf("%d, ", a[i]);
	}

	printf("\n");

	//当数组中元素个数为奇数个的时候，则中间的元素会变成0，原因是：
	//当使用inplace_swap时，两个完全相同的数异或为0，且他们又处于同一地址，当执行完第一步时
	//两个数(指针变量)的共享(共同指向)的地址就已经被修改成他们存放的值的异或结果(0)
	int b[] = {1,2,3,4,5};
	int bLen = sizeof(b)/sizeof(int);


	reverse_array(b, bLen);

	for(int i = 0; i < bLen; i ++) {
		printf("%d, ", b[i]);
	}

	printf("\n");

	return 0;
}