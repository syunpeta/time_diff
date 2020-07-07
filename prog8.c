#include<stdio.h>

int time(int hh,int mm,int ss);
void hhmmss(int total,int *hh,int *mm, int *ss);

int main(void){
    int time_a,time_b,hh,mm,ss,total;

    printf("time_aのhh,mm,ssを入力してください。(スペースを開けて横並べに)");
    scanf("%d %d %d",&hh,&mm,&ss);

    time_a=time(hh,mm,ss);

    printf("time_bのhh,mm,ssを入力してください。(スペースを開けて横並びに)");
    scanf("%d %d %d",&hh,&mm,&ss);

    time_b=time(hh,mm,ss);

    if(time_a>=time_b){
        total=time_a-time_b;
    }
    else{
        total=time_b-time_a;
    }
    
    
    hhmmss(total,&hh,&mm,&ss);

    printf("time_aとtime_bは%d時間%d分%d秒の差がありました。",hh,mm,ss);

    return 0;



    

}


int time(int hh,int mm,int ss){
    int total;
    total=hh*3600+mm*60+ss;

    return total;

}

void hhmmss(int total,int *hh,int *mm,int *ss){
    *hh=total/3600;
    *mm=(total%3600)/60;
    *ss=total-*mm*60-*hh*3600;

    return ;

}