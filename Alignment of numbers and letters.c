#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


/*
编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：

Melissa  Honeybee

      7         8

接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：

Melissa  Honeybee

7        8
*/

void back_num()
{
    char first_n1[30];
    char last_n1[30];
    int first_n_len1;
    int last_n_len1;

    printf("Please enter your first name.\n");
    scanf("%s", &first_n1);
    printf("Please enter your last name.\n");
    scanf("%s", &last_n1);
    

    first_n_len1 = strlen(first_n1);
    last_n_len1 = strlen(last_n1);
    printf("%s %s\n", first_n1, last_n1);
    printf("%*d ", first_n_len1, first_n_len1);
    printf("%*d", last_n_len1, last_n_len1);

}


void front_num()
{
    char first_n2[30];
    char last_n2[30];
    int first_n_len2;
    int last_n_len2;

    printf("Please enter your first name.\n");
    scanf("%s", &first_n2);
    printf("Please enter your last name.\n");
    scanf("%s", &last_n2);

    first_n_len2 = strlen(first_n2);
    last_n_len2 = strlen(last_n2);
    printf("%s %s\n", first_n2, last_n2);
    printf("%-*d ", first_n_len2, first_n_len2);
    printf("%-*d", last_n_len2, last_n_len2);

}


int main()
{

    back_num();
    printf("\n\n\n");

    front_num();
    return 0;
}