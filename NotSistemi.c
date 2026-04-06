
#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
#define kisi 120

int main()
{
    setlocale(LC_ALL,("Turkish"));
    float not[kisi][3];
    int vize,fnal;
    int vizeSayac1=0,fnalSayac1=0;
    int a;
    char isim;
    int vizeSayac=0,fnalSayac=0;
    int kisiToplam;
    float sinifOrt;
    float ortToplam;
    ortToplam=0;
    float ort;
    char menu,menu1,menu2,menu3,menu4,menu5,menu6,menu7;
    int ogrenciNo;
    int i=0,j=0;
    int tnm=0;
    //-1 ver
    for(tnm=0;tnm<kisi;tnm++)
    {

      for(j=0;j<3;j++)
    {
        not[tnm][j]=-1;

    }
    }



    while(1)
    {    printf("[1] Bilgi Girisi\n");
        printf("[2] Listeleme\n");
        printf("[3] Ortalama Hesapla\n");
        printf("[4] Notu girilmeyen ogrencileri listele\n");
        printf("[5] Istatistik bilgisi\n");
        printf("[6] Cikis\n");
        printf("Secim Yapiniz \n=");

        scanf(" %c",&menu);
        if(menu!='1'&&menu!='2'&&menu!='3'&&menu!='4'&&menu!='5'&&menu!='6')
        {
            printf("Seçiminizi Kontrol Ediniz\n=");
            continue;
        }
        if(menu=='1')
            //bilgi girişi
        {

            while(1)
            {
                printf("\n[a]Tum Liste Icin \n");
                printf("[b]Numaraya Gore\n");
                printf("Seçiminiz\n =");
                scanf(" %c",&menu2);
                if(menu2!='a'&&menu2!='b')
                {
                    printf("Gecersiz Giris\n");
                    printf("Tekrar Giris Yapiniz\n=");
                    continue ;
                }
                if(menu2=='a')
                    for(i=0;i<kisi;i++)
                    {

                            printf("%d.Numarali Ogrencinin \n",i+1);
                            while(1)
                            {
                            printf("Vize= ");
                            scanf("%f",&not[i][0]);
                            if(not[i][0]<0||not[i][0]>100)
                            {
                                continue;

                            }
                              break;
                            }
                            while(1)
                            {

                            printf("Final= ");
                            scanf("%f",&not[i][1]);
                            if(not[i][1]<0||not[i][1]>100)
                            {
                                continue;
                            }
                            break;
                            printf("--------------------------------------------------\n");

                            }



                    }
                    break;



                }
                 if(menu2=='b')
                {
                    printf("Veri Girmek Istediginiz Ogrenci Numarasini Girin\n=");
                    scanf("%d",&ogrenciNo);
                    printf("%d. Ogrencinin\n",ogrenciNo);
                    printf("Vize=");
                    scanf("%f",&not[ogrenciNo-1][0]);
                    printf("Final=");
                    scanf("%f",&not[ogrenciNo-1][1]);
                    printf("--------------------------------------------------\n");
;
                }
            }
            //listeleme
            else if(menu=='2')
            {
                while(1)
                {
                    printf("\n[a]Tum Listeyi Gormek Icin\n");
                    printf("[b]Numaraya Gormek Icin\n");
                    printf("Secimini yapiniz\n=");
                    scanf(" %c",&menu3);
                    if(menu3!='a'&&menu3!='b')
                    {
                        printf("SECIMINIZI KONTROL EDINIZ\n=");
                        continue;
                    }
                    if(menu3=='a')
                    {
                        for(i=0;i<kisi;i++)
                        {
                            printf("%d numarali ogrencinin\n",i+1);
                            printf("Vize Notu=%.2f\n",not[i][0]);
                            printf("Final Notu=%.2f",not[i][1]);
                            printf("------------------------------------------\n");

                        }

                    }
                    if(menu3=='b')
                    {

                    printf("Ogrenmek Istediğiniz Ogrenci Numarasini girin\n=");
                    scanf("%d",&ogrenciNo);
                    printf("Vize Notu=%.2f\n",not[ogrenciNo-1][0]);
                    printf("Final Notu=%.2f\n",not[ogrenciNo-1][1]);
                    printf("--------------------------------------------------\n");
                    }
                    break;
                }

            }
            else if(menu=='3')
            {
                while(1)
                {

                printf("[a] Tum Listeyi Gormek Icin\n");
                printf("[b] Numaraya Gore Gormek Icin\n");
                printf("Secim Yapiniz\n=");
                scanf(" %c",&menu4);
                if(menu4!='a'&&menu4!='b')
                {
                    printf("Kontrol Ediniz\n");
                    continue;
                }
                if(menu4=='a')
                {
                    for(i=0;i<kisi;i++)
                    {

                        not[i][2]=((not[i][0]*0.4)+(not[i][1]*0.6));
                        ort=not[i][2];
                        printf("%d numarali ogrencinin ortalamasi\n=",i+1);
                        printf("%.2f\n",ort);
                    }

                }
                else if (menu4=='b')
                {
                    not[ogrenciNo][2]=((not[ogrenciNo][0]*0.4)+(not[ogrenciNo][1]*0.6));
                    ort=not[ogrenciNo][2];
                    printf("Ortalamasina bakmak istediginiz ogrenci numarasi\n=");
                    scanf("%d",&ogrenciNo);
                    printf("%d Numarali Ogrencinin Ortalamasi\n=",ogrenciNo);
                    printf("%.2f\n",not[ogrenciNo-1][0]*0.4+not[ogrenciNo-1][1]*0.6);
                }
                 break;
                }


            }
            else if(menu=='4')
                    {
                        printf("Notlari Girilmeyen Ogrenciler \n");
                        for(i=0;i<kisi;i++)
                        {
                            //vize=not[i][0]
                            //fnal=not[][]
                            if(not[i][0]==-1 || not[i][1]==-1)
                            {
                                printf("%d numarali ogrencinin not girilmemis\n",i+1);
                                printf("Vize=%.2f\n",not[i][0]);
                                printf("Final=%.2f\n",not[i][1]);
                                continue;
                            }

                        }



                        }
                else if(menu=='5')
                    {
                        while(1)
                        {

                            printf("[a] SINIF ORTALAMASI\n");
                            printf("[b] SINAVA GIRMEYEN KIŞILER\n");
                            printf("[c] SINAVA GIREN KIŞILER\n");
                            printf("Secim Yapiniz\n=");
                            scanf(" %c",&menu5);
                            if(menu5!='a'&&menu5!='b'&&menu5!='c')
                            {
                                printf("SECIM KONTROL EDINIZ\n");
                                continue;

                            }


                            if(menu5=='a')
                            {
                                for(i=0;i<kisi;i++)
                                {
                                  ortToplam=ortToplam+not[i][2];
                                }
                                sinifOrt=ortToplam/kisi;
                                  printf("Sinif Ortalamasi=%.2f\n", sinifOrt  );

                            }
                            else if(menu5=='b')
                            {
                                while(1)
                                {

                                printf("[a] Vizeye Girmeyenlerin Sayisi\n");
                                printf("[b] Finale Girmeyenlerin Sayisi \n");
                                printf("Secim Yapiniz\n=");
                                scanf(" %c",&menu6);
                                if(menu6!='a'&&menu6!='b')
                                {
                                    continue;

                                }
                                break;

                                }

                                if(menu6=='a')
                                {
                                    for(i=0;i<kisi;i++)
                                    {
                                        if(not[i][0]==-1)
                                        {
                                            vizeSayac=vizeSayac+1;
                                        }
                                    }
                                    printf("Vizeye Girmeyenlerin Sayisi=%d\n",vizeSayac);
                                    printf("-------------------------------------------\n");
                                }

                               if(menu6=='b')
                               {
                                   for(i=0;i<kisi;i++)
                                   {
                                       if(not[i][1]==-1)
                                       {
                                           fnalSayac=fnalSayac+1;
                                       }

                                   }
                                   printf("Finale Girmeyenlerin Sayisi=%d\n",fnalSayac);
                                   printf("--------------------------------------------\n");

                               }
                            }
                            else if(menu5=='c')
                            {
                                while(1)
                                {

                                printf("[a] Vizeye Girenlerin Sayisi\n");
                                printf("[b] Finale Girenlerin Sayisi \n");
                                printf("Secim Yapiniz\n=");
                                scanf(" %c",&menu7);
                                if(menu7!='a'&&menu7!='b')
                                {
                                    printf("Secim Kontrol Ediniz\n");
                                    continue;

                                }
                                break;

                                }
                                //kisi yanlış çıkıyor bak
                                if(menu7=='a')
                                {
                                    for(i=0;i<kisi;i++)
                                    {
                                        if(not[i][0]!=-1)
                                        {
                                            vizeSayac1=vizeSayac1+1;

                                        }
                                    }
                                    printf("Vizeye Girenlerin Sayisi=%d\n",vizeSayac1);
                                }
                                else if(menu7=='b')
                                {
                                    for(i=0;i<kisi;i++)
                                    {
                                        if(not[i][1]!=-1)
                                        {
                                            fnalSayac1=fnalSayac1+1;
                                        }
                                    }
                                    printf("Finale Girenlerin Sayisi=%d\n",fnalSayac1);

                                }



                            }
                            break;
                        }

                    }


          if(menu=='6')
          {
              printf("Cikis Yapiyorsunuz");
              break;
          }
        }

return 0;
    }



