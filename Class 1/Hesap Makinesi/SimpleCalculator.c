#include <stdio.h>
#include <stdlib.h>

int main(){
    int sayi1, sayi2, sonuc;
    char islem;

    printf("Enter an Operator:\n");
    scanf("%c",&islem);

    printf("Enter Two Numbers:\n");
    scanf("%d %d", &sayi1, &sayi2);

    if(islem == '+'){
        sonuc=sayi1 + sayi2;
        printf("%d + %d = %d \n",sayi1, sayi2, sonuc);
        return 0;
    }

    else if(islem == '-')
    {
        sonuc=sayi1 - sayi2;
        printf("%d - %d = %d \n",sayi1,sayi2,sonuc);
        return 0;
    }

    else if (islem == '*')
    {
        sonuc=sayi1 * sayi2;
        printf("%d * %d = %d \n",sayi1,sayi2,sonuc);
        return 0;
    }
    
    else if(islem == '/')
    {
        sonuc=sayi1 / sayi2;
        printf("%d / %d = %d \n",sayi1,sayi2,sonuc);
        return 0;
    }

    else
    {
        printf("Wrong Operator Entered! \n");
        return 0;
    }
}