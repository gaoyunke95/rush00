#include <unistd.h>
/*
x stands for number of cols, y stands for number of rows;
method1, by printing using two loops;
		when printing reaches the corner point, determine the 
		condition and print out the char;

method 2, by printing each line at one time; one loop;
		determine the first line and last line 
		give functions for printing the first line and last line
		lines inbetween using one function 
		--for this method you may also to create separate functions 
		for the first,mid and last;in this way, you can edit the display
		on all three functions
	
*/
void ft_putchar(char c)
{
	write(1, &c, 1);
}
//method1 for rush00, can rearrange the conditions statements to reduce the 
//number lines;
void	rush001(int x, int y)
{
	for(int r = 0; r < y; r++)
	{
		for(int c = 0; c < x; c++)
		{
			if(r == 0 || r == y - 1)
			{
				if (c == 0 || c == x - 1)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('-');
				}
			}
			else
			{
				if (c == 0 || c == x - 1)
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
			}
		}
		ft_putchar('\n');
	}
}

//method2 for rush00, 
void	print_each_line(int col, char l, char m, char r)
{
	int counter = 0;
	while(counter < col)
	{
		if(counter == 0)
		{
			ft_putchar(l);
		}
		else if(counter == col - 1)
		{
			ft_putchar(r);
		}
		else
		{
			ft_putchar(m);
		}
		counter++;
	}

}

void	rush002(int x, int y)
{
	int r = 0;
	while (r < y){
		if (r == 0 || r == y - 1)
		{
			print_each_line(x, '/', '-', '\\');
		}
		else
		{
			print_each_line(x, '|', ' ', '|');
		}
		ft_putchar('\n');
		r++;
	}
}
//rush01
void	rush010(int x, int y)
{
	int r = 0;
	while (r < y){
		if (r == 0)
		{
			print_each_line(x, '/', '-', '\\');
		}
		else if (r == y - 1)
		{
			print_each_line(x, '\\', '-', '/');
		}
		else
		{
			print_each_line(x, '*', ' ', '*');
		}
		ft_putchar('\n');
		r++;
	}
}
//rush02
void	rush020(int x, int y)
{
	int r = 0;
	while (r < y){
		if (r == 0)
		{
			print_each_line(x, 'A', 'B', 'A');
		}
		else if (r == y - 1)
		{
			print_each_line(x, 'C', 'B', 'C');
		}
		else
		{
			print_each_line(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		r++;
	}
}
//rush03
void	rush030(int x, int y)
{
	int r = 0;
	while (r < y){
		if (r == 0)
		{
			print_each_line(x, 'A', 'B', 'C');
		}
		else if (r == y - 1)
		{
			print_each_line(x, 'A', 'B', 'C');
		}
		else
		{
			print_each_line(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		r++;
	}
}
//rush04
void	rush040(int x, int y)
{
	int r = 0;
	while (r < y){
		if (r == 0)
		{
			print_each_line(x, 'A', 'B', 'C');
		}
		else if (r == y - 1)
		{
			print_each_line(x, 'C', 'B', 'A');
		}
		else
		{
			print_each_line(x, 'B', ' ', 'B');
		}
		ft_putchar('\n');
		r++;
	}
}
int	main()
{
	rush001(1, 5);
	rush002(1, 5);
	rush010(2, 5);
	rush020(3, 5);
	rush030(4, 4);
	rush040(3, 3);
	return (0);
}