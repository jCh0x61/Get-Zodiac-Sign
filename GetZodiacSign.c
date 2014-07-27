#include <stddef.h>
#include <stdio.h>
#include <conio.h>

int i=0,j=0,N=0;

struct sDate {
    int  day;
    int  month;
};

struct signeAstro {
       struct sDate dateS;
       struct sDate dateE;
       char signe[13];
};

struct signeAstro DMA [12]={
	{20,03,18,04,"Aries"},{19,04,19,05,"Taurus"},{20,05,20,06,"Gemini"},{21,06,21,07,"Cancer"},{22,07,21,8,"Leo"},  {22,8,21,9,"Virgo"},
	{22,9,22,10,"Libra"},{23,10,21,11,"Scorpio"}, {22,11,20,12,"Sagittarius"},{21,12,18,01,"Capricorn"},{19,01,17,02,"Aquarius"}, {18,02,20,03,"Pisces"}
};
 
int main(){    

    struct sDate s[N];
    
    printf("Enter your day of birth: ");
    scanf("%d",&s[0].day);
       
    printf("Enter your month of birth: ");
    scanf("%d",&s[0].month);
    printf("\n");

    if (s[0].day>=32) {
       printf("Error : The day should not be greater than 31");    
    } else if (s[0].month>=13) {
       printf("Error : The month should not be greater than 12");    
    } else {
        for (j=0;j<12;j++){
            if (s[0].month==DMA[j].dateS.month || s[0].month==DMA[j].dateE.month){                              
               if (s[0].day >= DMA[j].dateS.day  && s[0].month==DMA[j].dateS.month 
                  || s[0].day <= DMA[j].dateE.day && s[0].month==DMA[j].dateE.month){                         
                     printf("Your zodiac sign is : %s. \n",DMA[j].signe);    
                     break;
               }
            }  
        }     
    }                                      
    getch();
}
