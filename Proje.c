    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    
    int toplamHarcama(int harcamalar[][5], int boyut1, int boyut2)
    {
        int toplam=0;
        int i=0,j=0;
        
        for(i=0;i<boyut1;i++)
        {
            for(j=0;j<boyut2;j++)
            {
                toplam+=harcamalar[i][j];
            }
        }

        return toplam;
    }
    
    void gelmedigigun(int geldigigun[],int gelmedi[],int boyut)
    {
        int i=0;

        for(i=0;i<boyut;i++)
        {
            gelmedi[i]=5-geldigigun[i];
        }
    }

    int eskiKazanc()
    {
        FILE *dosya;
        int eskiKazanc = 0;

        dosya = fopen("kazanc.txt", "r");
        
        if(dosya != NULL)
        {
            fscanf(dosya, "%d", &eskiKazanc);
            fclose(dosya);
        }
        
        return eskiKazanc;
    }

    void suankiKazanc(int toplamKazanc)
    {
        FILE *dosya;

        dosya = fopen("kazanc.txt", "w");
        if(dosya != NULL)
        {
            fprintf(dosya, "%d", toplamKazanc);
            fclose(dosya);
        }
    }
    
    
    
    
    
    
    int main()
    {
        int varyok[10][5];
        int harcama[10][5];
        int geldi[10]={0};
        char ograd[10][50];
        int ogrsayi=0,i=0,j=0;
        int harcamaToplam=0;
        int gelmedi[10]={0};

        printf("Yemekhane kayit ve takip sistemine hosgeldiniz.\nTek seferde maksimum 1-10 arasinda ogrenci kaydedebilirsiniz.\n\n");
        
        while(1)
        {

            printf("Kayit olacak ogrenci sayisini giriniz.\n");
            scanf("%d", &ogrsayi);
            if(ogrsayi<=0)
            {
                printf("Yanlis aralikta deger girdiniz.\n");
            }
            else if(ogrsayi>10)
            {
                printf("Yanlis aralikta deger girdiniz.\n");  
            }
            else
            {
                break;
            }
        }
        
        printf("\nSimdi kaydedeceginiz ogrencilerin isimleri alinacaktir.\n\n");
        
        while(i<ogrsayi)
        {
            printf("%d. ogrencinin ismini giriniz.\n",i+1);
            scanf(" %49[^\n]", ograd[i]);
            i++;
        }
        
        printf("\n");
        printf("Simdi ogrencilerin hangi gun gelip gelmediginin bilgisi alinacaktir.\nOgrenci geldiyse 1'e, gelmediyse baska bir sayiya basiniz.\n\n");
        
        for(i=0;i<ogrsayi;i++)
        {
            for(j=0;j<5;j++)
            {
                printf("%s %d. gun geldi mi?",ograd[i],j+1);
                scanf("%d", &varyok[i][j]);
                if(varyok[i][j]==1)
                {
                    geldi[i]+=1;
                }
                else
                {
                    geldi[i]=geldi[i];
                }
            }
            printf("\n");
        }
        
        printf("Simdi hangi ogrencinin hangi gun kac TL harcadiginin bilgisi alinacaktir.\n\n");
        
        for(i=0;i<ogrsayi;i++)
        {
            for(j=0;j<5;j++)
            {
                if(varyok[i][j]==1)
                {
                    printf("%s %d. gun kac TL harcamistir?\n",ograd[i],j+1);
                    scanf("%d", &harcama[i][j]);
                }
                else
                {
                    harcama[i][j]=0;
                }
            }
        }
        
        harcamaToplam=toplamHarcama(harcama,ogrsayi,5);
        int eskiKazancc = eskiKazanc();
        int genelToplam = eskiKazanc() + harcamaToplam;

        printf("\n");
        printf("Yemekhanenin bu haftaki kazanci: %d TL'dir.\n", harcamaToplam);
        printf("Yemekhanenin toplam kazanci: %d TL'dir.\n", genelToplam);

        suankiKazanc(genelToplam); 
        gelmedigigun(geldi, gelmedi, ogrsayi);
        
        printf("\n");
        
        for(i=0;i<ogrsayi;i++)
        {
            printf("%s %d gun yemekhaneye gelmemistir.\n",ograd[i],gelmedi[i]);
        }










        return 0;
    }