#include <stdio.h>

int main()
{
	int days;
	int vklad;
	int itog;
	int money;
		printf("Введите дни вклада, не более 365\n");
		scanf("%d", &days);
		printf("Введите сумму вклада мин.10к рублей\n");
		scanf("%d", &vklad);
			if (days<=30 && vklad<100000 )
			{
			itog=(vklad)*0.9;
			money=itog-vklad;
			printf("Убыток %d\n", money);
			printf("Итог=%d", itog);
			}
			if (days<=30 && vklad>100000 )
			{
			itog=(vklad)*0.9;
			money=itog-vklad;
            printf("Убыток %d\n", money);
			printf("Итог=%d", itog);
			}	
			if (days>=31 && days<=120 && vklad<100000 )
            {
            itog=(vklad)*1.02;
            money=itog-vklad;
            printf("Доход %d\n", money);
            printf("Итог=%d", itog);
            }
            if (days>=31 && days<=120 && vklad>100000 )
            {
            itog=(vklad)*1.03;
            money=itog-vklad;
            printf("Доход %d\n", money);
            printf("Итог=%d", itog);
            }
            if (days>=121 && days<=240 && vklad<100000 )
            {
            itog=(vklad)*1.06;
            money=itog-vklad;
            printf("Доход %d\n", money);
            printf("Итог=%d", itog);
            }
            if (days>=121 && days<=240 && vklad>100000 )
            {
            itog=(vklad)*1.08;
            money=itog-vklad;
            printf("Доход %d\n", money);
            printf("Итог=%d", itog);
            }
			if (days>=241 && days<=365 && vklad<100000 )
            {
            itog=(vklad)*1.12;
            money=itog-vklad;
            printf("Доход %d\n", money);
            printf("Итог=%d", itog);
            }
            if (days>=241 && days<=365 && vklad>100000 )
            {
            itog=(vklad)*1.15;
            money=itog-vklad;
            printf("Доход %d\n", money);
            printf("Итог=%d", itog);
			}
	return 0;
	}