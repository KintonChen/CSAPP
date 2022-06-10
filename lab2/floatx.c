#include<stdio.h>
#include<stdlib.h>
#include<float.h>
#include <math.h>
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start, size_t len) {
	size_t i;
	for (i = 0; i < len; i++) {
		printf("%.2x", start[i]);
	}
	printf("\n");
}
void show_float(float x) {
	show_bytes((byte_pointer)&x, sizeof(float));
}

int main()
{
	float p0, n0, minf, maxf, minpsf, pnan, nan;
	char* z;
	z = (char*)& p0;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b00000000;
	printf("+0  %f",p0);
	printf("\n");

	z = (char*)& n0;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b10000000;
	printf("-0  %f",n0);
	printf("\n");

	z = (char*)& minf;
	*z = 0b00000001;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b00000000;
	*(z + 3) = 0b00000000;
	printf("��С��������  %.46f",minf);
	printf("\n");

	z = (char*)& maxf;
	*z = 0b11111111;
	*(z + 1) = 0b11111111;
	*(z + 2) = 0b01111111;
	*(z + 3) = 0b01111111;
	printf("��󸡵�����  %f",maxf);
	printf("\n");


	z = (char*)& minpsf;
	*z = 0b00000001;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b10000000;
	*(z + 3) = 0b00000000;
	printf("��С���淶������  %.39f",minpsf);
	printf("\n");


	z = (char*)& pnan;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b10000000;
	*(z + 3) = 0b01111111;
	printf("�������  %f",pnan);
	printf("\n");


	z = (char*)& nan;
	*z = 0b00000000;
	*(z + 1) = 0b00000000;
	*(z + 2) = 0b11100101;
	*(z + 3) = 0b01111111;
	printf("nan  %f",nan);
	printf("\n");

	printf("����16�������Ϊ��\n");
	printf("+0:");
	show_float(p0);
	printf("-0:");
	show_float(n0);
	printf("��С��������:");
	show_float(minf);
	printf("��󸡵�����:");
	show_float(maxf);
	printf("��С�������:");
	show_float(minpsf);
	printf("�������:");
	show_float(pnan);
	printf("Nan:");
	show_float(nan);
	return 0;
}
