#include <stdio.h>
int main(){
    char val=250;
    int	 ans;
    ans= val+ !val + ~val + ++val;
    printf("%d",ans);
    return 0;
}