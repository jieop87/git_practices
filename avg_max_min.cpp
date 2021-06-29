#include <stdio.h>
#define N 10

//平均分
float socre_avg(int *score);
//冒泡排序（升序）
void buble_sort(int *score);
//最大值
float score_max(int *score);
//最小值
float score_min(int *score);

int main(void)
{
	int score[N]={23,18,34,46,51,69,77,83,99,100};
	float avg, max, min;
	avg = socre_avg(score);
	max = score_max(score);
	min = score_min(score);
	
	return 0;
}


float socre_avg(int *score)
{
	float sum=0;
	int i;
	for(i=0; i<N; i++)
	{
		sum += score[i];
	}
	
	return sum/N;
}

void buble_sort(int *score)
{
	int i, j, temp;
	for(i=0; i<N; i++)
	{
		for(j=0; j<=N-i-1; j++ )
		{
			if(score[j]>score[j+1])
			{
				temp = score[j];
				score[j] = score[j+1];
				score[j+1] = temp;
			}
		}
	}
	
	return;
}

float score_max(int *score)
{
	buble_sort(score);
	return score[N-1];
}
float score_min(int *score)
{
	buble_sort(score);
	return score[0];
}













