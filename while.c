#include <cs50.h>
#include <stdio.h>
void meow(int n);
int main(void){
    // int i = 0;
    // while(i < 3)
    // {
    //     printf("meow\n");
    //     i++;
    // }
    //   while (true)
    // {
    //     printf("meow\n");
    // } Loop sem fim
//    for (int i = 0; i< 3; i++)
//     {
//         printf("meow\n");
//     }

    //  for (int i = 0; i< 3; i++)
    // {
    //     meow();
    // }
    meow(3);
}
 void meow(int n)
    {
        for (int i = 0; i < n; i++)
        {
        printf("meow\n");
        }
    }