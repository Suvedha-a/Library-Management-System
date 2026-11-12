
#include <stdio.h>
#include<string.h>
#include <stdlib.h>

typedef struct book
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
    struct book *next;
}ST;
typedef struct issue
{
	int issue_id;
	int book_id;
	int user_id;
	char user_name[50];
	char issue_date[20];
	char due_date[20];
	char return_date[20];
	int fine;
	struct issue*next;
}ISSUE;



