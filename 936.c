#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    char str1[100], str2[100], str_rem[100];
    char original_str2[100];  
    int i = 0, j = 0, k = 0;
 
    printf ("Enter the First string:\n");
    fflush (stdin);
    gets (str1);
 
    printf ("Enter the Second string:\n");
    gets (str2);

    strcpy(original_str2, str2); 
 
    for (i = 0; str1[i]!= '\0'; i++)
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if (str1[i] == str2[j])
            {
                continue;
            }
            else
            {
                str_rem[k] = str2[j];
                k ++;
            }
        }
        str_rem[k] = '\0';
        strcpy (str2, str_rem);
        k = 0;
    }
 
    printf ("On removing characters from second string we get: %s\n", str_rem);

    // ===== ส่วนสรุปผลที่เพิ่ม =====
    printf("\nSummary:\n");

    for(i = 0; str1[i] != '\0'; i++)
    {
        int count_before = 0;
        int count_after = 0;

        for(j = 0; original_str2[j] != '\0'; j++)
        {
            if(original_str2[j] == str1[i])
                count_before++;
        }

        for(j = 0; str_rem[j] != '\0'; j++)
        {
            if(str_rem[j] == str1[i])
                count_after++;
        }

        if(count_before == 0)
            printf("Character '%c' not found\n", str1[i]);
        else
            printf("Character '%c' removed %d time(s)\n",
                   str1[i], count_before - count_after);
    }

    return 0;
}