#include <stdio.h>
#include <math.h>
struct Pixel{
    unsigned char B;
    unsigned char G;
    unsigned char R;
};
int main (){
    struct Pixel pixel, pixel3;
    int WPX, HPX, BPP, PAL, i, j, AUX, NCP, offset;
    FILE * imagem, * imagem3;
    unsigned char byte; // 1 byte
    unsigned short word; // 2 bytes
    unsigned int dword; // 4 bytes
    imagem = fopen ("SAPO.bmp","rb");
    if(imagem == NULL){
        fprintf(stderr, "Arquivo nao encontrado!\n");
        return 1;
    }
    fread(&byte, sizeof (byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof (byte), 1, imagem);
    printf("%c\n", byte);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do arquivo (bytes): %u\n", dword);
    fseek(imagem, 2* sizeof (word), SEEK_CUR);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Offset (bytes): %u\n", dword);
    offset = dword;
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho do cabecalho (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem (pixels): %u\n", WPX);
    fread(&dword, sizeof(dword), 1, imagem);
    HPX = dword;
    printf("Altura da imagem (pixels): %u\n", HPX);
    fread(&word, sizeof(word), 1, imagem);
    printf("Qtde de planos de cores: %u\n", word);
    fread(&word, sizeof(word), 1, imagem);
    BPP= word;
    printf("Bits por pixel: %u\n", BPP);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Metodo de compressao: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Tamanho da imagem (bytes): %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao horizontal: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Resolucao Vertical: %u\n", dword);
    fread(&dword, sizeof(dword), 1, imagem);
    NCP= (dword==0)? 1 << BPP : dword;
    printf("Resolucao horizontal: %u\n", NCP);
    fread(&dword, sizeof(dword), 1, imagem);
    printf("Numero de cores importantes: %u\n", (dword ==0) ? NCP : dword);
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha de array de pixels (bytes): %u\n", PAL);
    imagem3= fopen("SAPO3.bmp", "wb");
    rewind(imagem);
    for (i=0; i < offset; i++){
        fread(&byte, sizeof(byte), 1, imagem);
        fwrite(&byte, sizeof(byte), 1, imagem3);
    }

    byte = 0x0;
    AUX = PAL - WPX*3;
   for(j=0; j< HPX; j++) {
   for(i=0; i< WPX;i++){
       fread(&pixel, sizeof(pixel), 1, imagem);
       if (pixel.B == 3 && pixel.G == 171 && pixel.R == 74)
       {
           pixel3.B = 153;
           pixel3.G =  171;
           pixel3.R = 74;
       }

       else
        {
           pixel3.B = pixel.B;
           pixel3.G = pixel.G;
           pixel3.R = pixel.R;
       }
       fwrite(&pixel3, sizeof(pixel3), 1, imagem3);
   }

    if (AUX> 0){
        fseek(imagem, AUX, SEEK_CUR);
        for (i= 0; i< AUX; i++)
            fwrite(&byte, sizeof(byte), 1, imagem3);
        }
   }
    fclose(imagem3);
    fclose(imagem);
    return 0;
}
