/*
【问题描述】对给定的两组数（每组数包括2个整数），分别计算出两组数的最大公约数和最小公倍数的和。如: 20、12为第一组，28、7为第二组。第一组数的最大公约数为4，最小公倍数为60；第二组数的最大公约数为7，最小公倍数为28；所以两组数的最大公约数之和为11，两组数的最小公倍数之和为88。要求最大公约数和最小公倍数分别由功能函数完成。
【输入形式】输入包括两行，每行为一组，每组两个整数。
【输出形式】输出包括两行，第一行为两组数的最大公约数之和，第二行为两组数的最小公倍数之和。
【样例输入】20 12
28  7
【样例输出】11
88
【样例说明】这两组数的最大公约数之和为11，最小公倍数之和为88。(注意: 输出的两个数每个数后面均以换行符结束。
*/
#include<stdio.h>

int main() {
	int In_x[2], In_y[2];
	int temp_x[2] = { 0 }, temp_y[2] = { 0 }, sum[2];
	int i, temp;
	scanf("%d%d%d%d", &In_x[0], &In_x[1], &In_y[0], &In_y[1]);
	if (In_x[0] > In_x[1]) {
		temp = In_x[0];
		In_x[0] = In_x[1];
		In_x[1] = temp;
	}
	if (In_y[0] > In_y[1]) {
		temp = In_y[0];
		In_y[0] = In_y[1];
		In_y[1] = temp;
	}
	for (i = In_x[0]; i > 0; i--) { //x最大公约数 
		if (In_x[0] % i == 0 && In_x[1] % i == 0) {
			temp_x[0] = i; //获取最大公约数 
			break;
		}
	}
	for (i = In_x[1]; i > 0; i++) { //x最小公倍数 
		if (i % In_x[0] == 0 && i % In_x[1] == 0) {
			temp_x[1] = i; //获取最小公倍数 
			break;
		}
	}
	for (i = In_y[0]; i > 0; i--) { //y最大公约数 
		if (In_y[0] % i == 0 && In_y[1] % i == 0) {
			temp_y[0] = i; //获取最大公约数 
			break;
		}
	}
	for (i = In_y[1]; i > 0; i++) { //y最小公倍数 
		if (i % In_y[0] == 0 && i % In_y[1] == 0) {
			temp_y[1] = i; //获取最小公倍数 
			break;
		}
	}
	sum[0] = temp_x[0] + temp_y[0]; //最大公约数之和 
	sum[1] = temp_x[1] + temp_y[1]; //最小公倍数之和
	printf("%d\n%d\n", sum[0], sum[1]);
	return 0;
}
