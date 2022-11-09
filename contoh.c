#include<iostream>
#include<string.h>

#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{
	COORD coord = {0, 0};

    coord.X = x; coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}



void head ()

{

 system ("cls");

    gotoxy (20, 1);
    
    cout<<"pengurutun berdasarkan nama\n";
    cout<<"wandania rizki amalia/n ";
    cout<<'nim : 190170017/n';
    cout<<"pengurutun berdasarkan nama\n";
    cout<<"nama : sabani abadi\n";
    cout<<"nim  : 190170049\n";
    

}



main ()

{

    int  jumlah, a, j, k, m, y, z,nim,nl;

 char kata[100][40], sementara[40], pilih;



 system("cls");

 head();



 cout<<"berapa data yang ingin anda masukan  = ";

 cin>>jumlah;



    for (z=1; z<=jumlah; z++)

     {
     	cout<<"note : penulisan nama jangan pakai spasi\n";

        cout<<"nama ke-" <<z <<"= ";

  cin>>kata[z];
  cout<<"nim  = ";
  cin>>nim;
  cout<<"nilai  = ";
  cin>>nl;



        if (z>1)

        {

           for (j=1; j<=z; j++)

           {

               a=strcmp(kata[z], kata[j]);

           

               if (a<=0)

               {

                  strcpy (sementara, kata[z]);

             

                  for (k=z; k>=j; k--)

                  {

                      m=k+1;

                      strcpy (kata[m], kata[k]);

                  }

             

                  strcpy (kata[j], sementara);

               }

           }

        }

    }



 system("cls");

 head();



 cout<<"\n\nHasil pengurutan nama : \n\n";



    cout<<"_______________________________________________________\n";

 gotoxy (1, 9);

    cout<<"No.\t|\t nim \t| \tNama\t |nilai|\n";

    cout<<"__________________________________________________________";



    gotoxy (0, 12);

    for (z=1; z<=jumlah; z++)

    {

  cout<<z <<".\t|\t "<<nim<<"\t|\t" <<kata[z] <<" | "<<nl<<"|" <<endl;

    }



    cout<<"_________________________________________________________\n\n";



    cout<<"Ingin kembali ke awal [y/t]? ";

    cin>>pilih;



    if (pilih=='y')

    {



  main();

 }

 else

 {

  system ("cls");

 }
}

