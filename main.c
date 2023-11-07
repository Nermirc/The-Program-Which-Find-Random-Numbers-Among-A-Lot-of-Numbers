#include <stdio.h>
#include <stdlib.h>
    int enbuyuk(int A[],int elemansayisi)
    {
        int i,enb;
        enb=A[0];
        for(i=1;i<elemansayisi;i++)
        {
            if(A[i]>enb)
            {
                enb=A[i];
            }
        }
        return enb;
    }
    int enkucuk(int A[],int elemansayisi)
    {
        int i,enk;
        enk=A[0];
        for(i=1;i<elemansayisi;i++)
        {
            if(A[i]<enk)
            {
                enk=A[i];
            }
        }
        return enk;
    }

int main()
{
    /*Bilgisayar tarafindan uretilen n adet sayi bir dizide tutulmaktadir.
    Dizi içerisindeki max ve min degerleri iki ayri fonksiyon kullanarak
    bulunmasýný saglayan C programini yaziniz.*/

    int n,i;
    printf("Kac adet sayi uretilecek\n");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    printf("Dizi elemanlari\n");
    for(i=0;i<n;i++)
    {
        dizi[i]=rand()%100;
        printf("%d\n",dizi[i]);
    }
    printf("\n En buyuk = %d\n",enbuyuk(dizi,n));
    printf("\n En kucuk = %d\n",enkucuk(dizi,n));
}
