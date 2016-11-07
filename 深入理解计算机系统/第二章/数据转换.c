#include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	//short int 为16位
// 	//有符号数的-12345在计算机中补码为0xCFC7-->1100 1111 1100 0111
// 	short int v = -12345;

// 	//强制类型转换，字节位都不会发生变化，因此无符号数的 0xCFC7 = 12*16^3 + 15 * 16^2 + 12 * 16 + 7 = 53191
// 	unsigned short uv = (unsigned short) v;

// 	printf("v = %d, uv = %u\n", v, uv);


// 	return 0;
// }
// 
// 

int main(int argc, char const *argv[])
{
	//最大的无符号整数为全一
	unsigned u 	= 4294967295u;

	//有符号整数的全一，其实是-1的补码
	int tu = (int) u;
	
	printf("u = %u, tu = %d\n", u, tu);

	return 0;
}