#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<time.h>
void task5()
{
	int cases = 15;
	int  g,k=15;
	int count = 0;
	for (int i = 0; i < k; i++)
	{
		printf("сколько ящиков взять (max %d)", cases);
		scanf_s("%d", &g);
		if (cases == 0)
			break;
		if (g > cases)
		{
			printf("error\n");
				g = 0;
		}
		else {
			cases = cases - g;
			count++;
			if (cases == 0)
				break;
		}
		
	}
	printf("%d\n", count);
}
void task4()
{
	int people = 1 + rand() % 100;
	int a=30, d=30, s=0,w,g;
	for (int i = 0; i < people; i++)
	{
		int age = 16 + rand() % 59;
		s = s + age;
		w = age;
		if (age < a)
			a = age;
		if (d < age)
			d = age;
		g = s / people;
	}
	printf("%d\n%d\n%d\n",a,d,g);

}
void task3()
{
	float  people = 1 + rand() % 200;
	float  space = 1 + rand() % 200;
	int o = 12;
	float  middle=0;
	float sum = 0;
	float middle1 = 0;
	for (int i = 0; i <= o; i++)
	{
		float  people = 1 + rand() % 2000;
		float  space = 1 + rand() % 200;
		middle = people / space;
		sum = sum + middle;
	}
	middle1 = sum / o;
	printf("%f\n",middle1);
}

void task2()
{
	int  pupils = 10 + rand()%20;

	float sum1 = 0;
	float sum2 = 0;
	float y = 0;

	for (int i = 0; i <= pupils; i++)
	{
		float mark = 1 + rand() % 4;

		sum1 = sum1 + mark;
		y = float(sum1 / pupils);
	}
	printf(" %f\n", y);
	y = 0;

	for (int i = 0; i <= pupils; i++)
	{
		float mark = 1 + rand() % 4;
		sum2 = sum2 + mark;
		y = float (sum2 / pupils);
	}
	printf(" %f\n", y);
}
void task1()
{
	int  sport= 5;

	int sum1 = 0;
	int sum2 = 0;
	

	for (int i = 0; i <= sport; i++)
	{
		int mark = 1 + rand() % 9;

		sum1 = sum1 + mark;

	}
	printf("сумма первого %d\n", sum1);

	for (int i = 0; i <=5; i++)
	{
		int mark = 1 + rand() % 9;
		sum2 = sum2 + mark;
	}
	printf("сумма второго %d\n", sum2);


}









int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}