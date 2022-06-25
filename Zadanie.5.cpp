#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <limits>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

int main(int arc, char* argv[])
{
    const char* plik;

    if (argv[1] == nullptr)
        plik = "test.bmp";
    else
        plik = argv[1];

    Informacje(plik);
    Negatyw(plik);

    return 0;
}

struct PlikHeader {
    short Type;
    int Size;
    short Reserved1;
    short Reserved2;
    int OffBits;
} Plik;

struct ObrazHeader {
    int headerSize;
    int width;
    int height;
    short int planes;
    short int bitPerPixel;
    int compresion;
    int imageSize;
    int xPelsPerMeter;
    int yPelsPerMeter;
    int colorUsed;
    int colorImportant;
} Obraz;

struct KoloryRGB {
    char R;
    char G;
    char B;
} Rgb;

void Informacje(const char* plik)
{
    FILE* test = fopen(plik, "rb");

    if (test == nullptr)
    {
        cout << endl << "Nie udalo sie otworzyc pliku!" << endl;
    }
  
}

void Negatyw(const char* plik)
{

    FILE* test = fopen(plik, "rb");
    FILE* neg = fopen("negatyw.bmp", "wb");

    if (neg == nullptr)
    {
        cout << endl << "Nie udalo sie otworzyc pliku!" << endl;
    }
   

        cout << endl;
        fclose(test);
        fclose(neg);
    }