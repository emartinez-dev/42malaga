int	main(void)
{
	char	c1[]=".cm,e 45esdd";
	char	c2[]=".cm,d 45dsdd";
	int i;
	int j;

	j = ft_strcmp(c1, c2);
	i = strcmp(c1, c2);
	printf("%d", i);
	printf("\n");
	printf("La mia:\n");
	printf("%d", j);
	return (0);
}
