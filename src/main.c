#include <stdio.h>
#include "deposit.h"

int main()
{
	int days;
	int vklad;
		printf("Введите дни вклада, не более 365\n");
		scanf("%d", &days);
		printf("Введите сумму вклада  рублей\n");
		scanf("%d", &vklad);
	calc(vklad, days);
	return 0;
	}