#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char card_name[3];
	
	puts("Введите название карты: ");
	scanf("%2s", card_name);
	int val = 0;
	if (card_name[0] == 'K')
	{
		val = 10;
	}
	else if (card_name[0] == 'Q')
		val = 10;
	else if (card_name[0] == 'J')
		val = 10;
	else if (card_name[0] == 'A')
		val = 11;
	else
	{
		val = atoi(card_name);
	}
	if ((val >= 3) && (val <= 6))
		puts("Счетчик увеличился");
	else if (val == 10)
		puts("Счетчик уменьшился");
	return (0);
}
