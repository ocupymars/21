#include <unistd.h>
 
int     lcase(char c)
{
	int index;

    if (c >= 'a' && c <= 'z')
    {
         index = c - 'a' + 1;
        return (index);
    }
    if  (c >= 'A' && c <= 'Z')
    {
        index = c - 'A' + 1;
        return (index);
    }
    else
        c = 1;
       return (1);
 }
 
int     main(int argc, char **argv)
{
   int i;
   int index;

   i = 0;
   if (argc != 2)
   {
       write(1, "\n", 1);
   }
   while (argv[1][i])
    {
      index = lcase(argv[1][i]);
      while (index--) 
      	write(1, &argv[1][i], 1);
      i++;
    }
   write(1, "\n", 1);
   return (0);
}