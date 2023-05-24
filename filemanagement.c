#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fptr;
    fptr=fopen("company.txt","a");
    float salary,max_days=30,days,over_time,e=240;
    max_days=30;
    e=240;
    char name[100];
    
    printf("enter the name:");
    gets(name);
    printf("salary of the employ ");
    scanf("%f",&salary);
    printf("days of the employ ");
    scanf("%f",&days);
    printf("over time of the employ ");
    scanf("%f",&over_time);
    fprintf(fptr,"name:%s\n",name);
    fprintf(fptr,"salary:%.2f\n",salary);
    fprintf(fptr,"days %.2f\n",days);
    fprintf(fptr,"over time %.2f\n",over_time);
    fprintf(fptr,"salary of the days %.2f\n",(salary/max_days)*days);
    fprintf(fptr,"slary of overtime %.2f\n",(salary/e)*over_time);
    fprintf(fptr,"month income %.2f\n",salary/max_days*days+salary/e*over_time);
    
    fclose(fptr);
    
    



    return 0;

}