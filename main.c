#include "moss.h"


int main()
{
  int choice;
  printf("0 - Client, 1 - Server ");
  scanf("%d", &choice);

  if (choice == 0) {
    client();
  } else {
    server();
  }

  return 0;
}

