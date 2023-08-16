/**
 * print_name -  to print name
 * @name: name to print
 * @f: callback function which prints name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != null && f != null)
		f(name);
}
