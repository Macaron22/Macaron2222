#include<stdio.h>
int main()
{
    char name[50];
    float cal, phy, sci, avg;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your Calculus: ");
    scanf("%f", &cal);

    printf("Enter your Physic score: ");
    scanf("%f", &phy);

    printf("Enter your Science score: ");
    scanf("%f", &sci);

    avg = (cal + phy + sci) / 3.0;

    printf("%s Kha,your average is %.2f. You got grade ", name, avg);
    
    if (avg >= 80)
    {
        printf("A.\n");    
    } else if (avg >= 70)
    {
        printf("B.\n");
    } else if (avg >= 60)
    {
        printf("C.\n");
    } else if (avg >= 50)
    {
        printf("D.\n");
    } else
    {
        printf("F.\n");
    }
    
    return 0;
}