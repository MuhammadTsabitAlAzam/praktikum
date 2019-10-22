			#include <iostream>
			#include <malloc.h>
			#include "stdlib.h"
			#include <math.h>

			using namespace std;


			void input_nilai();
			void output_nilai();
			void push_main(int IB);//saat permainnan dimulai
			void interface();
			void bermain();
			int cek();
			void peraturan();
			/////////deklarasi stack//////////////////////////
			
			int index;
			typedef struct typestack *typeptr1;
			struct typestack
			{
				int info;
				typeptr1 next;//prev stack yang palinga atas
			};
			typeptr1 awalstack[3], akhirstack[3];
			void buat_stack(), main_palsu();
			int stack_kosong();
			void push(int IB), pop(), cetak_stack();
			int sisapop;//untuk pop
			//////////////////////////////////////////////////


			//////deklarasi queue/////////////////////////////
			typedef struct typequeue *typeptr2;
			struct typequeue
			{
				int info;
				typeptr2  next;
			};
			typeptr2 qdepan, qbelakang;
			void buat_queue(), main_palsu();
			int queue_kosong();
			void enqueue(int IB), dequeue(), cetak_queue();
			int sisaqueque;
			
			//////////////////////////////////////////////////
			int i=0;
			
			void nilai(int x);

			////main program//////////////////////////////////
			int main()
			{
				int menu;
				input_nilai();
				do
				{
					
				
				
				cout<<"\nSOLITARE KW\nmenu\n1. main\n2. peratuan\n3. keluar\n  pilih = ";cin>>menu;
				
				switch (menu)
				{
					case 1 :
						cout<<"mulai permainan";
						
						bermain();
						
						
					break;
					case 2 :
					
						peraturan();
					break;
					case 3 :
						cout<<"keluar";
						exit(1);
					break;
						
					default:
					cout<<"pilihan anda salah";
						
				}
				} while (true);
			
				
			}


void bermain()
{int pilih;
	int ulang = true;
	int dari,menuju;
	do
	{	output_nilai();
		cetak_queue();
		cout<<"\napa yang akan anda lakukan \n1. pindah dari stack menuju stack\n2. pindah dari stack menuju antrian\n3. pindah dari antrian menuju stack\n4. cek hasil\n5. menyerah dan kembali\npilih = ";cin>>pilih;
		
		switch (pilih)
		{
			case 1:
				cout<<"dari stack ke (0/1/2) = ";cin>>dari;
				cout<<"menuju stack  ke (0/1/2) = ";cin>>menuju;
				if (dari <=2 && menuju <= 2)
				{
					if (akhirstack[dari]->info>akhirstack[menuju]->info)
					{
					index = dari;
					pop();
					index = menuju;
					push_main(sisapop);
					}else
					{
							cout<<"stack yang anda masukkanharus lebih besar";
					}
					
					
				}else
				{
					cout<<"stack yang anda pilih salah";
				}
				
				
			break;
			case 2:
			cout<<"dari stack ke (0/1/2) = ";cin>>dari;cout<<"menuju antrian";
			if (dari <=2)
			{
				index = dari;
				
				if (stack_kosong())
				{
				cout<<"gagal";	
				}else
				{
					pop();
					enqueue(sisapop);
				}
				
				
				
			}else
			{
				cout<<"stack yang anda pilih salah";
			}
			
			
				
			break;
			case 3:
				cout<<"dari antrian menuju stack ke (0/1/2) = ";cin>>menuju;
				if (menuju <= 2)
				{
					dequeue();
					index = menuju;
					push_main(sisaqueque);
				}else
				{
					cout<<"stack yang anda pilih salah";
				}
				
				
			break;
			case 4:
				cout<<"cek hasil";
				if (cek()==true)
				{
					ulang= false;
				}
			
				
			break;
			case 5:
				cout<<"keluar";
				ulang = false;
			break;
			
			default:
			cout<<"pilihan adnsa salah";	
		}
		
	} while (ulang == true);
	
	
}

////progaram input nilai
void input_nilai()
{
	
	
	FILE *nilai;
	int jenis ;
	int fix;//jenis inputan yang akan dipilih


nilai = fopen ("jenis_nilai.txt","r");
while (fread(&jenis, sizeof(jenis),1,nilai))
{
	if (feof (nilai))
	{
		jenis=1;
		break;
	}
	
}

fix=jenis;
fclose(nilai);

nilai = fopen ("jenis_nilai.txt","w");

jenis=fix+1;

if (jenis >3)
{
	jenis=1;
}

fwrite(&jenis, sizeof(jenis),1,nilai);
fclose(nilai);
	
	
	
	
	
	switch (fix)
	{
		case 1:
				index = 0;
					push(9);
					push(8);
					push(2);
					push(3);
					push(1);
					push(4);
					push(0);
					push(5);
					push(7);
					push(6);
						
				index = 1;
					push(3);
					push(8);
					push(4);
					push(2);
					push(9);
					push(0);
					push(1);
					push(6);
					push(7);
					push(5);
					
				index = 2;
					push(6);
					push(7);
					push(1);
					push(5);
					push(0);
					push(4);
					push(3);
					push(8);
					push(9);
					push(2);
			break;
		case 2:
					
				index = 0;
					push(1);
					push(6);
					push(7);
					push(2);
					push(3);
					push(0);
					push(5);
					push(8);
					push(4);
					push(9);
						
				index = 1;
					push(8);
					push(3);
					push(9);
					push(2);
					push(4);
					push(0);
					push(1);
					push(5);
					push(6);
					push(7);
					
				index = 2;
					push(6);
					push(0);
					push(1);
					push(5);
					push(2);
					push(4);
					push(3);
					push(8);
					push(9);
					push(7);
			break;
			case 3:
				index = 0;
					push(1);
					push(6);
					push(3);
					push(2);
					push(9);
					push(0);
					push(5);
					push(8);
					push(4);
					push(7);
						
				index = 1;
					push(0);
					push(8);
					push(9);
					push(2);
					push(4);
					push(3);
					push(1);
					push(5);
					push(6);
					push(7);
					
				index = 2;
					push(6);
					push(0);
					push(1);
					push(4);
					push(2);
					push(8);
					push(3);
					push(5);
					push(9);
					push(7);
			
			break;
			
		default:
			cout<<"input nilai error";
	}
	

	
	
}

void output_nilai()
{
	for (index = 0; index < 3; index++)
	{
		cetak_stack();
		cout<<"\n";
	}
	
	
	
}



int cek()
{
	typeptr1 bantu;
	int status;
	int banding;
	for (int l = 0; l < 3; l++)
	{banding = 0;
		bantu=awalstack[l];
		while (bantu->next!= NULL)
		{status = false;
			if (bantu->info == banding)
			{
				status = true;
			}
			
			bantu = bantu->next;
			banding ++;
			
		}
		
	}
	if (status == true)
	{cout<<"1111111111111111111111111";
		cout<<"!!!ANDA BERHASIL MENANG!!!";
		cout<<"1111111111111111111111111111";
		return true;
	}
	
	else
	{
		cout<<"ANDA MASIH GAGAL";
		return false;
	}
	
	
	
	
	
}































			/////fungsi pada stack/////////////////////////////
			void buat_stack()
			{
				for (int i = 0; i < 3; i++)
				{
				awalstack[i]=NULL;
				akhirstack[i]=NULL;	
				}
				
				
			}

			int stack_kosong()
			{
				if(awalstack[index]==NULL)
				{
					return true;
				}else
				{
					return false;
				}
			}

			void push(int IB)
			{
				typeptr1 NS;
				NS=(typestack *)malloc(sizeof(typestack));
				NS->info=IB;
				if(awalstack[index]==NULL)
				{
					awalstack[index]=NS;
					//awalstack[index]->prev=NULL;
				
				
					
				}else
				{
					
					akhirstack[index]->next=NS;
					//NS->prev=akhirstack[index];
				}
				akhirstack[index]=NS;
				akhirstack[index]->next=NULL;
			}
			
			
			void push_main(int IB)
			{
				typeptr1 NS;
				NS=(typestack *)malloc(sizeof(typestack));
				NS->info=IB;
				if(awalstack[index]==NULL)
				{
					awalstack[index]=NS;
				//	awalstack[index]->prev=NULL;
				
				
					
				}else if (akhirstack[index]->info<NS->info)
				{
					
					akhirstack[index]->next=NS;
				//	NS->prev=akhirstack[index];
				
				}else
				{
					cout<<"nilai yang dimasukkan harus lebih kecil";
				}
				
				akhirstack[index]=NS;
				akhirstack[index]->next=NULL;
			}

			void pop()
			{
				typeptr1 hapusstack,bantu;
				if(stack_kosong())
				{
					cout<<"Stack underflow"<<endl;
				}else
				{
					bantu=awalstack[index];
					hapusstack=akhirstack[index];
					if(hapusstack==awalstack[index])
					{
						awalstack[index]=NULL;
						
					}else
					{
						
						while(bantu->next->next!=NULL)
						{
							bantu=bantu->next;
						}
						akhirstack[index]=bantu;
						akhirstack[index]->next=NULL;
					}
					sisapop= hapusstack->info;
				free(hapusstack);
					cout<<"POP DONE"<<endl;
				}
			}

			void cetak_stack()
			{
				typeptr1 bantu;
				
				
				
				{
					bantu=awalstack[index];
					cout<<"\n Stack "<<index<<endl;
					cout<<"==========================="<<endl<<"| ";
					
					while(bantu!=NULL)
					{	
						cout<<" "<<bantu->info;
						bantu=bantu->next;
					}
					
					cout<<"\n===========================";
				}
			}
			////////////////////////////////////////////////////////////////


			////funsi pada queue////////////////////////////////////////////

			void buat_queue()
			{
				qdepan=(typequeue *)malloc(sizeof(typequeue));
				qdepan=NULL;
				qbelakang=qdepan;
			}

			int queue_kosong()
			{
				if(qdepan==NULL)
				{
					return true;
				}else
				{
					return false;
				}
			}

			void enqueue(int IB)
			{
				typeptr2 NS;
				NS=(typequeue *)malloc(sizeof(typequeue));
				NS->info=IB;
				if(qdepan==NULL)
				{
					qdepan=NS;
				//	qdepan->prev=NULL;
		
				
					
				}else
				{
			
					qbelakang->next=NS;
				//	NS->prev=qbelakang;
				
				}
				qbelakang=NS;
				qbelakang->next=NULL;
			}

			void dequeue()
			{
				typeptr2 hapusqueque, bantu;
				if(queue_kosong())
				{
					cout<<"queue underflow"<<endl;
				}else
				{
					hapusqueque=qdepan;
					qdepan=hapusqueque->next;
				
					bantu=qdepan;
					int a=1;
					while(a<=i)
					{
					
						bantu=bantu->next;
						a++;
					}
					sisaqueque=hapusqueque->info;
					free(hapusqueque);
				//	qdepan->prev=NULL;
					cout<<"dequeue DONE"<<endl;
				}
			}

			void cetak_queue()
			{
				typeptr2 bantu;
				
				bantu=qdepan;
				cout<<"\n\n\t\t\t Antrian"<<endl;
				cout<<"\t\t<<------------------------\n\t\t";
				while(bantu!=NULL)
				{
					cout<<" "<<bantu->info;
					bantu=bantu->next;
				}
				cout<<"\n\t\t<<------------------------";
								
				
			}
			
			/////////////////////////////////////////////////////////////////////////////////////////

void peraturan()
{
	cout<<"PERATURAN PERMAINAN\npermainan ini merupakan permainan sejenis soliter yang dimainkan oleh Hamka dan Soma\n dimana Hamka dan Soma harus bekerjasama untuk menumpuk angka dari nomor yang paling kecil pada setiap stacknya.\npenggunaan antrian dimaksudkan agar dapat mempermudah dalam menata nilai ";
	cout<<"\tHamka berpesan, pada tabel stack merupaka tumpukan yang mana nilai yang terakhirkali datang adalah yang pertama kali keluar dan dalam penumpukannya hahrus lebih besar daripada nilai yang dibawahnya\n";
	cout<<"\t Soma juga memberi petuah, nilai yang pertamakali masuk adalah yang pertama kali keluar dengan urutan pemasukan yang bebas\n";
	cout<<"\tHamka dan soma mengikuti peraturan permainan dimana akan mengendalikan penaruhan stack dan antrian sesuaimenu yang telah disediakan";
	cout<<"MANJU ATAU MENYERAH, ketajama pola pikir Hamka dan Soma akan diuji di sini. menu cek untuk membuktikan bahwa Hamka dan Soma memiliki pola pikir yang tajam, tetapi sebaliknya menu menyerah dan keluar hanya untuk PECUNDANG !!\nMARI KITA BUKTIKANN";
	
	
	
	
}
