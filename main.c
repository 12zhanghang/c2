#include <stdio.h>
char arr[1024];
int index = 0;
int ismingan(char x)
{
    int count=0;
    for(int i=0;i<index;i++)

    if(x==arr[i])
    {
        count++;
    }

    if(count==0)
    {
        return 0;
    }
    else{
            return 1;
        }
}
int main()
{

    printf("jrmgzf\n");
    while (1)
    {
    printf("1---tjmgzf\n");
    printf("2---scmgzf\n");
    printf("3---ckmgzf\n");
    printf("4---thmgzf\n");
    printf("5---tuichu\n");
    printf("qingshurxiangyanggongneng\n");
    int code;
    scanf("%d", &code);
    if (code == 1)
    {
        printf("qingshuruminganzifu\n");
        char m;
        scanf("%c",&m);
        scanf("%c",&m);
        arr[index]=m;
        index++;
        printf("tianjiachenggong,dianhuichejx");
        char x;
        scanf("%c",&x);
        scanf("%c",&x);
        }
        if (code == 2)
        {
            printf("shanchuzuihuoyigeminganzifu\n");
            index--;
            printf("shanchuchenggong,dianji");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
            if (code == 3)
            {
            printf("souyouminganciruxia\n");
            for(int i=0; i<index; i++)
            {
                printf("第%d个敏感词字符为%c\n",i+1,arr[i]);
            }
            printf("shanchuchenggong,fianjijixu\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
            }
                if (code == 4)
                {
                printf("qingshuruyiduanyingwen\n");
                char neirong[1024];
                scanf("%s",neirong);
                for(int i=0;1;i++){
                    if(neirong[i]=='\0'){
                        break;
                    }
                    if(ismingan(arr[i]==1)){
                        arr[i]='*';
                    }
                    printf("%c",neirong[i]);
                }
                printf("\n");
                printf("tihuanchenggong,dianjihuichejixu\n");
                char enter;
                scanf("%c",&enter);
                scanf("%c",&enter);
                }
                    if (code == 5){
                        printf("tuichu\n");
                        break;
                    }
                        
    }
    return 0;
}