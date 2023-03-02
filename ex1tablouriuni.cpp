/*Să se compună un program care va calcula maximul
 elementelor negative şi suma elementelor pozitive ce se conţin într-un tabel liniar de dimensiunea n cu elemente numere reale.*/
 #include <iostream>
 using namespace std;
 int main(){
     int v[99];
     int n,i,max=-99,suma=0,p;
     cout<<"introduceti dim logica : ";
     cin>>n;
     for(i=0;i<n;i++){
         cout<<"elemetntul "<<i<<" = ";
         cin>>v[i];
     }
     for(i=0;i<n;i++){
         if(v[i]<0 && v[i]>max){
             max=v[i];
         }
         if(v[i]>0){
             suma+=v[i];
         }
         
     }
cout<<"max = "<<max<<endl;
cout<<"suma = "<<suma;
     return 0;
 } 