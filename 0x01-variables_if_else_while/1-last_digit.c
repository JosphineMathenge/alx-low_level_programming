srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);
	if (n % 10 > 5)
	{
		printf("%s %d is %d and is greater than 5\n", last, n, n % 10);
		printf("greater than 5\n");
	}
	else if (n == 0)
	else if (n % 10 == 0)
	{
		printf("%s %d is %d and is 0\n", last, n, n % 10);
		printf("0\n");
	}
	else
	{
		printf("%s %d is %d and is less than 6 and not 0\n", last, n, n % 10);
		printf("less than 6 and not 0\n");
	}
	return (0);
