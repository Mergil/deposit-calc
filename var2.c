#include <stdio.h>

int main()
{
	int days;
	int vklad;
	int itog;
		printf("Введите дни вклада, не более 365\n");
		scanf("%d", &days);
		printf("Введите сумму вклада мин.10к рублей\n");
		scanf("%d", &vklad);
			if (days<=30 && vklad<100000 )
			{
			itog=(vklad)*0.9;
			printf("Итог=%d", itog);
			}
			if (days<=30 && vklad>100000 )
			{
			itog=(vklad)*0.9;
			printf("Итог=%d", itog);
			}	
			if (days>=31 && days<=120 && vklad<100000 )
            {
            itog=(vklad)*1.02;
            printf("Итог=%d", itog);
            }
            if (days>=31 && days<=120 && vklad>100000 )
            {
            itog=(vklad)*1.03;
            printf("Итог=%d", itog);
            }
            if (days>=121 && days<=240 && vklad<100000 )
            {
            itog=(vklad)*1.06;
            printf("Итог=%d", itog);
            }
            if (days>=121 && days<=240 && vklad>100000 )
            {
            itog=(vklad)*1.08;
            printf("Итог=%d", itog);
            }
			if (days>=241 && days<=365 && vklad<100000 )
            {
            itog=(vklad)*1.12;
            printf("Итог=%d", itog);
            }
            if (days>=241 && days<=365 && vklad>100000 )
            {
            itog=(vklad)*1.15;
            printf("Итог=%d", itog);
			}
	return 0;
}