#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char card_name[3];
	
	puts("Введите название карты: ");
	scanf("%2s", card_name);
	int val = 0;
	switch (card_name[0])
	{
	case 'K':
		val = 10;
		break;
	case 'Q':
		val = 10;
		break;
	case 'J':
		val = 10;
		break;
	case 'A':
		val = 11;
		break;
	default: 
		val = atoi(card_name);
	}
	if ((val >= 3) && (val <= 6))
		puts("Счетчик увеличился");
	else if (val == 10)
		puts("Счетчик уменьшился");
	return (0);
}
