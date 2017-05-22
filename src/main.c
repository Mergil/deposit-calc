#include <stdio.h>
#include "deposit.h"

int main()
{
     int days, vklad;
     printf("Введите дни вклада и сам вклад!\n:");
     scanf("%d %d",&days, &vklad);
     if (days<= 365 && vklad>=10000){
     	vklad= calc_low_days(vklad, days);
     	
     	if (vklad<=100000){
     		vklad = low_then_100000(vklad, days);
     	}
     	if (vklad>100000){
     		vklad = calc_more_100000 (vklad, days);
     	}
     	
     	printf("Ваш вклад равен= %d", vklad);
    }
    else {
     printf("Ошибка!");
     }
return 0;
}