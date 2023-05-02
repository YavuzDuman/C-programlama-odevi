// 200101031 Yavuz Duman
#include <stdio.h>
#include <math.h>
#define NPEOPLE 20

void readAges(int []);
void printAges(const int []);
float calcMean(const int []);
float calcVariance(const int [],float );
float calcStd(float);
void printStats(float, float, float);
void drawHistogram(const int []);



int main(void)
{
	int ages[NPEOPLE];
    float mean, variance, std;
	readAges(ages);
	printAges(ages);
	mean = calcMean(ages);
	variance = calcVariance(ages, mean);
	std = calcStd(variance);
	printStats(mean, variance, std);
	drawHistogram(ages);
	return 0;
}

void readAges(int ages[])
{
    int age;
    for(int i = 0; i < NPEOPLE; i++){
        printf("Age for %d. person : ", i+1);
        scanf("%d",&age);

        if(age >= 0 && age < 100){
            ages[i] = age;
        }

        else{
            printf("You are not allowed to enter an age that is greater than 99 and less than 0. Please re-enter\n");
            i--;
        }
    }
}

void printAges(const int ages[])
{
    for(int i = 0; i < NPEOPLE; i++){
        printf("%d. person's age is %d\n",i+1,ages[i]);
    }
}

float calcMean(const int ages[])
{
    float sum = 0.0;
    for(int i = 0;i < NPEOPLE; i++){
        sum += ages[i];
    }
    return sum / NPEOPLE;
}

float calcVariance(const int ages[], float mean)
{
    float var = 0.0;
    for(int i = 0; i < NPEOPLE; i++){
        var +=(ages[i] - mean) * (ages[i] - mean);
    }

    return  var / NPEOPLE;
}

float calcStd(float variance)
{
    float sqr = 1, temp = 0;
    for(int i = 0; i < variance+1; i++){
        sqr = (variance/sqr + sqr)/2;
    }
    return sqr;
}

void printStats(float mean, float variance, float std)
{
    printf("\n\n\nhere is the some stats about your data");
    printf("\nmean of the ages is %.2f", mean);
    printf("\nvariance of the ages is %f", variance);
    printf("\nstd of the ages is %f", std);
}

void drawHistogram(const int ages[])
{
    int temp1=0,temp2=0,temp3=0,temp4=0,temp5=0,temp6=0,temp7=0,temp8=0,temp9=0,temp10=0;
    for(int i = 0; i < NPEOPLE; i++){
        if(ages[i] >0 && ages[i] < 10){
            temp1++;
        }
        if(ages[i] >9 && ages[i] < 20){
            temp2++;
        }
        if(ages[i] >19 && ages[i] < 30){
            temp3++;
        }
        if(ages[i] >29 && ages[i] < 40){
            temp4++;
        }
        if(ages[i] >39 && ages[i] < 50){
            temp5++;
        }
        if(ages[i] >49 && ages[i] < 60){
            temp6++;
        }
        if(ages[i] >59 && ages[i] < 70){
            temp7++;
        }
        if(ages[i] >69 && ages[i] < 80){
            temp8++;
        }
        if(ages[i] >79 && ages[i] < 90){
            temp9++;
        }
        if(ages[i] >89 && ages[i] < 100){
            temp10++;
        }
    }
    printf("\n\n\n   0-9 | ");
    for(int i = 0; i < temp1; i++){
        printf("*");
    }
    printf("\n 10-19 | ");
    for(int i = 0; i < temp2; i++){
        printf("*");
    }
    printf("\n 20-29 | ");
    for(int i = 0; i < temp3; i++){
        printf("*");
    }
    printf("\n 30-39 | ");
    for(int i = 0; i < temp4; i++){
        printf("*");
    }
    printf("\n 40-49 | ");
    for(int i = 0; i < temp5; i++){
        printf("*");
    }
    printf("\n 50-59 | ");
    for(int i = 0; i < temp6; i++){
        printf("*");
    }
    printf("\n 60-69 | ");
    for(int i = 0; i < temp7; i++){
        printf("*");
    }
    printf("\n 70-79 | ");
    for(int i = 0; i < temp8; i++){
        printf("*");
    }
    printf("\n 80-89 | ");
    for(int i = 0; i < temp9; i++){
        printf("*");
    }
    printf("\n 90-99 | ");
    for(int i = 0; i < temp10; i++){
        printf("*");
    }
}
