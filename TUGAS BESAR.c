#include <stdio.h>
#include <stdlib.h>

int main()

{
char pembelian;
int nayamcrispi=10000,nayamgoreng=10000,tpenyet=6000,Llele=10000,teh=3000,jeruk=3000,milo=5000,mineral=3000;

int bayar, kembalian, total, jumlah, kode, bnyk, uang, banyak ;

printf("===========SELAMAT DATANG==========\n");
printf("==========WARUNG CAK KODIR==========\n");
printf("Daftar Menu");
printf("\n===MAKANAN===\n");
printf("---------------------------------------\n");
printf("1. || Nasi Ayam crispi ||  Rp10.000\n") ;
printf("2. || Nasi Ayam goreng ||  Rp10.000\n") ;
printf("3. || Tempe penyet     ||  Rp6.000\n")  ;
printf("4. || Lalapan lele     ||  Rp10.000\n") ;

printf("\n===MINUMAN===\n");
printf("---------------------------------------\n");
printf("5. || Es Teh      ||  Rp3.000\n");
printf("6. || Es Jeruk    ||  Rp3.000\n");
printf("7. || Es milo     ||  Rp5.000\n");
printf("8. || Air mineral ||  Rp3.000\n");
printf("Jumlah menu yang dipesan =");
scanf("%d", &banyak);
jumlah=1;
bayar=0;

for (jumlah=1; jumlah<=banyak; jumlah++)
	ulang:
{
	printf("Masukkan Kode Menu  = ");
		scanf("%d", &kode);
		printf("\n");
		if (kode==1)
		{
			printf("|Nama Makanan = AYAM CRISPI \n");
			printf("|Harga        = Rp. 10.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=nayamcrispi*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==2)
		{
			printf("|Nama Makanan = AYAM GORENG \n");
			printf("|Harga        = Rp. 10.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=nayamgoreng*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==3)
		{
			printf("|Nama Makanan = tempe penyet \n");
			printf("|Harga        = Rp. 6.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=tpenyet*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==4)
		{
			printf("|Nama Makanan = lalapan lele \n");
			printf("|Harga        = Rp. 10.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=Llele*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==5)
		{
			printf("|Nama Minuman  = es teh \n");
			printf("|Harga        = Rp. 3.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=teh*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==6)
		{
			printf("|Nama Minuman  = es jeruk \n");
			printf("|Harga        = Rp. 3.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=jeruk*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==7)
		{
			printf("|Nama Minuman  = es milo \n");
			printf("|Harga        = Rp. 5.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=milo*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}
		else if (kode==8)
		{
			printf("|Nama Minuman = Air mineral \n");
			printf("|Harga        = Rp. 3.000,- \n");
			printf("|Jumlah Porsi = ");
			scanf("%d", &bnyk);
			total=mineral*bnyk;
			printf("|Total Harga  = Rp.%d,-\n", total);
		}	
        else
		{
			printf(" Masukkan input yang benar\n");
		}
		bayar=bayar+total;
}
    printf("TOTAL BAYAR                     : %d\n",bayar);
    printf("__________________________________________________\n");
    printf("masukkan pembayaran  : ");
	scanf("%d",&uang);
	kembalian=uang-bayar;
	 if(total<=bayar)
    printf("kembalian                     : %d\n\n",kembalian); 
    printf("\t ---------- TERIMAKSIH ----------\n");
	printf("\t========== BERKUNJUNG LAGI YA ==========\n");
   
return 0;

}