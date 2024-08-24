struct list1 
{
    int data;
    struct list1 *next;
};

struct list1 *first = head;

struct list2
{
    int data;
    struct list2 *next;
};

struct list2 *second = head;


struct unitedlist
{
    int data;
    struct unitedlist *next;
}

struct unitedlist *common = head;
void mergelists()
{
    while (first != NULL && second != NULL)
    {
        if (first->data <= second->data)
        {
            common->next = first;
            first = first->next;
        }

        else
        {
            common->next = second;
            second = second->next;
        }

        common = common->next
    }

    while (first->next != NULL)
    {
        common->next = first;
        first = first->next;
        common = common->next;
    }

    while (second->next != NULL)
    {
        common->next = second
        second = second->next
        common = common->next
    }

    return struct unitedlist *head->next;

    void printmergelist(struct unitedlist *head)
    {
        while (head != NULL)
        {
            printf("%d ", head->data);
            head = head->next
        }
    }
}

// https://leetcode.com/problems/merge-two-sorted-lists/
