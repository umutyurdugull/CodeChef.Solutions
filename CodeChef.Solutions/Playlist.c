// link to problem : https://www.codechef.com/practice/course/basic-programming-concepts/DIFF500/problems/SONGS
#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d",&t);
    for(int i = 0;i<t;i++)
    {
        int n ; //yolculuk süresi
        int x; //sarki suresi 
        scanf("%d %d", &n, &x);
        int totalSong = 3 * x; 
        int c = n / totalSong;
        printf("%d\n",c);
    }

return 0;
}