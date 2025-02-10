#include <stdio.h>
#include <stdlib.h>

// Epoch, 1 Ocak 1970 UTC tarihinden itibaren geçen saniye sayýsýný ifade eder.

struct date {
    int year;    // Yýl
    int month;   // Ay
    int day;     // Gün
    int hour;    // Saat
    int minute;  // Dakika
    int second;  // Saniye    
};

// Sonuçlarý saklamak için kullanýlan union
union result {
    int final_result;  // Hesaplanan final sonuç (saniye cinsinden)
};

int main() {
    struct date first_date;   // Birinci tarih
    struct date second_date;  // Ýkinci tarih
    union result result;      // Sonuçlarý tutacak union
    
    int total_seconds_first = 0;   // Birinci tarihin toplam saniye cinsinden deðeri
    int total_seconds_second = 0;  // Ýkinci tarihin toplam saniye cinsinden deðeri
    int result_seconds;            // Ýki tarih arasýndaki fark

    
    // Birinci tarihin bilgilerini alýyoruz
    printf("Lutfen birinci yili giriniz: ");
    scanf("%d", &first_date.year);
    
    // Birinci ayý alýrken 1-12 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen birinci ayi giriniz(1 ve 12 arasi bir deger girin): ");
        scanf("%d", &first_date.month);
        if (first_date.month < 1 || first_date.month > 12) {
            printf("Girilen sayi 1 ve 12 arasinda degil.\n");
        }
    } while (first_date.month < 1 || first_date.month > 12);

    // Birinci günü alýrken 1-30 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen birinci gunu giriniz(1 ve 31 arasi bir deger girin): ");
        scanf("%d", &first_date.day);
        if (first_date.day < 1 || first_date.day > 31) {
            printf("Girilen sayi 1 ve 31 arasinda degil.\n");
        }
    } while (first_date.day < 1 || first_date.day > 31);

    // Birinci saati alýrken 0-23 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen birinci saati giriniz(0 ve 23 arasi bir deger girin): ");
        scanf("%d", &first_date.hour);
        if (first_date.hour < 0 || first_date.hour > 23) {
            printf("Girilen sayi 0 ve 23 arasinda degil.\n");
        }
    } while (first_date.hour < 0 || first_date.hour > 23);

    // Birinci dakikayý alýrken 0-59 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen birinci dakikayi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &first_date.minute);
        if (first_date.minute < 0 || first_date.minute > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (first_date.minute < 0 || first_date.minute > 59);

    // Birinci saniyeyi alýrken 0-59 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen birinci saniyeyi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &first_date.second);
        if (first_date.second < 0 || first_date.second > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (first_date.second < 0 || first_date.second > 59);
    
    // Ýkinci tarihin bilgilerini alýyoruz
    printf("Lutfen ikinci yili giriniz: ");
    scanf("%d", &second_date.year);
    
    // Ýkinci ayý alýrken 1-12 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen ikinci ayi giriniz(1 ve 12 arasi bir deger girin): ");
        scanf("%d", &second_date.month);
        if (second_date.month < 1 || second_date.month > 12) {
            printf("Girilen sayi 1 ve 12 arasinda degil.\n");
        }
    } while (second_date.month < 1 || second_date.month > 12);

    // Ýkinci günü alýrken 1-31 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen ikinci gunu giriniz(1 ve 31 arasi bir deger girin): ");
        scanf("%d", &second_date.day);
        if (second_date.day < 1 || second_date.day > 31) {
            printf("Girilen sayi 1 ve 31 arasinda degil.\n");
        }
    } while (second_date.day < 1 || second_date.day > 31);

    // Ýkinci saati alýrken 0-23 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen ikinci saati giriniz(0 ve 23 arasi bir deger girin): ");
        scanf("%d", &second_date.hour);
        if (second_date.hour < 0 || second_date.hour > 23) {
            printf("Girilen sayi 0 ve 23 arasinda degil.\n");
        }
    } while (second_date.hour < 0 || second_date.hour > 23);

    // Ýkinci dakikayý alýrken 0-59 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen ikinci dakikayi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &second_date.minute);
        if (second_date.minute < 0 || second_date.minute > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (second_date.minute < 0 || second_date.minute > 59);

    // Ýkinci saniyeyi alýrken 0-59 arasýnda bir deðer girilmesini saðlýyoruz
    do {
        printf("Lutfen ikinci saniyeyi giriniz(0 ve 59 arasi bir deger girin): ");
        scanf("%d", &second_date.second);
        if (second_date.second < 0 || second_date.second > 59) {
            printf("Girilen sayi 0 ve 59 arasinda degil.\n");
        }
    } while (second_date.second < 0 || second_date.second > 59);
    
    
    // Ýlk ve ikinci tarihin toplam saniye cinsinden deðerlerini hesaplýyoruz
    
    if (first_date.year >= 1970) {
    total_seconds_first = (first_date.year -1970) * 31556926 + (first_date.month -1) * 2592000 + first_date.day * 86400 + first_date.hour * 3600 + first_date.minute * 60 + first_date.second;
    } else total_seconds_first = ((first_date.year -1970) * 31556926) *-1 + (first_date.month -1) * 2592000 + first_date.day * 86400 + first_date.hour * 3600 + first_date.minute * 60 + first_date.second;
    
    if (first_date.year >= 1970) {
    total_seconds_second = (second_date.year -1970) * 31556926 + (second_date.month-1) * 2592000 + second_date.day * 86400 + second_date.hour * 3600 + second_date.minute * 60 + second_date.second;
    } else total_seconds_second = ((second_date.year -1970) * -1) * 31556926 + (second_date.month-1) * 2592000 + second_date.day * 86400 + second_date.hour * 3600 + second_date.minute * 60 + second_date.second;
    
    
    // Eðer birinci tarih ikinci tarihten daha geçse, farký hesaplýyoruz
    if (total_seconds_first >= total_seconds_second) {
        result_seconds = total_seconds_first - total_seconds_second;
    }
    // Eðer ikinci tarih birinci tarihten daha geçse, farký hesaplýyoruz
    else {
        result_seconds = total_seconds_second - total_seconds_first;
    }

    // Sonucu union'a atýyoruz
    result.final_result = result_seconds;

    // Sonucu ekrana yazdýrýyoruz
    printf("Iki tarih arasindaki fark: %d saniye.\n", result.final_result);

    return 0;
}
