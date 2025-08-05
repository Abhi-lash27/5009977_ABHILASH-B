#include<stdio.h>

void finaltime(char time[],int hour){
    char converted_time[9];
    
    //extracting first 2 char of time
    int hour_1= time[0] - '0';
    int hour_2 = time[1] - '0';
    hour = hour_1 * 10 + hour_2;
    
    //checking for PM and converting it
    if(time[8]=='P'){
        if(hour != 12){
            hour += 12;
        }
    }else{
        if(hour == 12){
            hour = 0;
        }
    }
    
    //updated each index value
    converted_time[0] = (hour/10)+'0';
    converted_time[1] = (hour%10)+'0';
    converted_time[2] = ':';
    converted_time[3] = time[3];
    converted_time[4] = time[4];
    converted_time[5] = ':';
    converted_time[6] = time[6];
    converted_time[7] = time[7];
    converted_time[8] = '\0';
    
    printf("%s",converted_time);
}
int main(){
    char time[11];
    int hour;
    scanf("%s",time);
    finaltime(time,hour);
    return 0;
}
