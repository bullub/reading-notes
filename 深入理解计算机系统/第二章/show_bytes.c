#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void _show_bytes(byte_pointer start, int len) {
	int i;

	for(i = 0; i < len; i ++) {
		printf("%.2x ", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	_show_bytes((byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	_show_bytes((byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	_show_bytes((byte_pointer) &x, sizeof(void *));
}


void show_bytes(int val)
{
	int ival = val;
	float fval = (float) val;
	int *pval = &ival;
	show_int(ival);
	show_float(fval);
	show_pointer(pval);
}

int main(int argc, char const *argv[])
{
	// input 0x00003039
	// show_bytes(0x00003039);
	// print 
	// 39 30 00 00 
	// 00 e4 40 46 
	// d8 48 91 5f ff 7f 00 00

	// running on mac os x, 可以看出mac os x数据使用的是 '小端表示法'


	// int val = 0x87654321;
	// byte_pointer valp = (byte_pointer) &val;

	// _show_bytes(valp, 1);
	// _show_bytes(valp, 2);
	// _show_bytes(valp, 3);

	const char *str = "abcdef";
	// printf("%lu\n", sizeof(str));
	printf("%lu\n", strlen(str));
	_show_bytes((byte_pointer) str, strlen(str));
	return 0;
}