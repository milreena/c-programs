#include <stdio.h>
#include<stdlib.h>
int a[10];
int n = 0;
void create ();
void display ();
void
main ()
{
  int choice;
  while (1)
    {
      printf ("\n*menu*\n");
      printf ("1.create am array of n integers\n");
      printf ("2.display array elements\n");
      printf ("3.exit\n");
      printf ("enter your choice:");
      scanf ("%d", &choice);
      switch (choice)
	{
	case 1:
	  create ();
	   break;
	case 2:
	  display ();
	  break;
	default:
	  printf ("invalid choice\n");
	}
    }
}

void
create ()
{
  int i;
  printf ("enter the number of elements\n");
  scanf ("%d", &n);
  printf ("enter the elements\n");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
}

void
display ()
{
  int i;
  printf ("array elements are\n");
  for (i = 0; i < n; i++)
    printf ("%d\t", a[i]);
}
