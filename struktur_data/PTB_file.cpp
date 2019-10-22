#include <iostream>
#include <malloc.h>
#include <iomanip>
#include <fstream>
#define true 1
#define false 0
using namespace std;

FILE *simpan;

typedef int typeinfo;
typedef struct typenode *typeptr;

typedef struct{
	char nama[30];
	int nim;
	float uts,uas,akhir;
}data;
struct typenode{
	data mahasiswa;
	typeptr kiri, kanan;
};
typeptr akar,p,b;
data mhs;
int  NH,banyak;
void buat_ptb();
int ptb_kosong();
void sisipnode();
void cetak();
void preorder(typeptr akar);
void inorder(typeptr akar);
void postorder(typeptr akar);
void hapusnode(typeinfo IH);
void hapus();
void cari(typeptr akar,typeinfo IH);


void openfile();
void save(typeptr akar);



int main(){
	int pilih,hapus;
  	buat_ptb();
	char lagi;
  	do{
  		cout << "= = MENU = =" << endl;
		cout << "1. Sisipnode PTB" << endl;
		cout << "2. Hapusnode PTB" << endl;
		cout << "3. Cetak PTB" << endl;
		cout << "Masukkan Pilihan : "; cin >> pilih;
		//free(akar);
		cout << "----------------------------" << endl;
		switch(pilih){
			case 1:
				
				simpan=fopen("strukdat.txt","a+");
				akar=NULL;
				openfile();
				fclose(simpan);
				do
				{
					sisipnode();
					cout<<"sisip lagi (y/n) = ";cin>>lagi;
				} while (lagi == 'y');
				simpan=fopen("strukdat.txt","w");
				save(akar);
				fclose(simpan);
				//free(akar);	

				break;
				
			case 2: cout << endl;
				simpan=fopen("strukdat.txt","a+");
				openfile();
				fclose(simpan);
					cout << "--------------------------------------------------------------------------" << endl;
					cout << "NIM" << setw(9) << " | " << setw(30) << "Nama Mahasiswa" 
						 << setw(2) << " | " << setw(6) << "UTS" << setw(2) << " | " 
			 			 << setw(6) << "UAS" << setw(2) << " | " << "Nilai Akhir" << setw(2) << " | " << endl;
					cout << "--------------------------------------------------------------------------" << endl;
					inorder(akar);
  					cout << endl << "Masukkan NIM mahasiswa yang ingin dihapus  : "; cin >> hapus;
					hapusnode(hapus);
				simpan=fopen("strukdat.txt","w");
				save(akar);
				fclose(simpan);
				//free(akar);
				break;
			case 3:
				
				simpan=fopen("strukdat.txt","a+");
				openfile();
				fclose(simpan);
				cetak();
				cout << endl;
			//	free(akar);
				break;
	}
  	}
  	while(true);
  
  	fclose(simpan);
}


void buat_ptb(){ 
  	akar=NULL;
}

int ptb_kosong(){ 
	if(akar==NULL)
	 	return(true);
  	else
	 	return(false); 
}

void sisipnode(){ 
	typeptr NB;
  	NB=(typenode *) malloc(sizeof(typenode));
  	NB->kiri=NULL;
  	NB->kanan=NULL;
  	cout << "Nama 	: "; cin.ignore();cin.getline( NB->mahasiswa.nama,30);
  	cout << "NIM 	: "; cin >> NB->mahasiswa.nim;
  	cout << "UTS	: "; cin >> NB->mahasiswa.uts;
  	cout << "UAS	: "; cin >> NB->mahasiswa.uas;
  	NB->mahasiswa.akhir = (0.4*NB->mahasiswa.uts)+(0.6*NB->mahasiswa.uas);
  	cout << "Akhir	: " << NB->mahasiswa.akhir;
  	if (ptb_kosong())
	 	akar=NB;
  	else{ 
	  	b=akar;
		p=akar;
		// mencari tempat untuk menyisipkan node
		while(p!=NULL && NB->mahasiswa.nim!=p->mahasiswa.nim){ 
			b=p;
			if (NB->mahasiswa.nim<p->mahasiswa.nim)
				p=b->kiri;
			else
				p=b->kanan; 
		}
		if (NB->mahasiswa.nim==b->mahasiswa.nim)
		  	cout << "\n\nNIM " << NB->mahasiswa.nim << " telah terdata !\n\n";
		else{ 
			if (NB->mahasiswa.nim<b->mahasiswa.nim)
				b->kiri=NB;
			else
				b->kanan=NB; 
		}
	}
}




void cetak(){
  	cout << "\nPre-order :  " << endl;
  	cout << "--------------------------------------------------------------------------" << endl;
  	cout << "NIM" << setw(9) << " | " << setw(30) << "Nama Mahasiswa" 
			 << setw(2) << " | " << setw(6) << "UTS" << setw(2) << " | " 
			 << setw(6) << "UAS" << setw(2) << " | " << "Nilai Akhir" << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	
  	preorder(akar);
  	cout << "\nIn-order  :  " << endl;
  	cout << "--------------------------------------------------------------------------" << endl;
  	cout << "NIM" << setw(9) << " | " << setw(30) << "Nama Mahasiswa" 
			 << setw(2) << " | " << setw(6) << "UTS" << setw(2) << " | " 
			 << setw(6) << "UAS" << setw(2) << " | " << "Nilai Akhir"  << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	
	inorder(akar);
  	cout << "\nPost-order:  " << endl;
  	cout << "--------------------------------------------------------------------------" << endl;
  	cout << "NIM" << setw(9) << " | " << setw(30) << "Nama Mahasiswa" 
			 << setw(2) << " | " << setw(6) << "UTS" << setw(2) << " | " 
			 << setw(6) << "UAS" << setw(2) << " | " << "Nilai Akhir"  << endl;
	cout << "--------------------------------------------------------------------------" << endl;
  	postorder(akar);
}



void save(typeptr akar){
	if(akar!=NULL)
	{	mhs = akar->mahasiswa;
		fwrite(&mhs,sizeof(mhs),1,simpan);
		save(akar->kiri);
		save(akar->kanan);
	}	


}
void tempelnode(){ 
	typeptr NB;
  	NB=(typenode *) malloc(sizeof(typenode));
	NB->mahasiswa = mhs;
	NB->kiri=NULL;
  	NB->kanan=NULL;
	
  	if (ptb_kosong())
	 	akar=NB;
  	else{ 
	  	b=akar;
		p=akar;
		// mencari tempat untuk menyisipkan node
		while(p!=NULL && NB->mahasiswa.nim!=p->mahasiswa.nim){ 
			b=p;
			if (NB->mahasiswa.nim<p->mahasiswa.nim)
				p=b->kiri;
			else
				p=b->kanan; 
		}
		
		if (NB->mahasiswa.nim!=b->mahasiswa.nim)
		  	
		{ 
			if (NB->mahasiswa.nim<b->mahasiswa.nim)
				b->kiri=NB;
			else
				b->kanan=NB; 
		}
		
	}
}
void openfile(){
	while(fread(&mhs, sizeof(mhs),1,simpan)!=0)
	{	
		tempelnode();
	}	
}

void preorder(typeptr akar){ 
	if (akar!=NULL){ 
		cout << akar->mahasiswa.nim << setw(2) << " | " << setw(30) << akar->mahasiswa.nama 
			 << setw(2) << " | " << setw(6) << akar->mahasiswa.uts << setw(2) << " | " 
			 << setw(6) << akar->mahasiswa.uas << setw(2) << " | " << akar->mahasiswa.akhir << endl;
		preorder(akar->kiri);
		preorder(akar->kanan); 
	}
}

void inorder(typeptr akar){ 
	if (akar!=NULL){ 
		inorder(akar->kiri);
		cout << akar->mahasiswa.nim << setw(2) << " | " << setw(30) << akar->mahasiswa.nama 
			 << setw(2) << " | " << setw(6) << akar->mahasiswa.uts << setw(2) << " | " 
			 << setw(6) << akar->mahasiswa.uas << setw(2) << " | " << akar->mahasiswa.akhir << endl;
		inorder(akar->kanan); 
	}
}

void postorder(typeptr akar){ 
	if (akar!=NULL){ 
		postorder(akar->kiri);
		postorder(akar->kanan);
		cout << akar->mahasiswa.nim << setw(2) << " | " << setw(30) << akar->mahasiswa.nama 
			 << setw(2) << " | " << setw(6) << akar->mahasiswa.uts << setw(2) << " | " 
			 << setw(6) << akar->mahasiswa.uas << setw(2) << " | " << akar->mahasiswa.akhir << endl;
	}
}

void hapusnode(typeinfo IH){
  	if (ptb_kosong())
	  	cout << "PTB Kosong !\n\n";
  	else{ 
		b=akar;
		p=akar;
		// mencari tempat hapus node
		while(p!=NULL && IH!=p->mahasiswa.nim){ 
			b=p;
			if (IH<p->mahasiswa.nim)
				p=b->kiri;
			else
				p=b->kanan;
			}
		if (IH==b->mahasiswa.nim)// || IH==b->kanan->mahasiswa.nim)
		  	hapus();
		else
			cout << "\n\nNIM " << IH << " tidak terdata !\n\n";			  	
  	}
}

void hapus(){ 
	typeptr temp;
	// Bila PTB terdiri dari akar saja atau akar dengan 1 anak kiri/kanan
  	if (p->kiri==NULL && p->kanan==NULL){
		if (b==akar && p==akar)
			akar=NULL;
		else{
			if (p==b->kiri)
				b->kiri=NULL;
			else
				b->kanan=NULL;
		}
		free(p);
	}

	// Bila PTB memiliki anak kiri dan anak kanan dgn banyak anak cabang
  	else if (p->kiri!=NULL && p->kanan!=NULL){
		temp=p->kiri;
		b=p;
		while (temp->kanan != NULL){ 
			b=temp;
			temp=temp->kanan; 
		}
		p->mahasiswa.nim=temp->mahasiswa.nim;
		//p->mahasiswa.nama=temp->mahasiswa.nama;
		p->mahasiswa.uts=temp->mahasiswa.uts;
		p->mahasiswa.uas=temp->mahasiswa.uas;
		p->mahasiswa.akhir=temp->mahasiswa.akhir;
		if (b==p)
			b->kiri = temp->kiri;
		else
			b->kanan = temp->kiri;
		free(temp);
	}
	
	// Bila PTB memiliki anak kiri saja dgn banyak anak cabang
  	else if (p->kiri!=NULL && p->kanan==NULL){
		if (b==p)
			akar=p->kiri;
		else{ 
			if (p==b->kiri)
				b->kiri=p->kiri;
			else
				b->kanan=p->kiri;
		}
		free(p);
	}

	// Bila PTB memiliki anak kanan saja dgn banyak anak cabang
  	else if (p->kiri==NULL && p->kanan!=NULL){
		if (b==p)
			akar=p->kanan;
		else{ 
			if (p==b->kanan)
				b->kanan=p->kanan;
			else
				b->kiri=p->kanan;
		}
		free(p);
	}
}

