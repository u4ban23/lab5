#include <iostream>

using namespace std;

int main() {
   // zad 1
   // int tab[10];
   // for (int i =9; i >= 0; i--) {
   //    int n;
   //    cin >> n;
   //    tab[i] = n;
   // }
   // for (int i = 0; i < 10; i++) {
   //    cout << tab[i] << " ";
   // }

   //zad 2
   // int n;
   // cout << "Ile chcesz liczb w ciagu fibonnaciego: ";
   // cin >> n;
   // int fib[n];
   // fib[0] = 0;
   // fib[1] = 1;
   // for (int i = 2; i <= n; i++) {
   //    fib[i] = fib[i-1] + fib[i-2];
   //
   // }
   // for (int i  = 0; i<n; i++) {
   //    cout << fib[i] << " ";
   // }

   //zad 3
   // int tab[10];
   // for (int i = 0; i < 10; i++) {
   //    int random = rand();
   //    tab[i] = random;
   // }
   // //3.1
   // int sum=0;
   // for (int i = 0; i < 10; i++) {
   //    sum += tab[i];
   // }
   // cout <<"Średnia: "<< sum/10 << endl;
   // cout<<"Mniejsze od średniej: ";
   // for (int i = 0; i < 10; i++) {
   //    if (tab[i] < sum/10) {
   //       cout<<tab[i]<<" ";
   //    }
   // }
   // //3.2
   // int greatest=tab[0];
   // int smallest=tab[0];
   // for (int i = 0; i < 10; i++) {
   //    int newGreatest = tab[i];
   //    int newSmallest = tab[i];
   //    if (newGreatest > greatest) {
   //       greatest = newGreatest;
   //    }
   //    if (newSmallest < smallest) {
   //       smallest = newSmallest;
   //    }
   // }
   // cout<<"najwieksza: "<< greatest<<endl;
   // cout<<"najmniejsza: "<< smallest<<endl;

   //zad 4
   // int tab[10] = {0};
   // cout<<"Podaj liczbe rzeczywista w przedziale [0,10]: "<<endl;
   // cout<<"Jesli nie chcesz podac wiecej liczb podaj liczbe spoza zakresu"<<endl;
   // for (int i = 0; i < 10; i++) {
   //    float n;
   //    cin>>n;
   //    tab[i] = n;
   //    if (n>10 || n<0) {
   //       break;
   //    }
   // }
   // int sum=0;
   // for (int i = 0; i < 10; i++) {
   //    sum+= tab[i];
   // }
   // cout<<"srednia: "<<sum/10<<endl;
   // int greatest=tab[0];
   // int smallest=tab[0];
   // for (int i = 0; i < 10; i++) {
   //    int newGreatest = tab[i];
   //    int newSmallest = tab[i];
   //    if (newGreatest > greatest) {
   //       greatest = newGreatest;
   //    }
   //    if (newSmallest < smallest) {
   //       smallest = newSmallest;
   //    }
   // }
   // cout<<"najwieksza: "<< greatest<<endl;
   // cout<<"najmniejsza: "<< smallest<<endl;

   // zad 5
   // int tab[10];
   // for (int i = 0; i < 10; i++) {
   //    int n = rand()%11;
   //    tab[i] = n;
   //
   // }
   // int random = rand()%11;
   // int ilosc = 0;
   // for (int i = 0; i < 10; i++) {
   //    if (random == tab[i]) {
   //       ilosc++;
   //    }
   // }
   // cout << ilosc << endl;

   //zad 6
   // int macierz1[2][2] = {{1, 2}, {3, 4}};
   // int macierz2[2][2] = {{1,2},{3,4}};
   // int dodajmacierz[2][2];
   // for (int i = 0; i < 2; i++) {
   //    for (int j = 0; j < 2; j++) {
   //       dodajmacierz[i][j] = macierz1[i][j]+macierz2[i][j];
   //    }
   // }
   //
   // for (int i = 0; i < 2; i++) {
   //    for (int j = 0; j < 2; j++) {
   //       cout << dodajmacierz[i][j]<<" ";
   //    }
   //    cout << endl;
   // }

   //zad 7
   // int macierz1[3][3] = {{1, 2,3}, {4,5,6}, {7,8,9}};
   // int macierz2[3][3] = {{1, 2,3}, {4,5,6}, {7,8,9}};
   // int mnozmacierz[3][3];
   // for (int i = 0; i < 3; i++) {
   //    for (int j = 0; j < 3; j++) {
   //       int sum = 0;
   //       for (int k = 0; k < 3; k++) {
   //          sum += macierz1[i][k]*macierz2[k][j];
   //       }
   //       mnozmacierz[i][j] = sum;
   //    }
   // }
   //
   // for (int i = 0; i < 3; i++) {
   //    for (int j = 0; j < 3; j++) {
   //       cout << mnozmacierz[i][j]<<' ';
   //    }
   //    cout << endl;
   // }

   //zad 8
   // int k;
   // int w;
   // cout<<"ile kolumn: ";
   // cin>>k;
   // cout<<"ile wierszy: ";
   // cin>>w;
   //
   // int macierz[w][k];
   // if (w==k) {
   //    for (int i = 0; i < w; i++) {
   //       for (int j = 0; j < k; j++) {
   //          int n;
   //          cout<<"Podaj liczbe dla miejsca "<<i+1<<" "<<j+1<<endl;
   //          cin>>n;
   //          macierz[i][j] = n;
   //       }
   //    }
   //    int sum =0;
   //    for (int i = 0; i < w; i++) {
   //       sum+= macierz[i][i];
   //    }
   //    cout<<sum<<endl;
   // } else {
   //    cout<<"prgram nie dziala"<<endl;
   //    cout<<"liczba wierszy jest rozna od liczby kolumn"<<endl;
   // }

   //zad 9
   // int tab[10];
   // for (int i = 0; i < 10; i++) {
   //    int n;
   //    cin >> n;
   //    tab[i] = n;
   // }
   // for (int i = 0; i < 9; i++) {
   //    for (int j = i+1; j < 10; j++) {
   //       if (tab[i]>tab [j]) {
   //          int temp = tab[i];
   //          tab[i] = tab[j];
   //          tab[j] = temp;
   //       }
   //    }
   // }
   // for (int i = 0; i < 10; i++) {
   //    cout << tab[i] << " ";
   // }

   // zad 10
   // int macierz[8][8] = {
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,1,1,1,1,1,1},
   //    {2,1,1,1,1,1,1,1},
   // };
   //
   // cout<<"suma kazdego wiersza: "<<endl;
   // for (int i = 0; i < 8; i++) {
   //    int sum = 0;
   //    for (int j = 0; j < 8; j++) {
   //       sum += macierz[i][j];
   //    }
   //    cout<<"Dla wiersza "<<i+1<<" "<<sum<<endl;
   // }
   //
   // cout<<"suma kazdej kolumny: "<<endl;
   // for (int j = 0; j < 8; j++) {
   //    int sum = 0;
   //    for (int i = 0; i < 8; i++) {
   //       sum += macierz[i][j];
   //    }
   //    cout<<"Dla kolumny "<<j+1<<" "<<sum<<endl;
   // }
   //
   // cout<<"suma elementow macierzy: "<<endl;
   // int sum = 0;
   // for (int i = 0; i < 8; i++) {
   //    for (int j = 0; j < 8; j++) {
   //       sum += macierz[i][j];
   //    }
   // }
   // cout<<"Suma: "<<sum<<endl;

   //zad 11
   // const int macierz[6][8] = {
   //       {1,1,1,1,1,1,1,1},
   //       {1,1,6,1,1,9,1,1},
   //       {1,1,1,1,1,8,1,1},
   //       {1,1,1,1,5,1,1,1},
   //       {1,1,1,1,1,0,0,1},
   //       {1,1,1,1,1,1,1,1}
   //    };
   //  int greatest= macierz[0][0];
   //
   //  int smallest= macierz[0][0];
   //
   //  for (int i = 0; i < 6; i++) {
   //      for (int j = 0; j < 8; j++) {
   //          int newGreatest = macierz[i][j];
   //          int newSmallest = macierz[i][j];
   //          if (newGreatest > greatest) {
   //             greatest = newGreatest;
   //          }
   //          if (newSmallest < smallest) {
   //             smallest = newSmallest;
   //          }
   //      }
   //  }
   //
   //  cout << "Najwieksza: "<<greatest << endl;
   //  cout << "Najmniejsza: "<<smallest << endl;
   //
   //
   //  for (int i = 0; i < 6; i++) {
   //      for (int j = 0; j < 8; j++) {
   //          if (macierz[i][j] == smallest) {
   //              cout<<"najmniejsze (x,y): "<<i<<" "<<j<<endl;
   //          }
   //          if (macierz[i][j] == greatest) {
   //              cout<<"najwieksze (x,y): "<<i<<" "<<j<<endl;
   //          }
   //      }
   //  }

   // //zad 12
   // int s=6;
   // int macierz[6][6] = {
   //    {1, 2, 3, 4, 5, 9},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6}
   // };
   // int sum =0;
   // for (int i=0; i<6; i++) {
   //    for (int j=0; j<6; j++) {
   //       if (i+j==s-1) {
   //          sum+=macierz[i][j];
   //       }
   //    }
   // }
   // cout<<sum;

   //zad 13
   // int macierz[5][5] = {
   //    {1,0,0,0,0},
   //    {0,1,0,0,0},
   //    {0,0,1,0,0},
   //    {0,0,0,1,0},
   //    {0,0,0,0,1},
   // };
   // int errors=0;
   // for (int i = 0; i < 5; i++) {
   //    for (int j = 0; j < 5; j++) {
   //       if (macierz[i][j] != macierz[j][i] && i !=j) {
   //          errors++;
   //       }
   //    }
   // }
   // if (errors == 0) {
   //    cout<<"macierz symetryczna";
   // } else {
   //    cout<<"macierz niesymetryczna";
   // }

   //zad 14
   // float macierz[6][6] = {
   //    {1, 2, 3, 4, 5, 9},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6},
   //    {1, 2, 3, 4, 5, 6}
   // };
   // float k = 8;
   //
   // for (int i = 0; i < 6; i++) {
   //    for (int j = 0; j < 6; j++) {
   //       macierz[i][j] *= k;
   //    }
   // }
   //
   // for (int i = 0; i < 6; i++) {
   //    for (int j = 0; j < 6; j++) {
   //       cout << macierz[i][j] << " ";
   //    }
   //    cout << endl;
   // }

   //zad 15
   // int macierz[4][8] = {
   //    {1,1,1,1,1,1,1,1},
   //    {1,1,6,1,1,9,1,1},
   //    {1,1,1,1,1,8,1,1},
   //    {1,1,1,1,5,1,1,1},
   // };
   //
   // int n;
   // cout << "Podaj liczbe jaka mam szukac: ";
   // cin >> n;
   //
   // int count = 0;
   // for (int i = 0; i < 4; i++) {
   //    for (int j = 0; j < 8; j++) {
   //       if (macierz[i][j] == n) {
   //          count++;
   //       }
   //    }
   // }
   //
   // cout <<"ta liczba pojawila sie "<<count<<" razy"<<endl;
   // cout <<"Pozycje tej liczby: "<<endl;
   //
   // for (int i = 0; i < 4; i++) {
   //    for (int j = 0; j < 8; j++) {
   //       if (macierz[i][j] == n) {
   //          cout<<"x: "<<i+1<<" y: "<<j+1<<endl;
   //       }
   //    }
   // }

   //zad 16
   // int macierz[5][5] ={
   //    {1,0,0,0,0},
   //    {0,1,0,0,0},
   //    {0,0,1,0,0},
   //    {0,0,0,1,0},
   //    {0,0,0,0,1}
   // };
   // int errors=0;
   // for (int i = 0; i < 5; i++) {
   //    for (int j = 0; j < 5; j++) {
   //       if (i==j && macierz[i][j] != 1) {
   //          errors++;
   //       } else if (i!=j && macierz[i][j] != 0) {
   //          errors++;
   //       }
   //    }
   // }
   // if (errors == 0) {
   //    cout <<"macierz jednostkowa";
   // }
   // else {
   //    cout <<"macierz nie jest jednostkowa";
   // }

   // zad 17
   int macierz[6][8] = {
       {1,1,1,1,1,1,1,1},
       {1,1,6,1,1,9,1,1},
       {1,1,1,1,1,8,1,1},
       {1,1,1,1,5,1,1,1},
       {1,1,1,1,1,0,0,1},
       {1,1,1,1,1,1,1,1}
   };

    int kolumny[8];
    int wiersze[6];
    //suma wierszy
    cout <<"suma wierszy: "<<endl;
    for (int i = 0; i < 6; i++) {
        int sum = 0;
        for (int j = 0; j < 8; j++) {
            sum+= macierz[i][j];
        }
        wiersze[i] = sum;
        cout <<i+1<<": "<<sum<<endl;
    }
    //suma kolumn
    cout <<"suma kolumn: "<<endl;
    for (int j = 0; j < 8; j++) {
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            sum+= macierz[i][j];
        }
        kolumny[j] = sum;
        cout <<j+1<<": "<<sum<<endl;
    }

    //najwieksze
    int gk = kolumny[0];
    int gw = wiersze[0];

    for (int i = 0; i < 6; i++) {
        if (gk < kolumny[i]) {
            gk = kolumny[i];
        }
    }
    for (int i = 0; i < 6; i++) {
        if (gk == kolumny[i]) {
            cout<<"Najwieksza suma kolumn: " <<i+1<<": "<<kolumny[i]<<endl;
        }
    }
    for (int i = 0; i < 8; i++) {
        if (gw < wiersze[i]) {
            gw = wiersze[i];
        }
    }
    for (int i = 0; i < 8; i++) {
        if (gw == wiersze[i]) {
            cout<<"Najwieksza suma wierszy: " <<i+1<<": "<<wiersze[i]<<endl;
        }
    }


}