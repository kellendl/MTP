#include<stdio.h>
#include<math.h>
struct Pixel{
    unsigned char B;
    unsigned char G;
    unsigned char R;
};

int main()

{
    struct Pixel pixel;
    int WPX, HPX,BPP, PAL,i,j,AUX, NCP;
    FILE * imagem;
    unsigned char byte; //1byte
    unsigned short word; //2byte
    unsigned int dword; //3byte

    imagem = fopen ("snake.bmp", "rb");
    if(imagem == NULL){
        fprintf(stderr,"Arquivo não encontrado:\n");
    }

    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte, sizeof (byte), 1, imagem);
    printf("%c", byte);
    fread(&byte, sizeof (byte), 1, imagem);
    printf("%c\n", byte);

    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword, sizeof (dword), 1, imagem);
    printf("Tamanho do arquivo (bytes): %u\n",dword);

    //word	6-7	Informação reservada
    //word	8-9	Informação reservada
    fseek(imagem, 2*sizeof(word), SEEK_CUR);
    //dword	10-13	Offset, onde dados da imagem começam
    fread(&dword, sizeof (dword), 1, imagem);
    printf("Offset (bytes): %u\n",dword);
    //dword	14-17	Tamanho do cabeçalho, a partir daqui
    fread(&dword, sizeof (dword), 1, imagem);
    printf("Tamanho do cabecalho (bytes); %u\n",dword);
    //dword	18-21	Largura da imagem (pixels), WPX
    fread(&dword, sizeof (dword), 1, imagem);
    WPX = dword;
    printf("Largura da imagem (pixels); %u\n",WPX);
    //dword	22-25	Altura da imagem (pixels), HPX
     fread(&dword, sizeof (dword), 1, imagem);
    HPX = dword;
    printf("Largura da imagem (pixels); %u\n",HPX);
    //word	26-27	Qtde de planos de cores
    fread(&word, sizeof (word), 1, imagem);
    printf("Qtde de planos de cores: (bytes); %u\n",dword);
    //word	28-29	Bits por pixel, BPP
    fread(&word, sizeof (word), 1, imagem);
    BPP = word;
    printf(" Bits por pixel ; %u\n",BPP);
    //dword	30-33	Método de compressão
    fread(&dword, sizeof (dword), 1, imagem);
    printf(" Método de compressão; %u\n",dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword, sizeof (dword), 1, imagem);
    printf(" Tamanho da imagem (bytes); %u\n",dword);
    //dword	38-41	Resolução horizontal
    fread(&dword, sizeof (dword), 1, imagem);
    printf(" Resolução horizontal; %u\n",dword);
    //dword	42-45	Resolução vertical
    fread(&dword, sizeof (dword), 1, imagem);
    printf(" Resolução vertical; %u\n",dword);
    //dword	46-49	Número de cores na paleta, NCP
    fread(&dword, sizeof (dword), 1, imagem);
    NCP = (dword == 0) ? 1<< BPP: dword;
    printf(" Número de cores na paleta; %u\n",NCP);
    //dword	50-53	Número de cores importantes, NIC
    fread(&dword, sizeof (dword), 1, imagem);
    printf(" Número de cores importantes: %u\n", (dword == 0) ? NCP: dword);

    //Tamanho da linha da array de pixels (bytes)
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes); %u\n", PAL);

    AUX = PAL - WPX*3; //(diferença em bytes entre a largura e a linha da array)
    for(j = 0; j < HPX; j++) {//(a cada linha da imagem)
        for(i = 0; i < WPX; i++) { //(a cada coluna da mesma linha)
            fread(&pixel, sizeof (pixel), 1, imagem); //(canais B, G e R, nesta ordem)
            printf("R: %u, G: %u, R: %u\n", pixel.R, pixel.G, pixel.B );
        }
    if(AUX > 0){
        fseek(imagem, AUX, SEEK_CUR); //(sem informação útil)
        }
    }

    fclose(imagem);
    return 0;
}
