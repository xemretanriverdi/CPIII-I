#include <stdio.h>
#include <conio.h>

#include <stdlib.h>
#include <time.h>
    
    
  

	
float **matrisAlanOlustur(int olcek){
	
float **matris=(float **)malloc(olcek* sizeof (float*));
	
int i ;
for(i=0;i<olcek;i++){
	

matris[i] = (float *)malloc(olcek*sizeof(float));
	

}

	return matris;  //Bu sayede iç içe olcek x olcek boyutunda bir alan açtýk
	
}



void matrisAlanDoldur(float **matris, int olcek){
			
	
int i ,j ;
for(i=0;i<olcek;i++){
	
for(j=0;j<olcek;j++){
	
	matris[i][j]=rand()%10;  // parametre olarak verilen matris istenilen ölcek icin random float sayýlar ile dolduruluyor.

}	
}		

}
void matrisAlanOku(float **matris, int olcek){
int i ,j ;
for(i=0;i<olcek;i++){
for(j=0;j<olcek;j++){
	printf("%f ",matris[i][j]);  
	
}puts("\n")	;
}

	
}

 void **ijkmatrixMatrixMultiply(float **matrisA , float **matrisB, float **carpimMatris, int olcek){
	printf("\nCarpma islemi basliyor:\n");
    int  i,j,k;
    for(i = 0; i<olcek; i++){
        for(j = 0; j<olcek; j++){
            
            for(k = 0; k<olcek; k++){
               carpimMatris[i][j]+= matrisA[i][k] * matrisB[k][j];  
                }       
            
            }
    }       
	}  
    void **ikjmatrixMatrixMultiply(float **matrisA , float **matrisB, float **carpimMatris, int olcek){
	printf("\nCarpma islemi basliyor:\n");
    int  i,j,k;
    for(i = 0; i<olcek; i++){
        for(k = 0; k<olcek; k++){
            
            for(j = 0; j<olcek; j++){
               carpimMatris[i][j]+= matrisA[i][k] * matrisB[k][j];  
                }       
            
            }
    }	}    
    
    
    
    void **jikmatrixMatrixMultiply(float **matrisA , float **matrisB, float **carpimMatris, int olcek){
	printf("\nCarpma islemi basliyor:\n");
    int  i,j,k;
    for(j = 0; j<olcek; j++){
        for(i = 0; i<olcek; i++){
            
            for(k = 0; k<olcek; k++){
                 carpimMatris[i][j]+= matrisA[i][k] * matrisB[k][j];  
                }       
            
            }
    }	} 
   
     void **jkimatrixMatrixMultiply(float **matrisA , float **matrisB, float **carpimMatris, int olcek){

	printf("\nCarpma islemi basliyor:\n");
    int  i,j,k;
    for(j = 0; j<olcek; j++){
    	
        for(k = 0; k<olcek; k++){
           
            for(i = 0; i<olcek; i++){
                 carpimMatris[i][j]+= matrisA[i][k] * matrisB[k][j];  
                }       
            
            }
    }	}
	 
    void **kijmatrixMatrixMultiply(float **matrisA , float **matrisB, float **carpimMatris, int olcek){
	printf("\nCarpma islemi basliyor:\n");
    int  i,j,k;
    for(k = 0; k<olcek; k++){
        for(i = 0; i<olcek; i++){
            for(j = 0; j<olcek; j++){
                 carpimMatris[i][j]+= matrisA[i][k] * matrisB[k][j];  
                }       
            
            }
    }	} 
    void **kjimatrixMatrixMultiply(float **matrisA , float **matrisB, float **carpimMatris, int olcek){
	printf("\nCarpma islemi basliyor:\n");
    int  i,j,k;
    for(k = 0; k<olcek; k++){
        for(j = 0; j<olcek; j++){
            
            for(i = 0; i<olcek; i++){
                 carpimMatris[i][j]+= matrisA[i][k] * matrisB[k][j];  
                }       
            
            }
    }	}


	



int main (void){
	
	
	
	
	int x;
	while(x<1000){
		printf("1000 ve 1000 den buyuk olacak sekilde Lutfen carpmak istediginiz olcutleri giriniz: ");
	scanf("%d",&x);	
	}
	
	
float **carpimMatris= matrisAlanOlustur(x);
float **matrisA = matrisAlanOlustur(x);
float **matrisB = matrisAlanOlustur(x); 
matrisAlanDoldur(matrisA,x);
matrisAlanDoldur(matrisB,x);
	
   clock_t  start, end;
     double cpu_time_used;
     puts(" ilgili sira i-j-k, i-k-j, j-i-k, j-k-i, k-i-j ve k-j-i olarak degistirilecektir. \n");
     start = clock();
  	ijkmatrixMatrixMultiply(matrisA,matrisB,carpimMatris,x);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf(" i j k dongu suresi : %f",cpu_time_used );
          puts("\n");

      start = clock();
     ikjmatrixMatrixMultiply(matrisA,matrisB,carpimMatris,x);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf(" i k j dongu suresi : %f",cpu_time_used );
          puts("\n");
    start = clock();
  	jikmatrixMatrixMultiply(matrisA,matrisB,carpimMatris,x);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf(" j i k  dongu suresi : %f",cpu_time_used );
          puts("\n");

      start = clock();
     jkimatrixMatrixMultiply(matrisA,matrisB,carpimMatris,x);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf(" j k i dongu suresi : %f",cpu_time_used );
          puts("\n");
    start = clock();
  	kijmatrixMatrixMultiply(matrisA,matrisB,carpimMatris,x);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf(" k i j dongu suresi : %f",cpu_time_used );
          puts("\n");

      start = clock();
    kjimatrixMatrixMultiply(matrisA,matrisB,carpimMatris,x);
     end = clock();
     cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
     printf(" k j i dongu suresi : %f",cpu_time_used );
          puts("\n");
  free(*matrisA);
     free(*matrisB);
  free(*carpimMatris);



return 0;
getch();


}

