#pragma once
ref class Task
{
public:
	int N, M, NumOfColors, CN, F, Level, final1;
	array<int, 2> ^B;
	Task(int n, int m);
	Task();
	void Check(array<int, 2> ^Balls, int x, int y);
	bool Check2(array<int, 2> ^Balls, int x, int y);
	void CheckColor(array<int, 2> ^Balls, int x, int y, int c);
	bool CheckColor2(array<int, 2> ^Balls, int c);
	void Destroy(array<int, 2> ^Balls);
};

