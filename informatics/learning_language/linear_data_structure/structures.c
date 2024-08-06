#include <stdio.h>
#include <stdlib.h>

int main() 
{
  struct s_list 
  {
  int data;
  struct s_list* next;
  };

  struct s_list* head = NULL; 
  struct s_list* sec = NULL; 
  struct s_list* third = NULL;
  struct s_list* temp = head;


  head = (struct s_list*)malloc(sizeof(struct s_list)); 
  sec = (struct s_list*)malloc(sizeof(struct s_list));
  third = (struct s_list*)malloc(sizeof(struct s_list));


  head->data = 1; 
  head->next = sec;

  sec->data = 2; 
  sec->next = third;

  third->data = 3; 
  third->next = NULL;


  while (temp != NULL) 
  {
    printf("%d ", temp->data); 
    temp = temp->next; 
  }
  printf("\n");

  free(head);
  free(sec);
  free(third);

  return 0;
}
