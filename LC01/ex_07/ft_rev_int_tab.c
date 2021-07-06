void	ft_rev_int_tab(int *tab, int size)

{
	int	valuei;
	int	valuef;
	int	aux;

	valuei = 0;
	valuef = size - 1;
	while (valuei < valuef)
	{
		aux = tab[valuei];
		tab[valuei] = tab[valuef];
		tab[valuef] = aux;
		valuei++;
		valuef--;
	}
}
