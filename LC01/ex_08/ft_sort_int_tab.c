void	ft_sort_int_tab(int *tab, int size)

{
	int	valuei;
	int	valuen;
	int	aux;

	valuei = 0;
	while (valuei < size)
	{	
		valuen = valuei + 1;
		while (valuen < size)
		{	
			if (tab[valuei] > tab[valuen])
			{
				aux = tab[valuei];
				tab[valuei] = tab[valuen];
				tab[valuen] = aux;
			}
			valuen++;
		}
		valuei++;
	}
}
