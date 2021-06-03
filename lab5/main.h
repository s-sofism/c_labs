struct ListItem 
{
    struct ListItem *next;
    struct ListItem *prev;
    char ch;
};
void addChar(struct ListItem **list, char ch);
void createList(struct ListItem **list, char *string);
int isPalindrome(struct ListItem *list);
void deleteList(struct ListItem **list);
