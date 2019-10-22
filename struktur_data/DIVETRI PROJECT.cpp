#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define true 1;
#define false 0;
using namespace std;
void input();
void output();
void searching();
void sorting();
void bubblesortnomor();
void bubblesortnama();
void bubblesortgoldar();
void bubblesortstatus();
void selectionsortnomor();
void selectionsortnama();
void selectionsortgoldar();
void selectionsortstatus();
void insertionsortnomor();
void insertionsortnama();
void insertionsortgoldar();
void insertionsortstatus();
void shellsortnomor();
void shellsortnama();
void shellsortgoldar();
void shellsortstatus();
void quicksortnomor(int awal, int akhir);
void quicksortnama(int awal, int akhir);
void quicksortgoldar(int awal, int akhir);
void quicksortstatus(int awal, int akhir);
typedef struct
{
    int nomor;
    char nama[50], goldar[2], status[20];
} Data;
int i,j,n,x;
FILE *Warga;
Data Penduduk[5];
Data Sementara;
int main()
{
    int pilih;
    char menu;
    menu='Y';
    do{
	cout << "Selamat datang di Catatan Sipil Kecamatan\n";	
    cout << "==================Menu==================\n";
    cout << "1. Input Data" << endl;
    cout << "2. Output Data" << endl;
    cout << "3. Searching Data" << endl;
    cout << "4. Sorting Data" << endl;
    cout << "5. Exit" << endl;
    cout << "Pilihan : "; cin >> pilih;
    switch(pilih)
    {
        case 1 :
        {
            input();
            cout << "Kembali Ke Menu Utama (Y/N) : "; cin >> menu;
            system("cls");
        }
        break;
        case 2 :
        {
            output();
            cout << "Kembali Ke Menu Utama (Y/N) : "; cin >> menu;
            system("cls");
        }
        break;
        case 3 :
        {
            searching();
            cout << "Kembali Ke Menu Utama (Y/N) : "; cin >> menu;
            system("cls");
        }
        break;
        case 4 :
        {
            sorting();
            cout << "Kembali Ke Menu Utama (Y/N) : "; cin >> menu;
            system("cls");
        }
        break;
        case 5 :
        {
            menu='N';
        }
        break;
        default:
            cout << "Pilihan yang Dimasukan Salah" << endl; break;
    }
    }while(menu=='y'||menu=='Y');
}
void input()
{	Warga=fopen("Catatan Sipil.txt","w");
    cout << "INPUT DATA PENDUDUK" << endl;
    fwrite(&Penduduk,sizeof(Penduduk),1,Warga);
    for(i=0;i<5;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : "; cin >> Penduduk[i].nomor;
        cin.ignore();
        cout << "Nama : "; gets(Penduduk[i].nama);
		cout << "Golongan darah : "; gets(Penduduk[i].goldar);
		cout << "Status : "; cin >> Penduduk[i].status;
		fwrite(&Penduduk,sizeof(Penduduk),1,Warga);
    }
    cout << "=========================================\n";
    fclose(Warga);
}
void output()
{
	Warga=fopen("Catatan Sipil.txt","r");
	cout << "OUTPUT DATA PENDUDUK" << endl;
	for(i=0;i<5;i++)
	{
		cout << "=========================================\n";
		cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
		cout << "Nama : " << Penduduk[i].nama << endl;
		cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
		cout << "Status : " << Penduduk[i].status << endl;
		cout << "=========================================\n";
	}
    fclose(Warga);
}
void searching()
{
    bool found;
    Warga=fopen("ArsipBuku.txt","r");
    int pilih;
    char menu='Y';
    do{
    system("cls");
    cout << "Menu Searching" << endl;
    cout << "1. Sequential" << endl;
    cout << "2. Binary" << endl;
    cout << "3. Exit" << endl;
    cout << "Pilihan : "; cin >> pilih;
    switch(pilih)
    { 
        case 1 :
        {
            char menu='Y';
            do
            {
                system("cls");
                int pilih;
                cout << "1. Searching Berdasarkan Nomor KTP" << endl;
                cout << "2. Searching Berdasarkan Nama" << endl;
                cout << "3. Searching Berdasarkan Golongan Darah" << endl;
                cout << "4. Searching Berdasarkan Status" << endl;
                cout << "5. Exit" << endl;
                cout << "Pilihan : "; cin >> pilih;
                switch(pilih)
                {
                    case 1:
                    {
						fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
                        int cari;
                        found=0;
                        cout << "Cari Nomor KTP : "; cin >> cari;
                        for(i=0;i<5;i++)
                        {
							if(Penduduk[i].nomor==cari)
							{
								cout << "=========================================\n";
								cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
								cout << "Nama : " << Penduduk[i].nama << endl;
								cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
								cout << "Status : " << Penduduk[i].status << endl;
								cout << "=========================================\n";
								found=1;
							}
						}
                        if(found==0)
                        cout << "Data Tidak Ada" << endl;
                        fclose(Warga);                       
                    } break;
                    case 2:
                    {
						fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
                        char cari[50];
                        found=0;
                        cin.ignore();
                        cout << "Cari Nama : "; gets(cari);
                        for(i=0;i<5;i++)
                        {
                            if(Penduduk[i].nomor==0){i=5;}
                            else
                            {
                                if(strcmp(Penduduk[i].nama,cari)==0)
                                {
                                    cout << "=========================================\n";
                                    cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                                    cout << "Nama : " << Penduduk[i].nama << endl;
                                    cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                                    cout << "Status : " << Penduduk[i].status << endl;
                                    cout << "=========================================\n";
                                    found=1;
                                }
                            }
                        }
                        if(found==0)
                        cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    }break;
                    case 3:
                    {
						fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
                        found=0;
                        char cari[50];
                        cin.ignore();
                        cout << "Cari Golongan Darah : "; gets(cari);
                        for(i=0;i<5;i++)
                        {
                            if(Penduduk[i].nomor==0){i=5;}
                            else
                            {
                                if(strcmp(Penduduk[i].goldar,cari)==0)
                                {
                                    cout << "=========================================\n";
                                    cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                                    cout << "Nama : " << Penduduk[i].nama << endl;
                                    cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                                    cout << "Status : " << Penduduk[i].status << endl;
                                    cout << "=========================================\n";
                                    found=1;
                                }
                            }
                        }
                        if(found==0)
                        cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    }break;
                    case 4:
                    {
						fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
                        found=0;
                        char cari[50];
                        cin.ignore();
                        cout << "Cari Banyak Buku : "; gets(cari);
                        for(i=0;i<5;i++)
                        {
                            if(Penduduk[i].nomor==0){i=5;}
                            else
                            {
                                if(strcmp(Penduduk[i].status,cari)==0)
                                {
                                    cout << "=========================================\n";
                                    cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                                    cout << "Nama : " << Penduduk[i].nama << endl;
                                    cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                                    cout << "Status : " << Penduduk[i].status << endl;
                                    cout << "=========================================\n";
                                    found=1;
                                }
                            }
                        }
                        if(found==0)
                        cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    }break;
                    case 5:
                    {
                        searching();
                    } break;
                    default:
                        cout << "Pilihan yang Dimasukan Salah" << endl; break;
                }
                cout << "Kembali Ke Menu Searching Sequential (Y/N) : "; cin >> menu;
            }while(menu=='y'||menu=='Y');
        }break;
        case 2 :
        {
			fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
            char menu='Y';
            int pilih,k,l,m;
            for(i=0;i<5;i++)
            {
                fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
                if(Penduduk[i].nomor==0)
                i=5;
                else
                {
                    n=i;
                }
            }
            do
            {
                system("cls");
                cout << "1. Searching Berdasarkan Nomor KTP" << endl;
                cout << "2. Searching Berdasarkan Nama" << endl;
                cout << "3. Searching Berdasarkan Golongan Darah" << endl;
                cout << "4. Searching Berdasarkan Status" << endl;
                cout << "5. Exit" << endl;
                cout << "Pilihan : "; cin >> pilih;
                switch(pilih)
                {
                    case 1:
                    {
                        found=0;
                        int cari;
                        for(i=0;i<=n;i++)
                        {
                            for(j=0;j<=n-1;j++)
                            {
                                if(Penduduk[j].nomor>Penduduk[j+1].nomor)
                                {
                                    Sementara=Penduduk[j];
                                    Penduduk[j]=Penduduk[j+1];
                                    Penduduk[j+1]=Sementara;
                                }
                            }
                        }
                        cout << "Cari Nomor KTP : "; cin >> cari;
                        k=0;
                        l=n;
                        while(k<=l)
                        {
                            m=(k+l)/2;
                            if(Penduduk[m].nomor==cari)
                            {
                                cout << "=========================================\n";
                                cout << "Nomor KTP : " << Penduduk[m].nomor << endl;
                                cout << "Nama : " << Penduduk[m].nama << endl;
                                cout << "Golongan Darah : " << Penduduk[m].goldar << endl;
                                cout << "Status : " << Penduduk[m].status << endl;
                                cout << "=========================================\n";
                                k=l+1;
                                found=1;
                            }
                            else
                            {
                                if(Penduduk[m].nomor>cari)
                                {
                                    l=m-1;
                                }
                                else
                                {
                                    k=m+1;
                                }
                            }
                        }
                        if(found==0)
                            cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    } break;
                    case 2:
                    {
                        found=0;
                        char cari[50];
                        for(i=0;i<=n;i++)
                        {
                            for(j=0;j<=n-1;j++)
                            {
                                if(strcmp(Penduduk[j].nama,Penduduk[j+1].nama)>0)
                                {
                                    Sementara=Penduduk[j];
                                    Penduduk[j]=Penduduk[j+1];
                                    Penduduk[j+1]=Sementara;
                                }
                            }
                        }
                        cin.ignore();
                        cout << "Cari Nama : "; gets(cari);
                        k=0;
                        l=n;
                        while(k<=l)
                        {
                            m=(k+l)/2;
                            if(strcmp(Penduduk[m].nama,cari)==0)
                            {
                                cout << "=========================================\n";
                                cout << "Nomor KTP : " << Penduduk[m].nomor << endl;
                                cout << "Nama : " << Penduduk[m].nama << endl;
                                cout << "Golongan Darah : " << Penduduk[m].goldar << endl;
                                cout << "Status : " << Penduduk[m].status << endl;
                                cout << "=========================================\n";
                                k=l+1;
                                found=1;
                            }
                            else
                            {
                                if(strcmp(Penduduk[m].nama,cari)>0)
                                {
                                    l=m-1;
                                }
                                else
                                {
                                    k=m+1;
                                }
                            }
                        }
                        if(found==0)
                            cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    } break;
                    case 3 :
                    {
                        found=0;
                        char cari[50];
                        for(i=0;i<=n;i++)
                        {
                            for(j=0;j<=n-1;j++)
                            {
                                if(strcmp(Penduduk[j].goldar,Penduduk[j+1].goldar)>0)
                                {
                                    Sementara=Penduduk[j];
                                    Penduduk[j]=Penduduk[j+1];
                                    Penduduk[j+1]=Sementara;
                                }
                            }
                        }
                        cin.ignore();
                        cout << "Cari Golongan Darah : "; gets(cari);
                        k=0;
                        l=n;
                        while(k<=l)
                        {
                            m=(k+l)/2;
                            if(strcmp(Penduduk[m].goldar,cari)==0)
                            {
                                cout << "=========================================\n";
                                cout << "Nomor KTP : " << Penduduk[m].nomor << endl;
                                cout << "Nama : " << Penduduk[m].nama << endl;
                                cout << "Golongan Darah : " << Penduduk[m].goldar << endl;
                                cout << "Status : " << Penduduk[m].status << endl;
                                cout << "=========================================\n";
                                k=l+1;
                                found=1;
                            }
                            else
                            {
                                if(strcmp(Penduduk[m].goldar,cari)>0)
                                {
                                    l=m-1;
                                }
                                else
                                {
                                    k=m+1;
                                }
                            }
                        }
                        if(found==0)
                            cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    } break;
                    case 4 :
                    {
                        found=0;
                        char cari[50];
                        for(i=0;i<=n;i++)
                        {
                            for(j=0;j<=n-1;j++)
                            {
                                if(strcmp(Penduduk[j].status,Penduduk[j+1].status)>0)
                                {
                                    Sementara=Penduduk[j];
                                    Penduduk[j]=Penduduk[j+1];
                                    Penduduk[j+1]=Sementara;
                                }
                            }
                        }
                        cin.ignore();
                        cout << "Cari Status : "; gets(cari);
                        k=0;
                        l=n;
                        while(k<=l)
                        {
                            m=(k+l)/2;
                            if(strcmp(Penduduk[m].status,cari)==0)
                            {
                                cout << "=========================================\n";
                                cout << "Nomor KTP : " << Penduduk[m].nomor << endl;
                                cout << "Nama : " << Penduduk[m].nama << endl;
                                cout << "Golongan Darah : " << Penduduk[m].goldar << endl;
                                cout << "Status : " << Penduduk[m].status << endl;
                                cout << "=========================================\n";
                                k=l+1;
                                found=1;
                            }
                            else
                            {
                                if(strcmp(Penduduk[m].status,cari)>0)
                                {
                                    l=m-1;
                                }
                                else
                                {
                                    k=m+1;
                                }
                            }
                        }
                        if(found==0)
                            cout << "Data Tidak Ada" << endl;
                        fclose(Warga);
                    } break;
                    case 5:
                    {
                        searching();
                    } break;
                    default:
                    cout << "Pilihan yang Dimasukan Salah" << endl;
                }
                cout << "Kembali Ke Menu Searching Binary (Y/N) : "; cin >> menu;
            } while(menu=='y'||menu=='Y');
        }break;
        case 3 :
        {
            cout << "Keluar Menu Searching" << endl;
            main();
        }break;
        default :
        {
            cout << "Pilihan yang Dimasukan Salah" << endl;
        }break;
    }
    cout << "Kembali Ke Menu Menu Searching (Y/N) : "; cin >> menu;
    }while(menu=='y'||menu=='Y');
}
void sorting()
{
    Warga=fopen("Catatan Sipil.txt","r");
    int pilih;
    char menu='Y';
    for(i=0;i<5;i++)
    {
        fread(&Penduduk[i],sizeof(Penduduk[i]),1,Warga);
        if(Penduduk[i].nomor==0)
            i=5;
        else
        {
            n=i;
        } 
    }
    do{
    system("cls");
    cout << "=============Menu=============" << endl;
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Insertion Sort" << endl;
    cout << "4. Shell Sort" << endl;
    cout << "5. Quick Sort" << endl;
    cout << "6. Exit" << endl;
    cout << "Pilihan : "; cin >> pilih;
    switch(pilih)
    {
        case 1 :
        {
            char menu='Y';
            int pilih;
            do{
            system("cls");
            cout << "---------------BUBBLE SORT---------------" << endl;
            cout << "1. Berdasarkan Nomor KTP" << endl;
            cout << "2. Berdasarkan Nama" << endl;
            cout << "3. Berdasarkan Golongan Darah" << endl;
            cout << "4. Berdasarkan Status" << endl;
            cout << "5. Exit" << endl;
            cout << "Pilihan : "; cin >> pilih;
            switch(pilih)
            {
                case 1: bubblesortnomor(); break;
                case 2: bubblesortnama(); break;
                case 3: bubblesortgoldar(); break;
                case 4: bubblesortstatus(); break;
                case 5: sorting();break;
                default:
                cout << "Pilihan yang Dimasukan Salah" << endl; break;
            }
            cout << "Kembali Ke Menu Bubble Sort (Y/N) : "; cin >> menu;
        }while(menu=='y'||menu=='Y');
        }
        break;
        case 2 :
        {
            int pilih;
            char menu='Y';
            do{
            system("cls");
            cout << "-------------SELECTION SORT--------------" << endl;
            cout << "1. Berdasarkan Nomor KTP" << endl;
            cout << "2. Berdasarkan Nama" << endl;
            cout << "3. Berdasarkan Golongan Darah" << endl;
            cout << "4. Berdasarkan Status" << endl;
            cout << "5. Exit" << endl;
            cout << "Pilihan : "; cin >> pilih;
            switch(pilih)
            {
                case 1: selectionsortnomor(); break;
                case 2: selectionsortnama(); break;
                case 3: selectionsortgoldar(); break;
                case 4: selectionsortstatus(); break;
                case 5: sorting();break;
                default:
                    cout << "Pilihan yang Dimasukan Salah" << endl; break;
            }
            cout << "Kembali Ke Menu Selection Sort (Y/N) : "; cin >> menu;
        }while(menu=='y'||menu=='Y');
        }
        break;
        case 3 :
        {
            int pilih;
            char menu='Y';
            do{
            system("cls");
            cout << "-------------INSERTION SORT--------------" << endl;
            cout << "1. Berdasarkan Nomor KTP" << endl;
            cout << "2. Berdasarkan Nama" << endl;
            cout << "3. Berdasarkan Golongan Darah" << endl;
            cout << "4. Berdasarkan Status" << endl;
            cout << "5. Exit" << endl;
            cout << "Pilihan : "; cin >> pilih;
            switch(pilih)
            {
                case 1: insertionsortnomor(); break;
                case 2: insertionsortnama(); break;
                case 3: insertionsortgoldar(); break;
                case 4: insertionsortstatus(); break;
                case 5: sorting();break;
                default:
                    cout << "Pilihan yang Dimasukan Salah" << endl; break;
            }
            cout << "Kembali Ke Menu Insertion Sort (Y/N) : "; cin >> menu;
        }while(menu=='y'||menu=='Y');
        }
        break;
        case 4 :
        {
            int pilih;
            char menu='Y';
            do{
            system("cls");
            cout << "---------------SHELL SORT----------------" << endl;
            cout << "1. Berdasarkan Nomor KTP" << endl;
            cout << "2. Berdasarkan Nama" << endl;
            cout << "3. Berdasarkan Golongan Darah" << endl;
            cout << "4. Berdasarkan Status" << endl;
            cout << "5. Exit" << endl;
            cout << "Pilihan : "; cin >> pilih;
            switch(pilih)
            {
                case 1: shellsortnomor(); break;
                case 2: shellsortnama(); break;
                case 3: shellsortgoldar(); break;
                case 4: shellsortstatus(); break;
                case 5: sorting();break;
                default:
                    cout << "Pilihan yang Dimasukan Salah" << endl; break;
            }
            cout << "Kembali Ke Menu Shell Sort (Y/N) : "; cin >> menu;
        }while(menu=='y'||menu=='Y');
        } break;
        case 5 :
        {
            int pilih;
            char menu='Y';
            do{
            system("cls");
            cout << "---------------QUICK SORT----------------" << endl;
            cout << "1. Berdasarkan Nomor KTP" << endl;
            cout << "2. Berdasarkan Nama" << endl;
            cout << "3. Berdasarkan Golongan Darah" << endl;
            cout << "4. Berdasarkan Bayak Buku" << endl;
            cout << "5. Exit" << endl;
            cout << "Pilihan : "; cin >> pilih;
            switch(pilih)
            {
                case 1: 
                {
                    quicksortnomor(0,n);
                    for(i=0;i<=n;i++)
                    {
                        cout << "=========================================\n";
                        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                        cout << "Nama : " << Penduduk[i].nama << endl;
                        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                        cout << "Status : " << Penduduk[i].status << endl;
                        cout << "=========================================\n";
                    }
                } break;
                case 2:
                {
                    quicksortnama(0,n);
                    for(i=0;i<=n;i++)
                    {
                        cout << "=========================================\n";
                        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                        cout << "Nama : " << Penduduk[i].nama << endl;
                        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                        cout << "Status : " << Penduduk[i].status << endl;
                        cout << "=========================================\n";
                    }
                } break;
                case 3: 
                {
                    quicksortgoldar(0,n);
                    for(i=0;i<=n;i++)
                    {
                        cout << "=========================================\n";
                        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                        cout << "Nama : " << Penduduk[i].nama << endl;
                        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                        cout << "Status : " << Penduduk[i].status << endl;
                        cout << "=========================================\n";
                    }
                } break;
                case 4: 
                {
                    quicksortstatus(0,n);
                    for(i=0;i<=n;i++)
                    {
                        cout << "=========================================\n";
                        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
                        cout << "Nama : " << Penduduk[i].nama << endl;
                        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
                        cout << "Status : " << Penduduk[i].status << endl;
                        cout << "=========================================\n";
                    }
                } break;
                case 5: sorting();break;
                default:
                    cout << "Pilihan yang Dimasukan Salah" << endl; break;
                }
                cout << "Kembali Ke Menu Quick Sort (Y/N) : "; cin >> menu;
            }while(menu=='y'||menu=='Y');
            } break;
        case 6 :
        {
            main();
        } break;
        default :
            cout << "Pilihan yang Dimasukan Salah" << endl; break;
    }
    cout << "Kembali Ke Menu Sorting (Y/N) : "; cin >> menu;
    }while(menu=='y'||menu=='Y');
    fclose(Warga);
}
void bubblesortnomor()
{
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(Penduduk[j].nomor>Penduduk[j+1].nomor)
            {
                Sementara=Penduduk[j];
                Penduduk[j]=Penduduk[j+1];
                Penduduk[j+1]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void bubblesortnama()
{
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(strcmp(Penduduk[j].nama,Penduduk[j+1].nama)>0)
            {
                Sementara=Penduduk[j];
                Penduduk[j]=Penduduk[j+1];
                Penduduk[j+1]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void bubblesortgoldar()
{
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(strcmp(Penduduk[j].goldar,Penduduk[j+1].goldar)>0)
            {
                Sementara=Penduduk[j];
                Penduduk[j]=Penduduk[j+1];
                Penduduk[j+1]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void bubblesortstatus()
{
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            if(Penduduk[j].status>Penduduk[j+1].status)
            {
                Sementara=Penduduk[j];
                Penduduk[j]=Penduduk[j+1];
                Penduduk[j+1]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void selectionsortnomor()
{
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(Penduduk[i].nomor>Penduduk[j].nomor)
            {
                Sementara=Penduduk[i];
                Penduduk[i]=Penduduk[j];
                Penduduk[j]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void selectionsortnama()
{
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(Penduduk[i].nama,Penduduk[j].nama)>0)
            {
                Sementara=Penduduk[i];
                Penduduk[i]=Penduduk[j];
                Penduduk[j]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void selectionsortgoldar()
{
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(strcmp(Penduduk[i].goldar,Penduduk[j].goldar)>0)
            {
                Sementara=Penduduk[i];
                Penduduk[i]=Penduduk[j];
                Penduduk[j]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void selectionsortstatus()
{
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(Penduduk[i].status>Penduduk[j].status)
            {
                Sementara=Penduduk[i];
                Penduduk[i]=Penduduk[j];
                Penduduk[j]=Sementara;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void insertionsortnomor()
{
    for(i=1;i<=n;i++)
    {
        Sementara=Penduduk[i];
        j=i-1;
        while((Sementara.nomor<Penduduk[j].nomor)&(j>=0))
        {
            Penduduk[j+1]=Penduduk[j];
            j=j-1;
            Penduduk[j+1]=Sementara;
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void insertionsortnama()
{
    for(i=1;i<=n;i++)
    {
        Sementara=Penduduk[i];
        j=i-1;
        while((strcmp(Sementara.nama,Penduduk[j].nama)<0)&(j>=0))
        {
            Penduduk[j+1]=Penduduk[j];
            j=j-1;
            Penduduk[j+1]=Sementara;
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void insertionsortgoldar()
{
    for(i=1;i<=n;i++)
    {
        Sementara=Penduduk[i];
        j=i-1;
        while((strcmp(Sementara.goldar,Penduduk[j].goldar)<0)&(j>=0))
        {
            Penduduk[j+1]=Penduduk[j];
            j=j-1;
            Penduduk[j+1]=Sementara;
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void insertionsortstatus()
{
    for(i=1;i<=n;i++)
    {
        Sementara=Penduduk[i];
        j=i-1;
        while((Sementara.status<Penduduk[j].status)&(j>=0))
        {
            Penduduk[j+1]=Penduduk[j];
            j=j-1;
            Penduduk[j+1]=Sementara;
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void shellsortnomor()
{
    int l;
    l=0;
    for(i=(n+1)/2;i>0;i/=2)
    {
        for(j=i;j<(n+1);j++)
        {
            for(l=j-i;l>=0;l-=i)
            {
                if(Penduduk[l+i].nomor>=Penduduk[l].nomor)
                {
                    break;
                }
                else
                {
                    Sementara=Penduduk[l];
                    Penduduk[l]=Penduduk[l+i];
                    Penduduk[l+i]=Sementara;
                }
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void shellsortnama()
{
    int l;
    l=0;
    for(i=(n+1)/2;i>0;i/=2)
    {
        for(j=i;j<(n+1);j++)
        {
            for(l=j-i;l>=0;l-=i)
            {
                if(strcmp(Penduduk[l+i].nama,Penduduk[l].nama)>=0)
                {
                    break;
                }
                else
                {
                    Sementara=Penduduk[l];
                    Penduduk[l]=Penduduk[l+i];
                    Penduduk[l+i]=Sementara;
                }
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void shellsortgoldar()
{
    int l;
    l=0;
    for(i=(n+1)/2;i>0;i/=2)
    {
        for(j=i;j<(n+1);j++)
        {
            for(l=j-i;l>=0;l-=i)
            {
                if(strcmp(Penduduk[l+i].goldar,Penduduk[l].goldar)>=0)
                {
                    break;
                }
                else
                {
                    Sementara=Penduduk[l];
                    Penduduk[l]=Penduduk[l+i];
                    Penduduk[l+i]=Sementara;
                }
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void shellsortstatus()
{
    int l;
    l=0;
    for(i=(n+1)/2;i>0;i/=2)
    {
        for(j=i;j<(n+1);j++)
        {
            for(l=j-i;l>=0;l-=i)
            {
                if(strcmp(Penduduk[l+i].goldar,Penduduk[l].status)>=0)
                {
                    break;
                }
                else
                {
                    Sementara=Penduduk[l];
                    Penduduk[l]=Penduduk[l+i];
                    Penduduk[l+i]=Sementara;
                }
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        cout << "=========================================\n";
        cout << "Nomor KTP : " << Penduduk[i].nomor << endl;
        cout << "Nama : " << Penduduk[i].nama << endl;
        cout << "Golongan Darah : " << Penduduk[i].goldar << endl;
        cout << "Status : " << Penduduk[i].status << endl;
        cout << "=========================================\n";
    }
}
void quicksortnomor(int awal, int akhir)
{
    int atas,bawah,mid;
    atas=awal;
    bawah=akhir;
    mid=Penduduk[(awal+akhir)/2].nomor;
    do
    {
        while(Penduduk[atas].nomor<mid)atas++;
        while(Penduduk[bawah].nomor>mid) bawah--;
        if(atas<=bawah)
        {
            Sementara=Penduduk[atas];
            Penduduk[atas++]=Penduduk[bawah];
            Penduduk[bawah--]=Sementara;
        }
    }while(atas<=bawah);
    if(awal<bawah) quicksortnomor(awal,bawah);
    if(atas<akhir) quicksortnomor(atas,akhir);
}
void quicksortnama(int awal, int akhir)
{
    int atas,bawah;
    char mid[50];
    atas=awal;
    bawah=akhir;
    strcpy(mid,Penduduk[(awal+akhir)/2].nama);
    do
    {
        while(strcmp(Penduduk[atas].nama,mid)<0)atas++;
        while(strcmp(Penduduk[bawah].nama,mid)>0) bawah--;
        if(atas<=bawah)
        {
            Sementara=Penduduk[atas];
            Penduduk[atas++]=Penduduk[bawah];
            Penduduk[bawah--]=Sementara;
        }
    }while(atas<=bawah);
    if(awal<bawah) quicksortnama(awal,bawah);
    if(atas<akhir) quicksortnama(atas,akhir);
}
void quicksortgoldar(int awal, int akhir)
{
    int atas,bawah;
    char mid[50];
    atas=awal;
    bawah=akhir;
    strcpy(mid,Penduduk[(awal+akhir)/2].goldar);
    do
    {
        while(strcmp(Penduduk[atas].goldar,mid)<0)atas++;
        while(strcmp(Penduduk[bawah].goldar,mid)>0) bawah--;
        if(atas<=bawah)
        {
            Sementara=Penduduk[atas];
            Penduduk[atas++]=Penduduk[bawah];
            Penduduk[bawah--]=Sementara;
        }
    }while(atas<=bawah);
    if(awal<bawah) quicksortgoldar(awal,bawah);
    if(atas<akhir) quicksortgoldar(atas,akhir);
}
void quicksortstatus(int awal, int akhir)
{
    int atas,bawah;
    char mid[50];
    atas=awal;
    bawah=akhir;
    strcpy(mid,Penduduk[(awal+akhir)/2].status);
    do
    {
        while(strcmp(Penduduk[atas].status,mid)<0)atas++;
        while(strcmp(Penduduk[bawah].status,mid)>0) bawah--;
        if(atas<=bawah)
        {
            Sementara=Penduduk[atas];
            Penduduk[atas++]=Penduduk[bawah];
            Penduduk[bawah--]=Sementara;
        }
    }while(atas<=bawah);
    if(awal<bawah) quicksortstatus(awal,bawah);
    if(atas<akhir) quicksortstatus(atas,akhir);
}
