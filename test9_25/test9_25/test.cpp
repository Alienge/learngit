// meanshift_segmentation.cpp : 定义控制台应用程序的入口点。
//

//#include "stdafx.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <cmath>
#define Max_size 1000
using namespace cv;
using namespace std;

typedef struct Data {
	int x;
	int y;

}Data;
//计算二位矩阵的最小值
int MinMaxtrix(int **a, int m, int n)
{
	int i, j, min;
	min = Max_size;
	for(i=0;i<m;i++)
		for (j = 0; j < n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
	return min;
}
//定义一个栈
/*
typedef struct Stack {
	Data data[Max_size];
	int top;
}Stack;
//初始化栈
void init(Stack &stack)
{
	stack.top = -1;
}
int isempty(Stack &stack)
{
	if (stack.top == -1)
		return 1;
	return 0;
}
Data pop(Stack &stack)
{
	Data data;
	if (isempty(stack))
	{
		printf("erorr pop");
		exit(0);
	}
	else {
		data.x = stack.data[stack.top].x;
		data.y = stack.data[stack.top].y;
		stack.top--;
	}
		
}
void push(Stack &stack,Data data)
{
	//栈默认为无穷大，不用检测栈满的情况
	stack.top++;
	stack.data[stack.top].x = data.x;
	stack.data[stack.top].y = data.y;
}



//判断进栈的条件
void condition(Mat img,Stack &stack, int x, int y)
{
	double temp;
	if (x - 1 >= 0 && img.at<Vec3d>(y, x)[0])
	{
	}
}
//============================Meanshift==============================//
*/
int main()
{
	cout << "test";
	Mat sourceimg, targetimg;
	int visit[Max_size][Max_size] = {0};
	int a,b;
	sourceimg = imread("D:/boat.jpg");
	a = sourceimg.at<Vec3b>(1,1)[0];
	cout << a;

	imshow("img", sourceimg);
	waitKey();
	return 0;
}