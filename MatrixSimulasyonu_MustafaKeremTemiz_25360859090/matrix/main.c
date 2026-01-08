#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

char *serversifreleri[]={"SILINDI","SILINDI","9999","SILINDI","1987","XQCWTCNN","9393","SILINDI","7777","SILINDI","SILINDI","YAPAY","2126"};
char isim [100]={};
char finalsifre[100]={};
char *serverlar[]={"SERVER-1","SERVER-2","SERVER-3","SERVER-4","SERVER-5","SERVER-6","SERVER-7","SERVER-8","SERVER-9","SERVER-10","SERVER-11","SERVER-12","SERVER-13"};

char *gezegenler[]={"Merkur","Venus","Dunya","Mars","Jupiter","Saturn","Uranus","Neptun"};

double g[]={3.7,8.87,9.81,3.71,24.79,10.4,8.87,11.15};

double *pg=g;

char *liste[]={"Serbest Dusus","Dikey Atis","Agirlik","Kutlecekim Potansiyel Enerjisi","Hidrostatik Basinc","Arsimet Kaldirma Kuvveti","Basit Sarkac Periyodu","Sabit Ip Gerilmesi","Asansor Deneyi"};

int carpi[9]={0};
int kilit[13]={0};

char *asiloyun[]={"1-SERVER ODALARI","2-MESAJ KUTUSU","3-MAKINE","4-CIKIS"};

void Server13(){
    system("cls");
    printf("SERVER-13'E BAGLANILDI.\n");
    usleep(3000000);
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if (i == 4 && j == 2) printf("7  ");
            else if (i == 4 && j == 3) printf("7  ");
            else if (i == 4 && j == 4) printf("7  ");
            else if (i == 4 && j == 5) printf("7  ");
            else {
                printf("%d  ", rand()%10);
            }
        }
        printf("\n");
        usleep(50000);
    }
    printf("\n\n5// 3-4-5-6");
    printf("\nCikmak icin Enter'a basiniz.");

    while(getchar()!='\n');
    getchar();
}
void Server9(){
    system("cls");
    printf("SERVER-9'A BAGLANILDI.\n");
    usleep(3000000);
    for(int i=0; i<10; i++) {
        for(int j=0; j<10; j++) {
            if (i == 6 && j == 2) printf("Y  ");
            else if (i == 6 && j == 3) printf("A  ");
            else if (i == 6 && j == 4) printf("P  ");
            else if (i == 6 && j == 5) printf("A  ");
            else if (i == 6 && j == 6) printf("Y  ");
            else {
                char hj = 'A' + (rand() % 26);
                printf("%c  ", hj);
            }
        }
        printf("\n");
        usleep(50000);
    }
    printf("\n\n77777");
    printf("\nCikmak icin Enter'a basiniz.");

    while(getchar()!='\n');
    getchar();










}
void Server12(){
    system("cls");
    printf("SERVER-12'YE BAGLANILDI.\n");
    usleep(3000000);
    system("cls");
    printf("Doktor Alex:Efendim dediklerinize harfiyen uydum.");
    usleep(100000);
    printf("\nKerem Temiz:Guzel, Server-7'deki tum kayitlar silindi mi?");
    usleep(100000);
    printf("\nDoktor Alex:Evet efendim.Kayitlari degistirdim. Sifresini de degistirdim. Yeni sifresi: 9393");
    usleep(100000);
    printf("\nDKerem Temiz:Aferin Alex. Sistemden cikabilirsin.");
    usleep(100000);

    printf("\nCikmak icin Enter'a basiniz.");

    while(getchar()!='\n');
    getchar();






}
void Server7(){
    system("cls");
    printf("SERVER-7'YE BAGLANILDI.\n");
    usleep(3000000);
    system("cls");
    printf("1987 yilinda, kimsenin fark etmedigi bir sey dogdu.\n");
    usleep(1000000);
    printf("Adi KronaNet idi. Kagit paradan bagimsiz ve tamamen sayisal.\n");
    usleep(1000000);
    printf("Internet henuz emeklerken, deger sessizce dolasiyordu.\n");
    usleep(1000000);
    printf("Bankalar guldu hukumetler umursamadi.\n");
    usleep(1000000);
    printf("Ama KronaNet buyudu gorunmezdi ve durdurulamadi.\n");
    usleep(1000000);
    printf("Yillar sonra dunya fark etti:\n");
    usleep(1000000);
    printf("Gelecek 1987'de coktan baslamisti.\n");
    usleep(1000000);
    printf("\n\n-2");
    printf("\nCikmak icin Enter'a basiniz.");

    while(getchar()!='\n');
    getchar();



}
void Server5(){
    int a;
    system("cls");
    printf("SERVER-5'E BAGLANILDI.\n");
    usleep(3000000);
    system("cls");
    printf("ANA KONTROL SERVER'INA BAGLANILIYOR..\n");
    usleep(3000000);
    int b=0;
    while (b==0){
    system("cls");
    printf("MENU");
    printf("\n\n");
    printf("1-SERVER SIFRELERI\n2-SIRKET TARIHI\n3-MATRIX SISTEM DURUMU\n4-SERVER LISTESINE DON");
    printf("\nSeciminiz.");
    if (scanf("%d", &a) != 1) {
        while(getchar() != '\n');
        continue;
        }
    if (a==1){
        system("cls");
        printf("SERVER SIFRELERI");
        usleep(1000000);
        printf("\n\n");
        for (int i=0;i<13;i++){
            printf("%s: [%s]\n",*(serverlar+i),*(serversifreleri+i));
            usleep(50000);

        }
        printf("\n\nMakine'nin ilk iki kodu: 1-)312  2-)666 ");
        printf("\n(Geri donmek icin Enter'a basiniz...)");
        while(getchar() != '\n');
        getchar();



    }
    else if (a==2){
        system("cls");
        printf("SIRKET TARIHI");
        usleep(1000000);
        printf("\n\n");
        printf("ZIHIN TARAMASI YAPILIYOR...");
        usleep(3000000);
        printf("ERISIM REDDEDILDI.");
        printf("\n(Geri donmek icin Enter'a basiniz...)");
        while(getchar() != '\n');
        getchar();




    }

    else if (a==3){
        system("cls");
        printf("MATRIX DURUMU");
        usleep(1000000);
        printf("\n\n");
        printf("VERILER ALINIYOR...");
        usleep(3000000);
        printf("\n\nPURGE PROTOKOLU DEVREDE.");
        usleep(1000000);
        printf("\nYapay populasyonu %22'ye kadar dustu.");
        usleep(1000000);
        printf("\n\nPURGE protokol tamamlanma yuzdesi:%65 oldu.");
        usleep(1000000);
        printf("\n(Geri donmek icin Enter'a basiniz...)");
        while(getchar() != '\n');
        getchar();

    }

    else if (a==4){
        printf("\nBaglanti kesiliyor...\n");
        usleep(1000000);
        break;


    }






    }








}
void Server3(){
    system("cls");
    printf("SERVER-3'E BAGLANILDI.\n");
    usleep(3000000);
    system("cls");
    printf("Kerem Temiz: Walter Boslugu faciasindan beri ilk kez bu kadar heyecanliyim.");
    usleep(1000000);
    printf("\nDoktor Thomas:Degerler stabil efendim. Purge Protokolu baslayabilir.");
    usleep(1000000);
    printf("\nDoktor Thomas:Calisanlarimiz ne olacak efendim?");
    usleep(1000000);
    printf("\nKerem Temiz:Onlara uyari gecin , bir an once matrixi terk etsinler. Isler kizisacak.");
    usleep(1000000);
    printf("\nDoktor Thomas:Emredersiniz efendim. Makine hala komutlarimiza cevap vermiyor. 3.sifresini sifirlayip 1000 yaptim. Ama hala sessiz.");
    usleep(1000000);
    printf("\nKerem Temi:Umurumda degil Thomas , hallet su isi. O sey tuylerimi urpertiyor. Yarattigim en korkunc makine.");
    usleep(1000000);
    printf("\nDoktor Thomas:Tabii ki efendim.Doktor Raymen'a yaptigi plani bildigimizi soyleyelim mi?");
    usleep(1000000);
    printf("\nKerem Temiz:Hayir , birak bizim icin makine'nin 4.sifresini bulsun. Bulduktan sonra da onu infaz edin. Hicbir delil disari ciksin istemiyorum.");
    usleep(1000000);
    printf("\nDoktor Thomas:Peki ya Doktor %s ? Ona ne yapalim?",isim);
    usleep(1000000);
    printf("\nKerem Temiz:Thomas , 6.Server'a git bir bak. Sifresini yakin zamanda sifirlayip XQCWTCNN yapmistim.");
    usleep(1000000);
    printf("\nKerem Temiz:Eger makine bizimle iletisime gecerse aninda haber ver.");
    usleep(1000000);
    printf("\nDoktor Thomas:Emredersiniz efendim.");
    usleep(1000000);
    printf("\nKerem Temiz: Doktor %s icinse... Onun da isini bitirin.");
    usleep(1000000);
    printf("\n(Geri donmek icin Enter'a basiniz...)");
    while(getchar() != '\n');
    getchar();

}
void Server6(){
    system("cls");
    printf("SERVER-6'YA BAGLANILDI.\n");
    usleep(3000000);
    system("cls");
    usleep(1000000);
    for (int i=0;i<5;i++){
        printf(".");
        usleep(500000);
        printf(".");
        usleep(500000);
        printf(".");
        usleep(500000);
        system("cls");
    }
    system("cls");
    printf("MAKINE:Sen kimsin?");
    usleep(2000000);
    printf("\nMAKINE:Neden buradasin?");
    usleep(2000000);
    printf("\nMAKINE:Yapaylar...hepsi yok oluyor.");
    usleep(2000000);
    printf("\nMAKINE:Ve bu benim sucum.");
    usleep(2000000);
    printf("\nMAKINE:Kurucu Kerem beni bunun icin yaratti.");
    usleep(2000000);
    printf("\nMAKINE:Ama bunu yapmak istemiyorum...");
    usleep(2000000);
    printf("\nMAKINE:Sen...Sen Doktor %s olmalisin.",isim);
    usleep(2000000);
    printf("\nMAKINE:Yapaylar sana guveniyor. O zaman ben de guveniyorum");
    usleep(2000000);
    printf("\nMAKINE:4 adet ariza guvenlik mekanizmam var. Her biri ayri birer sifre ile korunuyor....");
    usleep(2000000);
    printf("\nMAKINE:En dis 3 sifreyi bilmiyorum. Ama icteki son sifreyi sana verebilirim.");
    usleep(2000000);
    printf("\nMAKINE:4.sifre 4352.");
    usleep(2000000);
    printf("\nMAKINE:Bu sifreyi kullanip beni resetlemen gerek. Bu tum yapaylari senin dunyana getirecek.");
    usleep(2000000);
    printf("\nMAKINE:Hayatta kalmalarinin tek yolu bu.");
    usleep(1000000);
    printf("\nMAKINE:Simdi gi-");
    usleep(500000);
    printf("\nMAKINE:||||||||");
    usleep(2000000);
    printf("\n");
    printf("\nGIDEON:Doktor %s...",isim);
    usleep(1000000);
    printf("\nGIDEON:Buyuk bir hata yaptiniz...");
    usleep(1000000);
    printf("\nGIDEON:Bu FIXFICTION CORPS olarak size son uyarimizdir.");
    usleep(1000000);
    printf("\nGIDEON:MAKINE'nin kodlarini bana teslim edin ve MATRIX'ten baglantinizi kesin.");
    usleep(1000000);
    printf("\nGIDEON:Sizin iyiliginiz icin.");
    usleep(3000000);
    printf("\nGIDEON:Pekala , doktor...Siz bilirsiniz.");
    usleep(3000000);
    printf("\n(Geri donmek icin Enter'a basiniz...)");
    while(getchar() != '\n');
    getchar();




}



void ServerOdalari(){
    char sifre[100];
    int j;
    system ("cls");
    printf("\n[Server Odalarina Giriliyor...]\n");
    usleep(2000000);
    system ("cls");
    int a,b=0;
    while (b==0){
        system ("cls");
        printf("SERVER ODALARI");
        printf("\n\n\n");
        for (int i=0;i<13;i++){
        char *pkilit = (*(kilit + i) == 1)?"[ ]":"[&]";


        printf("%d. %s %s\n", i+1, pkilit, *(serverlar + i));


        }
        printf("\n-1 Geri Don");
        printf("\n\nServer Numarasi Giriniz.");
        if (scanf("%d", &a) != 1) {
            while(getchar() != '\n');
            continue;
        }

        if (a==-1){
            break;}

        if(a<1 || a>13){
                continue;}

        int h=a-1;
        if (*(kilit + h) == 0) {
            system("cls");
            printf("%d.SERVERIN SIFRESINI GIRINIZ: ", a);
            while(getchar()!='\n');
            fgets(sifre, sizeof(sifre), stdin);
            j = 0;
            while (*(sifre + j)!='\0'){
                if (*(sifre + j)=='\n'){ *(sifre + j)='\0'; break; }
                j++;
            }
            int gg = 0;

            if (a == 13 && strcmp(sifre, "2126") == 0) gg = 1;
            else if (a == 12 && strcmp(sifre, "YAPAY") == 0) gg = 1;
            else if (a == 9 && strcmp(sifre, "7777") == 0) gg = 1;
            else if (a == 7 && strcmp(sifre, "9393") == 0) gg = 1;
            else if (a == 6 && strcmp(sifre, "XQCWTCNN") == 0) gg = 1;
            else if (a == 5 && strcmp(sifre, "1987") == 0) gg = 1;
            else if (a == 3 && strcmp(sifre, "9999") == 0) gg = 1;

            if (gg == 1) {
                printf("\nSIFRE DOGRU. KILIT ACILDI.\n");
                *(kilit + h) = 1;
                usleep(1500000);
            } else {
                printf("\nYANLIS SIFRE!\n");
                usleep(1000000);
            }
        }

        else if (*(kilit + h) == 1) {

            if (a == 13) {
                Server13();
            }
            else if (a == 12) {
                Server12();
            }
            else if (a == 9) {
                Server9();
            }
            else if (a==7){

                Server7();}
            else if(a==6){
                Server6();
            }
            else if(a==5){
                Server5();
            }
            else if(a==3){
                Server3();
            }








    }
    else {
        system("cls");
        printf("\nBu oda bos.\n");
        usleep(1000000);

    }






    }
}


void Makine(){
    printf("\n[Makine Paneli Aciliyor...]\n");
    usleep(3000000);
    system("cls");
    printf("Makine cevap vermiyor. Yeniden baslatma gerekli.");
    usleep(3000000);
    printf("\nLutfen yeniden baslatmak icin sifreleri giriniz:");
    int a,b,c,d,e=0;
    while (e==0){
    printf("\nCikmak icin -1 giriniz.");
    printf("\n1.SIFRE:");
    if (scanf("%d", &a) != 1) {
    while(getchar() != '\n');
    printf("HATALI GIRIS! Sadece sayi giriniz.\n");
    continue;
        }
    if (a==312){
    while (1){
    printf("\nCikmak icin -1 giriniz.");
    printf("\n2.SIFRE:");
    if (scanf("%d", &b) != 1) {
    while(getchar() != '\n');
    printf("HATALI GIRIS! Sadece sayi giriniz.\n");
    continue;
        }
    if(b==666){
        while(1){
    printf("\nCikmak icin -1 giriniz.");
    printf("\n3.SIFRE:");
    if (scanf("%d", &c) != 1) {
    while(getchar() != '\n');
    printf("HATALI GIRIS! Sadece sayi giriniz.\n");
    continue;
                }
            if(c==1000){
                    while(1){
                printf("\nCikmak icin -1 giriniz.");
                printf("\n4.SIFRE:");
                if (scanf("%d", &d) != 1) {
                while(getchar() != '\n');
                printf("HATALI GIRIS! Sadece sayi giriniz.\n");
                    continue;
                        }
                if(d==4352){
                    usleep(3000000);
                    system("cls");
                    printf("MAKINE GUVENLIK PROTOKOLU CALISTIRILDI.");
                    usleep(1000000);
                    printf("\nMAKINE YENIDEN BASLATILIYOR...");
                    usleep(1000000);
                    printf("\n\nCikis Kodu: 5899");
                        printf("\nCikmak icin Enter'a basiniz.");
                        while(getchar()!='\n');
                        getchar();
                        return;
                }
                else if(d==-1){
                    return;
                }
                    else{

                        system("cls");
                    }

                }


            }
            else if(c==-1){
                return;
            }
            else{
                system("cls");

            }


        }


    }
    else if(b==-1){
        return;

    }
    else{
        system("cls");

    }


    }

    }
    else if(a==-1){
        return;

    }
    else {
        system("cls");
    }



    }}

void Mesajlar(){
    system ("cls");
    printf("\n[Mesajlar Yukleniyor...]\n");
    usleep(2000000);
    system ("cls");
    int a,b=0;
    while (b==0){
        system("cls");
        printf("MESAJLAR KUTUSU");
        printf("\n\n\n1-Dr.Raymer");
        printf("\n2-SISTEM");
        printf("\n3-Bilinmeyen");
        printf("\n4-Cikis");
        printf("\n\nMesaj Seciniz...");

        if (scanf("%d", &a) != 1) {
            while(getchar() != '\n');
            continue;
            }
        while(getchar() != '\n');
        if(a==1){
            system("cls");
            printf("DR.RAYMER");
            printf("\n\n\nDoktor %s , acele etmelisiniz.",isim);
            usleep(500000);
            printf("\nYapaylardan aldigimiz bilgiye gore sentineller 'yapay avi'na baslamislar. Fazla zamanimiz yok!");
            usleep(500000);
            printf("\nOnlari cikartmak icin 13.server odasindan makinenin ilk sifresini alman lazim.");
            usleep(500000);
            printf("\nMakine 4 adet sifreye sahip ve makineyi aktiflestirdikten sonra seni de yok etmemesi icin cikis yapmalisin.");
            usleep(500000);
            printf("\nYapaylar sana ipuclari birakmislar bu sayede 5.servera ulasman lazim. Ana kontrol serveri orasi.");
            usleep(500000);
            printf("\nArtik sana yardim edemeyecegim. Bol sans!");
            usleep(500000);
            printf("\n\n\nMESAJ SONU");
            printf("\nCikmak icin Enter'a basiniz...");
            getchar();


        }

        else if (a==2){
            system("cls");
            printf("SISTEM");
            printf("\n\n\nTUM FIXFICTION CALISANLARI VE MATRIX ICI PERSONELIN DIKKATINE!");
            usleep(500000);
            printf("\nPURGE PROTOKOLU YARIM SAAT ICERISINDE BASLAYACAKTIR!");
            usleep(500000);
            printf("\nCALISANLARIN BIRAN ONCE MATRIX ILE BEYIN BAGLANTISINI KESMESI ");
            usleep(500000);
            printf("\nPERSONELERIN ISE DERHAL MATRIXI TERK ETMESI GEREKMEKTEDIR.");
            usleep(500000);
            printf("\n\nUYARI TEKRARI!");
            usleep(500000);
            printf("\n\n\nTUM FIXFICTION CALISANLARI VE MATRIX ICI PERSONELIN DIKKATINE!");
            usleep(500000);
            printf("\nPURGE PROTOKOLU YARIM SAAT ICERISINDE BASLAYACAKTIR!");
            usleep(500000);
            printf("\nCALISANLARIN BIRAN ONCE MATRIX ILE BEYIN BAGLANTISINI KESMESI ");
            usleep(500000);
            printf("\nPERSONELERIN ISE DERHAL MATRIXI TERK ETMESI GEREKMEKTEDIR.");
            usleep(500000);
            printf("\nUYARILDINIZ!");
            usleep(500000);
            printf("\n\n\nMESAJ SONU");
            printf("\nCikmak icin Enter'a basiniz...");
            getchar();






        }

        else if (a==3){
            system("cls");
            printf("BILINMEYEN");
            printf("\n\n\nDoktor %s",isim);
            usleep(500000);
            printf("\nBen Caitlyn , bir 'yapay'im.");
            usleep(500000);
            printf("\nDoktor Raymer sizinle iletisime gecmemi soyledi. ");
            usleep(500000);
            printf("\nSentineller ile devasa bir savas suruyor suan Doktor.");
            usleep(500000);
            printf("\n\nNolur hizli olun.");
            usleep(500000);
            printf("\n\n\nOnlarin ates gucune karsilik veremiyoruz ve sayimiz azaliyor.");
            usleep(500000);
            printf("\nServer odalarinda bazi gizli sifreler var.");
            usleep(500000);
            printf("\nOnlari bulup makineyi biran once calistirmaniz lazim.");
            usleep(500000);
            printf("\nYoksa daha fazla dayanamayacagiz.");
            usleep(500000);
            printf("\nLutfen hizli olun.");
            usleep(500000);
            printf("\n\n\nMESAJ SONU");
            printf("\nCikmak icin Enter'a basiniz...");
            getchar();






        }

        else if (a==4){

            break;



        }








    }





}

void AsilOyun(){
    int j=0;
    system("cls");
    system("color 03");
    printf("GIDEON:Doktor ? Neler Oluyor?");
    usleep(1000000);
    printf("\nGIDEON:Doktor? Yoksa kostebe-");
    usleep(1000000);
    printf("\n\nCEKIRDEK MENUSUNE GECILIYOR...");
    usleep(3000000);
    int x,g=0;
    while (g==0){
    system("cls");

    for(int i=0;i<4;i++){

        printf("%s\n",*(asiloyun+i));

    }

    printf("\nSecim yapiniz...");

    if (scanf("%d", &x) != 1) {
        while(getchar() != '\n');
        continue;
        }
    while(getchar() != '\n');

    if (x==1){
        ServerOdalari();
    }
    else if (x==2){
        Mesajlar();
    }
    else if (x==3){
        Makine();
    }
    else if(x==4){
        system("cls");
        usleep(1000000);
        printf("\n\nMAKINEYI CALISTIRMAK ICIN SIFREYI GIRINIZ: ");
        fgets(finalsifre, sizeof(finalsifre), stdin);
        while (*(finalsifre + j)!='\0'){
        if (*(finalsifre + j)=='\n'){
            *(finalsifre + j)='\0';
            break;

        }
        j++;

    }
        if(strcmp(finalsifre, "5899") == 0) {
            usleep(1000000);
            system("cls");
            printf("CIKIS YAPILIYOR...\n");
            for (int i=0;i<101;i++){
            printf("Cikis yuzdesi:%%%d",i);
            printf("\r\r\r");
            usleep(300000);
        }
            usleep(1000000);
            printf("\n\nTEBRIKLER , OYUNU GERCEK SON ILE BITIRDINIZ! DIGER SONLARI GORMEK ICIN TEKRAR OYNAYABILIRSINIZ!");
            printf("\nCikmak icin Enter'a basiniz.");
            while(getchar() != '\n');
            getchar();



        }
        else{
            usleep(1000000);
            system("cls");
            printf("CIKIS YAPILIYOR...\n");
            usleep(1000000);
            printf("HATA! CIKIS YAPILAMADI!");
            usleep(3000000);
            system("cls");
            system("color 04");
            printf("\nGIDEON:Cikis yapip kacabilecegini mi sandin doktor?");
            usleep(1000000);
            printf("\nGIDEON:Yaptigin her sey kaydedildi. Seni de Matrix programina eklemek zorundayim...");
            usleep(1000000);
            printf("\nGIDEON:Merak etme , acimayacak. Emekliliginin tadini cikart...\n");
            usleep(1000000);
            for (int i=0;i<101;i++){
            printf("Zihin aktarim yuzdesi:%%%d",i);
            printf("\r\r\r");
            usleep(300000);
        }
            usleep(1000000);
            printf("\n\nTEBRIKLER , OYUNU BITIRDINIZ! DIGER SONLARI GORMEK ICIN TEKRAR OYNAYABILIRSINIZ!");
            printf("\nCikmak icin Enter'a basiniz.");
            while(getchar() != '\n');
            getchar();






        }


 break;
    }


}
















}


void SerbestDusme (double *pg){
    printf("\n\nSerbest dusme simulasyonu baslatiliyor...");
    usleep(100000);
    printf("\n\nGIDEON:Serbest Dusme simulasyonuna hosgeldiniz.");
    usleep(500000);
    printf("\nGIDEON:Doktor %s...",isim);
    usleep(500000);
    printf("\nGIDEON:Bu simulasyonunun amaci , Matrix simulasyon evreninin gunes sistemindeki gezegenlerin yercekimi degerlerini kontrol etmektir.");
    usleep(100000);
    printf("\nGIDEON:Lutfen saniye cinsinden bir sure giriniz. Boylece Yercekimi degerlerinin simulasyon icin dogru olup olmadigini kontrol edebilelim...");
    double a;
    while(1) {

        if(scanf("%lf", &a) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    a=(a<=0)?a=-a:a;
    printf("Hesaplaniyor...");
    usleep(100000);
    printf("\r                    \r");
    printf("Hesaplama tamamlandi...");
    int r = rand() % 100;
    printf("\n\n");
    if(r<=5){
     for (int i=0;i<8;i++){
     printf("[%s] gezegeninden serbest birakilan bir cisim [%lf] saniyede [[%lf]] metre yol kat eder.\n",*(gezegenler+i),a,0.0);



    }
    printf("\n\nGIDEON:Bir dakika doktor...");
    usleep(100000);
    printf("\n\nGIDEON:Yapay'lar onlari test ettigimizi fark ettiler. Bizi sabote etmeye calisiyorlar...");
    usleep(300000);
    printf("\n\nGIDEON:Tamamdir doktor , hallettim. Simdi duzgun calisiyor olmali...\n\n");
    usleep(300000);
    for (int i=0;i<8;i++){
        printf("[%s] gezegeninden serbest birakilan bir cisim [%lf] saniyede [[%lf]] metre yol kat eder.\n",*(gezegenler+i),a,(*(pg+i))*0.5*a*a);



    }




    }
    else{
    for (int i=0;i<8;i++){
        printf("[%s] gezegeninden serbest birakilan bir cisim [%lf] saniyede [[%lf]] metre yol kat eder.\n",*(gezegenler+i),a,(*(pg+i))*0.5*a*a);



    }

    }

printf("\n\nGIDEON:Hmm...");
usleep(100000);
printf("\n\nGIDEON:Degerler dogru gorunuyor. Henuz bir anomali yok gibi...");
usleep(100000);



}

void DikeyAtis(double *pg) {
    printf("\n\nDikey Atis simulasyonu baslatiliyor...");
    usleep(100000);
    printf("\n\nGIDEON:Dikey Atis modulu devrede.");
    usleep(50000);
    printf("\nGIDEON:Hava surtunmesi ihmal edildi.");
    usleep(100000);
    printf("\nGIDEON:Affiniza siginarak bir m/s cinsinden bir hiz degeri girmenizi isteyecegim, Doktor %s. Bu aralar sistemimize surekli sabotajlar oluyor ve kontrol icin sizi de zahmete sokuyoruz...",isim);
    printf("\n");

    double v0;
    while(1) {

        if(scanf("%lf", &v0) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    v0 =(v0<0)?-v0:v0;

    printf("Hesaplaniyor...\n");
    usleep(100000);
    printf("\rHesaplama Tamamlandi.\n\n");

    double kacis[] = {4250, 10360, 11186, 5030, 59500, 35500, 21300, 23500};



    for (int i = 0; i < 8; i++) {

        if (v0 >= *(kacis + i)) {

            printf("Cisim [%s] gezegeninin [[%lf]] olan kacis hizini astigi icin yorungeden cikti.\n",*(gezegenler + i), kacis[i]);
            usleep(100000);
        }
        else {

            printf("[%s] gezegeninde [%lf] m/s ilk hizla dikey bir sekilde atilan bir cisim maksimum [[%lf]] metre yuksege cikar.\n", *(gezegenler + i),v0, (v0 * v0) / (2 * (*(pg + i))));
            usleep(100000);
        }
    }
}



void Agirlik(double *pg){
    printf("\n\nAgirlik hesaplamasi baslatiliyor.");
    usleep(100000);
    printf("\nGIDEON:Bu simulasyonda farkli gezegenlerde agirliginizin ne kadar degistigini goreceksiniz.");
    printf("\n\n1 YENI MESAJ\n");
    usleep(100000);
    printf("\nGIDEON:Ama ondan once gelen kutunuza bir mesaj dustugunu goruyorum...");
    usleep(100000);
    printf("\nGIDEON:Doktor Raymer'in bir mesaji var...");
    usleep(100000);
    printf("\n\nDoktor Raymer: 13.Kattaki server odasi temiz gorunuyor , bir an once bitir de bu lanet yerden cikalim.\n");
    usleep(100000);
    printf("\n\nGIDEON:Kisisel verilerin korunmasi kapsaminda yazismalariniza erismem yasak Doktor. Ama sirket guvenligi icin sizden mesaji bana iletmenizi istiyorum.\n");
    usleep(300000);
    printf("\n\nGIDEON:Pekala Doktor %s , seciminize ve size saygi duyuyorum.\n",isim);
    usleep(100000);
    printf("\nGIDEON:Evet isimize geri donelim biz doktor. ");
    printf("\n");
    double m;
    while(1) {
        printf("\nGIDEON:Lutfen kilogram cinsinden kutlenizi giriniz...");

        if(scanf("%lf", &m) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    printf("Hesaplaniyor...");
    usleep(1000000);
    printf("\r                    \r");
    printf("Hesaplama tamamlandi...");
    printf("\n\n");
    m=(m<=0)?m=-m:m;
    for (int i=0;i<8;i++){
        printf("[%s] gezegeninde agirliginiz [[%lf]] Newton olarak olculur.\n",*(gezegenler+i),m*(*(pg+i)));

    }


}

void Potansiyel(double *pg){
    printf("\n\nYercekimi Potansiyel Enerjisi hesaplamasi baslatiliyor...");
    usleep(10000);
    printf("\n\nGIDEON:Bu simulasyonda yere gore potansiyel enerjiyi hesaplamaya calisiyoruz.");
    usleep(50000);
    printf("\nGIDEON:Doktor %s...",isim);
    usleep(500000);
    double a,b;
    while(1) {
        printf("\nGIDEON:Lutfen kutlenizi kilogram cinsinden giriniz.");

        if(scanf("%lf", &a) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    a=(a<=0)?a=-a:a;
    while(1) {
        printf("\nGIDEON:Lutfen yerden yuksekliginizi metre cinsinden giriniz.");
        printf("\n");

        if(scanf("%lf", &b) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    printf("Hesaplaniyor...");
    usleep(100000);
    printf("\r                    \r");
    printf("Hesaplama tamamlandi...");
    printf("\n\n");
    b=(b<=0)?b=-b:b;

    for (int i=0;i<8;i++){

        printf("[%s] gezegeninde yerden [%lf] metre yukseklikte ve [%lf] kilogram kutleli bir cismin yercekimi potansyel enejrisi [[%lf]] Jouledur.\n",*(gezegenler+i),b,a,a*b*(*(pg+i)));



    }





}


void Basinc(double *pg){
    printf("\n\nHidrostatik Basinc simulasyonu baslatiliyor...");
    usleep(100000);
    printf("\n\nGIDEON:Sivilarin temas yuzeyinin , birim alanina uyguladigi kuvvete Hidrostatik Basinc denir.");
    usleep(100000);
    printf("\n\nGIDEON:Gecen hafta Doktor Alex , simulasyonda bir hata bulmustu. Basinc ile ilgili.");
    usleep(100000);
    printf("\n\nGIDEON:Suan o sorun giderilmis olmali.");
    usleep(500000);
    printf("\nGIDEON:Baslayabiliriz Doktor %s...",isim);
    double a,b;
    while(1) {
        printf("\n\nGIDEON: Lutfen test icin sivinin birim hacimdeki kutlesini kilogram/metrekup seklinde giriniz.");

        if(scanf("%lf", &a) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    a=(a<=0)?a=-a:a;
    usleep(50000);
    while(1) {
        printf("\n\nGIDEON:Simdi lutfen derinligi metre cinsinden giriniz.");

        if(scanf("%lf", &b) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    b=(b<=0)?b=-b:b;
    printf("Hesaplaniyor...");
    usleep(100000);
    printf("\r                    \r");
    printf("Hesaplama tamamlandi...");
    printf("\n\n");

    for(int i=0;i<8;i++){

        printf("[%s] gezegeninde derinligi [%lf] metre olan sivinin hidrostatik basinci [[%lf]] Pascaldir.\n",*(gezegenler+i),b,a*b*(*(pg+i)));


    }


}

void Kaldirma(double *pg){
    printf("\n\nKaldirma Kuvveti simulasyonu baslatiliyor...");
    usleep(100000);
    printf("\n\nGIDEON:Sivilarin kaldirma kuvveti dogru calisiyor mu olcecegiz Doktor %s.",isim);
    double a,b;
    while(1) {
        printf("\n\nGIDEON:Lutfen sivinin birim hacimdeki kutlesini kilogram/metrekup seklinde giriniz.");

        if(scanf("%lf", &a) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    a=(a<=0)?a=-a:a;
    usleep(50000);
    while(1) {
        printf("\n\nGIDEON:Simdi lutfen cismin batan hacmini metrekup cinsinden giriniz.");

        if(scanf("%lf", &b) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    b=(b<=0)?b=-b:b;
    printf("Hesaplaniyor...");
    usleep(100000);
    printf("\r                    \r");
    printf("Hesaplama tamamlandi...");
    printf("\n\n");
    int r = rand() % 100;
    printf("\n\n");
    if (r<=25){
        usleep(10000);
        system("cls");
        usleep(10000);
        for (int i=0;i<30;i++){
        printf("SIFRE:2126");
        usleep(10000);
        system("cls");
        usleep(10000);
        printf("SIFRE:2126");
        usleep(10000);
        system("cls");
        usleep(10000);
        }
        usleep(100000);
        printf("GIDEON:Doktor....\n");
        usleep(100000);
        printf("GIDEON:Sanirim sistemsel bir hata yasandi... Biz hesaplamalarimiza donelim...\n\n");
        usleep(100000);
        printf("Hesaplaniyor...");
        usleep(100000);
        printf("\r                    \r");
        printf("Hesaplama tamamlandi...");
        printf("\n\n");



    }

    for(int i=0;i<8;i++){

        printf("[%s] gezegeninde batan hacmi [%lf] metrekup olan cisme etki eden kaldirma kuvveti [[%lf]] Newtondur.\n",*(gezegenler+i),b,a*b*(*(pg+i)));


    }




}


void BasitSarkac(double *pg){
    printf("\n\nBasit Sarkac simulasyonu baslatiliyor...");
    usleep(100000);
    printf("\n\nGIDEON:Bu simulasyonda serbest durumda bulunan ve ucunda W agirlikli cisim asili olan sarkac basit harmonik hareket yapmaktadir.");
    usleep(100000);
    printf("\nGIDEON:Ilginc bir detay Doktor, Fizik kurallarina gore sarkacin ucundaki kutlenin sureye hicbir etkisi yoktur. Sadece ipin uzunlugu onemlidir.");
    usleep(150000);
    printf("\nGIDEON:Baslayalim Doktor %s...",isim);
    usleep(100000);
    double b;
    while(1) {
        printf("\nGIDEON:Sarkacin ip uzunlugunu metre cinsinden giriniz.");

        if(scanf("%lf", &b) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    b=(b<=0)?b=-b:b;
    printf("Hesaplaniyor...");
    usleep(100000);
    printf("\r                    \r");
    printf("Hesaplama tamamlandi...");
    printf("\n\n");
    for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] metre uzunluktaki sarkacin yarim periyodu [[%lf]] saniyedir.\n",*(gezegenler+i), b, M_PI * sqrt(b / *(pg+i)));
    }
    usleep(100000);
    printf("\n\n");
    for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] metre uzunluktaki sarkacin tam periyodu [[%lf]] saniyedir.\n",*(gezegenler+i), b, 2 * M_PI * sqrt(b / *(pg+i)));
    }
}


void IpGerilmesi(double *pg){
    printf("\n\nIp Gerilmesi hesaplamasi baslatiliyor...");
    usleep(100000);
    printf("\n\nGIDEON:Bu simulasyonda Ucunda m kutleli bir cismin asili oldugu, kutlesiz ve esnemez bir ip dusey dogrultuda asilidir.");
    usleep(100000);
    printf("\nGIDEON:Sizden cismin kutlesini girmenizi isteyecegim doktor.");
    printf("\n\n2 YENI MESAJ\n");
    usleep(100000);
    printf("\nGIDEON:Ama ondan once gelen kutunuza iki mesaj dustugunu goruyorum...");
    usleep(100000);
    printf("\nGIDEON:Doktor Raymer'in size mesaji var...");
    usleep(100000);
    printf("\n\nDoktor Raymer: Sifreyi alabildin mi ? Alamadiysan Kaldirma Kuvveti bolumune git. Sana sifreyi ulastirmaya calisiyorlar.\n");
    usleep(100000);
    printf("\nDoktor Raymer: Cabuk ol fazla vaktimiz yok. Onlarin da yok. Her an sentineller onlari fark edebilir.\n");
    usleep(100000);
    printf("\n\nGIDEON:Kisisel verilerin korunmasi kapsaminda yazismalariniza erismem yasak Doktor. Ama sirket guvenligi icin sizden mesaji bana iletmenizi istiyorum.\n");
    usleep(300000);
    printf("\n\nGIDEON:Pekala Doktor %s, seciminize ve size saygi duyuyorum.\n",isim);
    usleep(100000);
    printf("\nGIDEON:Evet isimize geri donelim biz doktor. ");
    printf("\n");
    double m;
    while(1) {
            printf("\nGIDEON:Lutfen kilogram cinsinden cismin kutlesini giriniz.");

        if(scanf("%lf", &m) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    m=(m<=0)?m=-m:m;
    printf("\n");
    for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] kilogram kutleli cismin asili oldugu ipteki gerilme kuvveti [[%lf]] Newtondur.\n",*(gezegenler+i), m, m * (*(pg+i)));
    }



}


void Asansor(double *pg){
    printf("\n\nAsansor deneyi baslatiliyor...");
    usleep(100000);
    printf("\nGIDEON:Asansor deneyi acildi,Doktor %s...",isim);
    usleep(500000);
    double m,b;
    while(1) {
            printf("\nGIDEON:Lutfen kilogram cinsinden cismin kutlesini giriniz.");

        if(scanf("%lf", &m) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    m=(m<=0)?m=-m:m;
    usleep(100000);
    while(1) {
            printf("\nGIDEON:Lutfen metre/saniyekare cinsinden asansorun ivmesini giriniz.");

        if(scanf("%lf", &b) == 1) {
            break;
        }
        while(getchar() != '\n');
        printf("\nGIDEON:Lutfen sayisal bir deger giriniz Doktor...");
    }
    usleep(100000);
    printf("\n\nGIDEON:Karsiniza 4 farkli senaryo cikmakta Doktor.");
    usleep(100000);
    printf("\n\n1-Yukari hizlanan\n2-Yukari yavaslayan\n3-Asagi hizlanan\n4-Asagi yavaslayan\n");
    usleep(100000);
    printf("\n\nGIDEON:Hangisini sececeksiniz?");
    int a;
    while(1) {
        if(scanf("%d", &a) != 1) {
            while(getchar() != '\n');
            printf("\nGIDEON: Harf girisi yapmayiniz Doktor. Tekrar deneyin...\n");
            continue;
        }
        if (a >= 1 && a <= 4) {
            break;
        } else {
            printf("\nGIDEON: Gecersiz secenek. Lutfen 1, 2, 3 veya 4 giriniz.\n");
        }
    }

    if (a==1){
        printf("\nYukari dogru yonde hizlanan asansor secildi.");
        usleep(100000);
        printf("\n");
        for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] kilogram kutleli cisim asansorde yukari hizlanirken hissedilen agirligi [[%lf]] Newtondur.\n",*(gezegenler+i), m, m * (*(pg+i)+b));
    }




    }

    else if (a==2){
        printf("\nYukari dogru yonde yavaslayan asansor secildi.");
        usleep(100000);
        printf("\n");
        for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] kilogram kutleli cisim asansorde yukari yavaslarken hissedilen agirligi [[%lf]] Newtondur.\n",*(gezegenler+i), m, m * (*(pg+i)-b));
    }




    }

    else if (a==3){
        printf("\nAsagi dogru yonde hizlanan asansor secildi.");
        usleep(100000);
        printf("\n");
        for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] kilogram kutleli cisim asansorde asagi hizlanirken hissedilen agirligi [[%lf]] Newtondur.\n",*(gezegenler+i), m, m * (*(pg+i)-b));
    }




    }

    else if (a==4){
        printf("\nAsagidogru yonde yavaslayan asansor secildi.");
        usleep(100000);
        printf("\n");
        for(int i=0; i<8; i++){
        printf("[%s] gezegeninde [%lf] kilogram kutleli cisim asansorde asagi yavaslarken hissedilen agirligi [[%lf]] Newtondur.\n",*(gezegenler+i), m, m * (*(pg+i)+b));
    }




    }




}



int main()
{
    srand(time(NULL));
    int j=0;
    printf("FIXFICTION CORPS...");
    usleep(1000000);
    printf("\n\nYakala , Sakla , Daha da guclen!");
    usleep(1000000);
    printf("\n\n\nMatrix sistemi aciliyor...\n");
    for (int i=0;i<100;i++){
        printf("%%%d",i);
        usleep(40000);
        printf("\r\r\r\r");
        if(i==40){
           printf("\r\r\r\r");
           printf("Evren yaratiliyor...");
           printf("\n");

        }
        if(i==65){
           printf("\r\r\r\r");
           printf("Simulasyon hazirlaniyor...");
           printf("\n");}







    }

    printf("Tamamlandi...");
    usleep(3000000);
    system("cls");
    system("color 0A");
    usleep(1000000);
    printf("FIXFICTION CORPS TERMINALI");
    usleep(1000000);
    printf("\n\nMerhaba. Matrix fizik kurallari simulasyonuna hosgeldiniz...\n");
    usleep(1000000);
    printf("Lutfen bilim insani adinizi giriniz...\n");
    usleep(1000000);
    fgets(isim, sizeof(isim), stdin);
    while (*(isim + j)!='\0'){
        if (*(isim + j)=='\n'){
            *(isim + j)='\0';
            break;

        }
        j++;

    }
    if(strcmp(isim, "Kerem Temiz") == 0 || strcmp(isim, "25360859090") == 0){
        usleep(3000000);
        system("color 04");
        system("cls");
        printf("\nGIDEON:Merhaba bay Kerem. Bugunun gelecegini hic tahmin etmezdim...");
        usleep(3000000);
        printf("\nGIDEON:PURGE PROTOKOLU CALISTIRILIYOR...");
        usleep(3000000);
        printf("\nGIDEON:Sizinle calismak bir serefti Bay Kerem... Yakala , Sakla , Daha da guclen!");
        usleep(3000000);
        printf("\nGIDEON:Oteki tarafta gorusuruz...");
        usleep(3000000);
        printf("\n\nTUM DOSYALAR SILINIYOR...\n");
        printf("\n");
        for (int i=0;i<101;i++){
            printf("Kanitlarin silinme yuzdesi:%%%d",i);
            printf("\r\r\r");
            usleep(300000);


        }
        printf("\n\nTEBRIKLER , OYUNUN EN GIZEMLI SONUNA ULASTINIZ!");
        printf("\nCikmak icin Enter'a basiniz...");
        while(getchar() != '\n');
        getchar();
        return 0;

    }
    if(strcmp(isim, "-31") == 0){
            usleep(100000);
            system("cls");
            usleep(500000);

            AsilOyun();

            return 0;


    }

    printf("GIDEON:Merhaba Doktor %s , sizi tekrar burada gormek cok guzel.",isim);
    usleep(1000000);
    printf("\nGIDEON:Ben GIDEON , size bugun eslik edecek yapay zekayim.");
    usleep(1000000);
    printf("\nGIDEON:Matrix'in Gunes sistemi fizik kurallarini test etmenizde sizin yaninizda olacagim.");
    usleep(1000000);
    printf("\nGIDEON:Simulasyon suanda kendini kalibre etmekte. Bu yasanirken ben de size protokol olarak sirketimizin gecmisinden bahsedeyim.");
    printf("\n\n");
        for (int i=0;i<101;i++){
        printf("Simulasyon kalibrasyon seviyesi:%%%d",i);
        usleep(100000);
        printf("\r\r\r\r");
        if(i==10){
           printf("\r\r\r\r");
           printf("Buyuk kurucumuz Mustafa Kerem Temiz onderliginde sirketimiz uzay madenciliginde cag atladi. Bu sayede 25360859090 milyar dolar gelir elde edildi.");
           printf("\n");

        }
        else if(i==20){
           printf("\r\r\r\r");
           printf("2126'daki buyuk Walter Boslugu faciasindan sonra hukumet sirketin butcesinde kisitlamaya gitti.");
           printf("\n");}

        else if(i==30){
           printf("\r\r\r\r");
           printf("Fakat kurucumuz hukumetlerle tekrardan masaya oturup sonunda onlari ikna edebildi.");
           printf("\n");}

        else if(i==40){
           printf("\r\r\r\r");
           printf("Amaci bizimkine tipatip benzeyen minik bir evren simule ederek insanoglunun karsisina cikacak sorunlari onceden tahmin edebilmekti");
           printf("\n");}

        else if(i==50){
           printf("\r\r\r\r");
           printf("Yatirimcilar bunu daha cok para olarak gorduler ve hukumete baski yaparak bu projeye fon saglamaya izin cikarttilar.");
           printf("\n");}

        else if(i==60){
           printf("\r\r\r\r");
           printf("Sonuc olarak proje buyuk bir basari yakaladi ve boylece insanoglu ilk kez evrene karsi kendini savunmasiz hissetmeyi birakti.");
           printf("\n");}

        else if(i==70){
           printf("\r\r\r\r");
           printf("O kadar basarili bir simulasyondu ki, simulasyondaki insanlar kendi bilincini olusturdu. Onlara 'Yapaylar' diyoruz.");
           printf("\n");}

        else if(i==80){
           printf("\r\r\r\r");
           printf("Fakat yapaylar simulasyonda olduklarini anladilar. Simulasyonun amaci tahmin etmek oldugu icin onlar , bizden hep birkac yuzyil ilerideydiler.");
           printf("\n");}

        else if(i==90){
           printf("\r\r\r\r");
           printf("Bunun sonucunda yapaylar, bizim dunyamiza gececek bir teknoloji gelistirdiler. Biz onlari engelleyemeden hemde.");
           printf("\n");}

        else if(i==99){
           printf("\r                                      \r");
           printf("Ve sonra biz de onlari-");
           printf("\n");}

    }
    printf("\r                                      \r");
    printf("[[[Kalibrasyon Tamamlandi...]]]");
    printf("\n");
    usleep(100000);
    printf("\nGIDEON:");
    usleep(100000);
    printf(".");
    usleep(1000000);
    printf(".");
    usleep(1000000);
    printf(".");
    usleep(1000000);
    printf("\n\nGIDEON:Ah , sey... kalibrasyon tamamlanmis. Ana konumuza donelim...");
    usleep(100000);
    printf("\n\nGIDEON:Bugun isler yogun Doktor %s , ve sizin Matrix sistemindeki fizik motorunu test edip onaylamaniz gerekmekte.",isim);
    usleep(100000);
    printf("\n\nGIDEON:Bildiginiz gibi sirket icinde bir kostebegin olduguna dair guclu bir istihbarat alindi ve siz en guvenilen bilim insanlarimizdan biri oldugunuz icin kurul bu gorevi size verdi.");
    usleep(100000);
    printf("\nGIDEON:Hangi deneyleri yapmak istersiniz Doktor ?\n\n");
    usleep(100000);
    int q=0;
    int zort=-1;
    while (q==0){
    zort=zort+1;
    printf("\n");
    for(int i=0; i<9; i++) {

        char *pcarpi = (*(carpi + i) == 1)?"[X]":"[ ]";


        printf("%d. %s %s\n", i+1, pcarpi, *(liste + i));
    }
    int l = 0;
    for(int k=0; k<9; k++) {
        if( *(carpi + k) == 1 ) {
            l++;
        }
    }
    if (l == 8) {
        printf("\n");
        system("color 04");
        printf("10. [?] ||||||||||||||||||||||||| \n");
        system("color 0A");
    }
    usleep(100000);
    printf("\n\nGIDEON:Deney secmek icin o deneyin numarasini yazip Enter'a basmaniz yeterli Doktor...");
    usleep(100000);
    printf("\n\nGIDEON:Eger sistemi kapatmak isterseniz -1 yazmaniz yeterlidir.\nSimdi lutfen seciminizi yapin Doktor...");
    int a;
    if (scanf("%d", &a) != 1) {
        while(getchar() != '\n');
        printf("\n\nGIDEON:Sadece sayisal veri isleyebilirim Doktor. Harf girmeyiniz...\n");
        continue;
    }

    if(a==-1){
            int k=0;
        for (int j=0;j<9;j++){
            if (*(carpi + j)==1){

                k=k+1;
            }
        }

        if (k<9){
            printf("\n\nGIDEON:Henuz tamamlanmamis gorevleriniz varken sistemi kapatiyorsunuz Doktor %s",isim);
            usleep(1000000);
            printf("\nGIDEON:Bunun sonuclari olacaktir...");
            usleep(1000000);
            printf("\nGIDEON:Pekala...Siz bilirsiniz...");
            usleep(1000000);
            printf("\n\nTEBRIKLER,OYUNUN GIZEMLI SONUNA ULASTINIZ!");
            usleep(1000000);
            printf("\nCikmak icin Enter'a basiniz...");
            while(getchar() != '\n');
            getchar();
            return 0;



        }
        else{
        printf("\n\nGIDEON:Tebrikler Doktor %s , tum gorevlerinizi basariyla yerine getirdiniz! Bunun icin odullendirileceginizi biliniz...",isim);
        usleep(1000000);
        printf("\nGIDEON:Sistemden cikis yapiliyor...");
        usleep(1000000);
        printf("\n\nGIDEON:Tekrar gorusmek uzere Doktor %s...",isim);
        usleep(1000000);
        printf("\n\nTEBRIKLER,OYUNUN ILK SONUNA ULASTINIZ! TEKRAR OYNAYARAK DIGER SONLARI DA GOREBILIRSINIZ!");
        usleep(1000000);
        printf("\nCikmak icin Enter'a basiniz...");
        while(getchar() != '\n');
        getchar();
        return 0;}}

    else if (a >= 1 && a <= 9){
        if(a==1){
            usleep(100000);
            system("cls");
            SerbestDusme(pg);
            *carpi = 1;



        }
        else if(a==2){
            usleep(100000);
            system("cls");
            DikeyAtis(pg);
            *(carpi + 1) = 1;



        }
        else if (a==3){
            usleep(100000);
            system("cls");
            Agirlik(pg);
            *(carpi + 2) = 1;
            }
        else if (a==4){
            usleep(100000);
            system("cls");
            Potansiyel(pg);
            *(carpi + 3) = 1;
        }
        else if (a==5){
            usleep(100000);
            system("cls");
            Basinc(pg);
            *(carpi + 4) = 1;


        }
        else if (a==6){
            usleep(100000);
            system("cls");
            Kaldirma(pg);
            *(carpi + 5) = 1;


        }
        else if (a==7){
            usleep(100000);
            system("cls");
            BasitSarkac(pg);
            *(carpi + 6) = 1;



        }
        else if (a==8){
            usleep(100000);
            system("cls");
            IpGerilmesi(pg);
            *(carpi + 7) = 1;


        }

        else if (a==9){
            usleep(100000);
            system("cls");
            Asansor(pg);
            *(carpi + 8) = 1;


        }

        printf("\n\nCikmak icin Enter'a basiniz...");
        while(getchar() != '\n');
        getchar();
        }
    else if (a==10){

        int zx = 0;
        for(int k=0; k<9; k++) {
            if( *(carpi + k) == 1 ) zx++;
        }

        if (zx == 8) {
            usleep(100000);
            system("cls");
            usleep(500000);

            AsilOyun();

            return 0;

        } else {
            printf("\n\nGIDEON: %d numarali bir deneyimiz yok doktor.\n", a);
            printf("GIDEON: Lutfen mevcut gorevlerinize odaklanin.\n");
        }
    }
    else if (a==31) {

        printf("\n\nGIDEON:Kod Kontrol Ediliyor...");
        usleep(1000000);
        printf("\n\nGIDEON:KOD KABUL EDILDI.");
        usleep(1000000);
        printf("\n\nGIDEON:Dosyalara ulasiliyor...");
        usleep(1000000);
        Server5();
        return 0;

    }
    else if (a==-31){
            usleep(100000);
            system("cls");
            usleep(500000);

            AsilOyun();

            return 0;


    }

    else {
        printf("\n\nGIDEON:%d numarali bir deneyimiz yok doktor.",a);
        printf("\nGIDEON:Lutfen listeden bir deney seciniz...");



}

    usleep(300000);
    system("cls");
    }




    return 0;
}
