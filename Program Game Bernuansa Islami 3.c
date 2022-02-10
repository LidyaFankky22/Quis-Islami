#include<stdio.h>
#include <string.h>

void judul();
void aturan();
void mulai();
void batal();

void judul()
{
	printf("\t===================================================\n");
	printf("\t\tPROGRAM GAME KUIS BERNUANASA ISLAMI\n");
	printf("\t===================================================\n");
}
void main()
{
	int menu;
	int level;
	
	judul();
	
	printf("\n\tMENU\n\t");
	printf("\n\t1. Aturan Main\n\t");
	printf("\n\t2. Main\n\t");
	printf("\n\t3. Batal Main\n\t");
	printf("\n\n\tSilahkan Masukkan Pilihan Anda : ");
	scanf("%d",&menu);
	switch(menu)
	{
		case 1:
			aturan();
			break;
		case 2:
			mulai();
			break;
		case 3:
			batal();
			break;
		default:
			printf("\n\t=================================\n");
			printf("\n\tPilihan Anda Tidak Tersedia\n\tSilahkan Pilih Lagi\n");
			printf("\n\t=================================\n");
	}
	printf("\n\n\n\t=====SHUKRAAN LAKUM LILAEB HADHIH ALLUEBA=====\n");
}
	
	void aturan()
	{
		int pencet;
		printf("\n\t1.Berdoa dulu sebelum memulai permainan\n");
		printf("\t2.Baca soal dengan teliti\n");
		printf("\t3.Jawab semua pertanyaan yang muncul dengan benar\n");
		printf("\t4.Jawaban benar akan mendapatkan point plus\n");
		printf("\t5.Jika ada pertanyaan yang jawabannya membutuhkan\n\t jawaban berupa kalimat atau kata,\n\t jawablah dengan huruf kecil tanpa spasi dan tanpa tanda apapun\n");
		printf("\n\nPencet 0 untuk main ==");
		scanf("%d",&pencet);
		
		if(pencet==0){
			mulai();
		}
		else 
			batal();
	}
	
	void mulai()
	{
	int pilih;
	pilihan:
	printf("\n\n\tPilihan Level yang Akan Kamu Mainkan:\n");
	printf("\n\t 1. Low Level\n");
	printf("\n\t 2. Medium Level\n");
	printf("\n\t 3. High Level\n");
	printf("\n\t 4. Stop \n");
	printf("\n\n Masukkan Pilihan Levelmu :");
	scanf("%d",&pilih);
	
	switch(pilih)
	{
		case 1:
		printf("\n\t =SOAL Low Level=\n");
		int i;
		int j=0;
		int skor[3];
		char a[3][100]={"Berapa macam atau banyak jumlah huruf ikhfa'?\nJawab",
		"Hukum Mim Mati bila bertemu dengan huruf Hijaiyah\nterbagi menjadi berapa bacaan?\nJawab",
		"Bacaan Qolqolah terbagi menjadi berapa?\nJawab"};
		int b[3];
		int c[3]={15,3,2};
		printf("\nJawab Pertanyaan Dengan Teliti dan Benar!");
		printf("\n========================================\n");
		for(i=0;i<3;i++){
			printf("\nPertanyaan ke-%d\n%s: ",i+1,a[i]);
			scanf("%d",&b[i]);
			if (b[i]==c[i]){
				printf("=BENAR=\nPOINT : %d",skor[i]=10);
			}
			else 
				printf("=SALAH=\nPOINT : %d",skor[i]=-5);
				printf("\n");
		}
		for(i=0;i<3;i++){
			j=j+skor[i];
		}
		printf("\nTOTAL SKOR = %d",j);
		printf("\t\nKomentar Tambahan Untukmu : ");
		if(j>=20){
			printf("TOP GG");
			printf("\nKamu Berhak Mendapatkan Nilai Tambahan Dari Bapak Dosen");
		}
		else if (j>=10){
			printf("YAH HAMPIR GG, SEMANGAT");
		}
		else {
			printf("MAAF YA :(");
		}
		getch();
		goto pilihan;
		break;
		
		case 2:
		printf("\n\t =SOAL Medium Level=\n");
		int k;
		int l=0;
		int nilai[3];
		char m[3][200]={"Memiliki kemampuan atau mukjizat bisa menyembuhkan orang buta,menyembuhkan\npenyakit kusta,dan bisa menghidupkan orang mati.\nSiapakah itu?\nJawab",
		"Memiliki kemampuan luar biasa dan mampu menerjemahkan mimpi-mimpi.\nSiapakah itu?\nJawab",
		"Ini mempunyai tugas untuk mencatat amal buruk seseoran.\nSiapakah itu?\nJawab"};
		char n[20];
		char o[3][100]={"nabiisa","nabiyusuf","malaikatraqib"};
		printf("\nJawab Pertanyaan Dengan Teliti dan Benar!");
		printf("\n========================================\n");
		for(k=0;k<3;k++){
			printf("\nPertanyaan ke-%d\n%s: ",k+1,m[k]);
			fflush(stdin); 
			gets(n);
			if (strcmp(n,o[k]) == 0){
				printf("=BENAR=\nPOINT : %d",nilai[k]=10);
			}
			else 
				printf("=SALAH=\nPOINT : %d",nilai[k]=-5);
				printf("\n");
		}
		for(k=0;k<3;k++){
			l=l+nilai[k];
		}
		printf("\nTOTAL SKOR = %d",l);
		printf("\t\nKomentar Tambahan Untukmu : ");
		if(l>=20){
			printf("TOP GG");
			printf("\nKamu Berhak Mendapatkan Nilai Tambahan Dari Bapak Dosen");
		}
		else if (l>=10){
			printf("YAH HAMPIR GG, SEMANGAT");
		}
		else {
			printf("MAAF YA :(");
		}
		getch();
		goto pilihan;
		break;
		
		case 3:
        printf("\n\t =SOAL High Level=\n");
        int p;
        int q=0;
        int score[3];
        char r[3][200]={"Agama apa yang tempat ibadahnya di Kelenteng?\nJawab",
		"Dimana wahyu yang pertama kali diturunkan kepada Nabi Muhammad\noleh Allah SWT?\nJawab",
		"Allah Maha Pengasih adalah arti dari asmaul husna yang mana?\nJawab"};
		char s[20];
		char t[3][100]={"konghucu","guahira","arrahman"};
		printf("\nJawab Pertanyaan Dengan Teliti dan Benar!");
		printf("\n========================================\n");
		for(p=0;p<3;p++){
			printf("\nPertanyaan ke-%d\n%s: ",p+1,r[p]);
			fflush(stdin); 
			gets(s);
			if (strcmp(s,t[p]) == 0){
				printf("=BENAR=\nPOINT : %d",score[p]=10);
			}
			else 
				printf("=SALAH=\nPOINT : %d",score[p]=-5);
				printf("\n");
		}
		for(p=0;p<3;p++){
			q=q+score[p];
		}
		printf("\nTOTAL SKOR = %d",p);
		printf("\t\nKomentar Tambahan Untukmu : ");
		if(q>=20){
			printf("TOP GG");
			printf("\nKamu Berhak Mendapatkan Nilai Tambahan Dari Bapak Dosen");
		}
		else if (q>=10){
			printf("YAH HAMPIR GG, SEMANGAT");
		}
		else {
			printf("MAAF YA :(");
		}
		getch();
		goto pilihan;
		break;	
	}
	}
	
	void batal()
	{
		printf("\n\t==========================================\n");
		printf("\t=========\tBatal Main\t =========\n");
		printf("\n\t==========================================\n");
	}