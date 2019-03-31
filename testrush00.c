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
			print_each_line(x, 'o', '-', 'o');
		}
		else
		{
			print_each_line(x, '|', ' ', '|');
		}
		ft_putchar('\n');
		r++;
	}
}

int	main()
{
	rush001(7, 4);
	rush002(7, 5);
	return (0);
}