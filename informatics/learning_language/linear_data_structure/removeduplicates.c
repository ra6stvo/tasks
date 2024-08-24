struct s_list
{
    int data;
    struct s_list *next;
};
struct s_list *head;
struct s_list temp = *head;

void deleteduplicate(struct s_list **head, struct s_list temp)
{
    while (temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            temp->next = temp->next->next;
        }

        else
        {
            temp = temp->next;
        }
    }

return head;

void printslist(struct s_list *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}

// https://leetcode.com/problems/remove-duplicates-from-sorted-list/
