#include <stdio.h>
#include <stdlib.h>

// Epoch, 1 Ocak 1970 UTC tarihinden itibaren ge�en saniye say�s�n� ifade eder.

struct date {
    int year;    // Y�l
    int month;   // Ay
    int day;     // G�n
    int hour;    // Saat
    int minute;  // Dakika
    int second;  // Saniye    
};

// Sonu�lar� saklamak i�in kullan�lan union
union result {
    int final_result;  // Hesaplanan final sonu� (saniye cinsinden)
};

int main() {
    struct date first_date;   // Birinci tarih
    struct date second_date;  // �kinci tarih
    union result result;      // Sonu�lar� tutacak union
    
    int total_seconds_first = 0;   // Birinci tarihin toplam saniye cinsinden de�eri
    int total_seconds_second = 0;  // �kinci tarihin toplam saniye cinsinden de�eri
    int result_seconds;            // �ki tarih aras�ndaki fark

    
    // Birinci tarihin bilgilerini al�yoruz
    printf("Lutfen birinci yili giriniz: ");
    scanf("%d", &first_date.year);
    
    // Birinci ay� al�rken 1-12 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen birinci ayi giriniz(1 ve 12 arasi bir deger girin): ");
        scanf("%d", &first_date.month);
        if (first_date.month < 1 || first_date.month > 12) {
            printf("Girilen sayi 1 ve 12 arasinda degil.\n");
        }
    } while (first_date.month < 1 || first_date.month > 12);

    // Birinci g�n� al�rken 1-30 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen birinci gunu giriniz(1 ve 31 arasi bir deger girin): ");
        scanf("%d", &first_date.day);
        if (first_date.day < 1 || first_date.day > 31) {
            printf("Girilen sayi 1 ve 31 arasinda degil.\n");
        }
    } while (first_date.day < 1 || first_date.day > 31);

    // Birinci saati al�rken 0-23 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen birinci saati giriniz(0 ve 23 arasi bir deger girin): ");
        scanf("%d", &first_date.hour);
        if (first_date.hour < 0 || first_date.hour > 23) {
            printf("Girilen sayi 0 ve 23 arasinda degil.\n");
        }
    } while (first_date.hour < 0 || first_date.hour > 23);

    // Birinci dakikay� al�rken 0-59 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen birinci dakikayi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &first_date.minute);
        if (first_date.minute < 0 || first_date.minute > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (first_date.minute < 0 || first_date.minute > 59);

    // Birinci saniyeyi al�rken 0-59 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen birinci saniyeyi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &first_date.second);
        if (first_date.second < 0 || first_date.second > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (first_date.second < 0 || first_date.second > 59);
    
    // �kinci tarihin bilgilerini al�yoruz
    printf("Lutfen ikinci yili giriniz: ");
    scanf("%d", &second_date.year);
    
    // �kinci ay� al�rken 1-12 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen ikinci ayi giriniz(1 ve 12 arasi bir deger girin): ");
        scanf("%d", &second_date.month);
        if (second_date.month < 1 || second_date.month > 12) {
            printf("Girilen sayi 1 ve 12 arasinda degil.\n");
        }
    } while (second_date.month < 1 || second_date.month > 12);

    // �kinci g�n� al�rken 1-31 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen ikinci gunu giriniz(1 ve 31 arasi bir deger girin): ");
        scanf("%d", &second_date.day);
        if (second_date.day < 1 || second_date.day > 31) {
            printf("Girilen sayi 1 ve 31 arasinda degil.\n");
        }
    } while (second_date.day < 1 || second_date.day > 31);

    // �kinci saati al�rken 0-23 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen ikinci saati giriniz(0 ve 23 arasi bir deger girin): ");
        scanf("%d", &second_date.hour);
        if (second_date.hour < 0 || second_date.hour > 23) {
            printf("Girilen sayi 0 ve 23 arasinda degil.\n");
        }
    } while (second_date.hour < 0 || second_date.hour > 23);

    // �kinci dakikay� al�rken 0-59 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen ikinci dakikayi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &second_date.minute);
        if (second_date.minute < 0 || second_date.minute > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (second_date.minute < 0 || second_date.minute > 59);

    // �kinci saniyeyi al�rken 0-59 aras�nda bir de�er girilmesini sa�l�yoruz
    do {
        printf("Lutfen ikinci saniyeyi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &second_date.second);
        if (second_date.second < 0 || second_date.second > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (second_date.second < 0 || second_date.second > 59);
    
    
    // �lk ve ikinci tarihin toplam saniye cinsinden de�erlerini hesapl�yoruz
    
    if (first_date.year >= 1970) {
    total_seconds_first = (first_date.year -1970) * 31556926 + (first_date.month -1) * 2592000 + first_date.day * 86400 + first_date.hour * 3600 + first_date.minute * 60 + first_date.second;
    } else total_seconds_first = ((first_date.year -1970) * 31556926) *-1 + (first_date.month -1) * 2592000 + first_date.day * 86400 + first_date.hour * 3600 + first_date.minute * 60 + first_date.second;
    
    if (first_date.year >= 1970) {
    total_seconds_second = (second_date.year -1970) * 31556926 + (second_date.month-1) * 2592000 + second_date.day * 86400 + second_date.hour * 3600 + second_date.minute * 60 + second_date.second;
    } else total_seconds_second = ((second_date.year -1970) * -1) * 31556926 + (second_date.month-1) * 2592000 + second_date.day * 86400 + second_date.hour * 3600 + second_date.minute * 60 + second_date.second;
    
    
    // E�er birinci tarih ikinci tarihten daha ge�se, fark� hesapl�yoruz
    if (total_seconds_first >= total_seconds_second) {
        result_seconds = total_seconds_first - total_seconds_second;
    }
    // E�er ikinci tarih birinci tarihten daha ge�se, fark� hesapl�yoruz
    else {
        result_seconds = total_seconds_second - total_seconds_first;
    }

    // Sonucu union'a at�yoruz
    result.final_result = result_seconds;

    // Sonucu ekrana yazd�r�yoruz
    printf("Iki tarih arasindaki fark: %d saniye.\n", result.final_result);

    return 0;
}
