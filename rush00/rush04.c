void	ft_putchar(char c);

void	print(int len, char begin, char mid, char last)
{
	int	column_count;

	column_count = 1;
	while (column_count <= len)
	{
		if (column_count == 1)
		{
			ft_putchar(begin);
		}
		else if (column_count == len)
		{
			ft_putchar(last);
		}
		else
			ft_putchar(mid);
		column_count += 1;
	}
	ft_putchar('\n');
}

void	rush(int column, int line)
{
	int	line_count;

	line_count = 1;
	if (column >= 1 && line >= 1)
	{
		while (line_count <= line)
		{
			if (line_count == 1)
			{
				print(column, 'A', 'B', 'C');
			}
			else if (line_count == line)
			{
				print(column, 'C', 'B', 'A');
			}
			else
			{
				print(column, 'B', ' ', 'B');
			}
			line_count++;
		}
	}
}
