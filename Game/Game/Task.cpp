#include "stdafx.h"
#include "Task.h"
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

Task::Task()
{

}

Task::Task(int n, int m)
{
	N = n; M = m;
	B = gcnew array<int, 2>(N, M);
	for (int i=  0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				B[i, j] = 0;
			}
		}
	CN = 0; F=0;
}

void Task::Check(array<int, 2> ^Balls, int x, int y)
{
	if (F == 1) return;
	B[x, y] = 1;
	if (Balls[x, y] == NumOfColors + 2)
	{
		for (int i=  0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				B[i, j] = 0;
			}
		}
		F=1;
		return;
	}
	if (Balls[x, y] == NumOfColors + 1) return;
	if (Balls[x, y] == 0) return;
	if (B[x, y + 1] == 0) Check(Balls, x, y + 1); 
	if (B[x + 1, y + 1] == 0) Check(Balls, x + 1, y + 1); 
	if (B[x + 1, y] == 0) Check(Balls, x + 1, y); 
	if (B[x, y - 1] == 0) Check(Balls, x, y - 1); 
	if (B[x - 1, y - 1] == 0) Check(Balls, x - 1, y - 1); 
	if (B[x - 1, y] == 0) Check(Balls, x - 1, y); 
}

bool Task::Check2(array<int, 2> ^Balls, int x, int y)
{
	if (Balls[x, y + 1] != 0 && Balls[x, y + 1] != NumOfColors+1) return 1;
	if (Balls[x + 1, y + 1] != 0 && Balls[x + 1, y + 1] != NumOfColors+1) return 1;
	if (Balls[x + 1, y] != 0 && Balls[x + 1, y] != NumOfColors+1) return 1;
	if (Balls[x, y - 1] != 0 && Balls[x, y - 1] != NumOfColors+1) return 1;
	if (Balls[x - 1, y - 1] != 0 && Balls[x - 1, y - 1] != NumOfColors+1) return 1;
	if (Balls[x - 1, y] != 0 && Balls[x - 1, y] != NumOfColors+1) return 1;
	return 0;
}

void Task::CheckColor(array<int, 2> ^Balls, int x, int y, int c)
{
	if (Balls[x, y] !=c) return;
	else
	{
		B[x, y] = 1; 
		CN++;
		if (B[x, y + 1] == 0) CheckColor(Balls, x, y + 1, c); 
		if (B[x + 1, y + 1] == 0) CheckColor(Balls, x + 1, y + 1, c); 
		if (B[x + 1, y] == 0) CheckColor(Balls, x + 1, y, c); 
		if (B[x, y - 1] == 0) CheckColor(Balls, x, y - 1, c); 
		if (B[x - 1, y - 1] == 0) CheckColor(Balls, x - 1, y - 1, c); 
		if (B[x - 1, y] == 0) CheckColor(Balls, x - 1, y, c); 
	}
	
}

void Task::Destroy(array<int, 2> ^Balls)
{
	final1=0;
	CN = 0;
	for (int i=  0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (B[i, j] == 1) 
			{
				Balls[i, j] = 0;
				B[i, j] = 0;
			}
			if (Balls[i, j]<=6) final1+=Balls[i, j];
		}
	}
}

bool Task:: CheckColor2(array<int, 2> ^Balls, int c)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (Balls[i, j] == c) return 1;
		}
	}
	return 0;
}