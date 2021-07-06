#include <unistd.h>

void	ft_print_comb(void)

{
	char	f;
	char	s;
	char	t;

	f = '0';
	while (f <= '7')
	{
		s = '0';
		while (++s <= '8')
		{
			t = '1';
			while (++t <= '9')
			{
				if ((f < s) && (s < t))
				{
					write(1, &f, 1);
					write(1, &s, 1);
					write(1, &t, 1);
					if (f != '7')
						write(1, ", ", 2);
				}
			}
		}
		f++;
	}
}
