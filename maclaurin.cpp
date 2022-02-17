# include <iostream>
# include <math.h>
float potencia(float b, int p);
int factorial(int n);
using namespace std;

int main(){
    int  n, y, z=2 ;
    float cos=1, x, e, s, m=1;
    //double m, n;
    cout<<"\n\tUNIVERSIDAD MAYOR DE SAN ANDRES\n";
    cout<<"\tFACULTAD DE INGENIERAIA\n";
    cout<<"\tLABORATORIO DE PROGRAMACION\n";
    cout<<"\n\t ingrese el angulo = ";
    cin>>x;
    cout<<"\ncantidad de terminos a usar\n ";
    cin>>n;
    for(y=1;y<=n;y++)
    {
        cos = cos+ (s*e)/m;
        s = potencia(-1,y+2);
        e = potencia(x,2*y);
        m = factorial(z);
        z=2+z;
        //cout<<z<<"  ";
        cout<<s<<"X^"<<2+y<<"/"<<m<<"   ";
    }
    cout<<"\ncos("<<x<<") ="<<cos;

    return 0;
}

float potencia(float b, int p){
    int k;
    float resultado=1;
    for(k=1;k<=p;k++){
        resultado=resultado*b;
    }
    return(resultado);
}

int factorial(int n){
    int  i;
    float f=1;
    for (i=1;i<=n;i++){
        f=f*i;
    }
    return(f);
}