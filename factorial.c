#include<stdio.h>
#include<math.h>

double calculatecharge(int hours){
    double total;

// case 1

if( hours <= 8){
    total = 25 + (hours* 0.5);
}
// case 2

else if (hours <= 24){
  double rent = 25 + (hours- 8)* 5;
    if (rent > 50) rent = 50;
    total = rent + (hours* 0.5);
}

//case 3
else{
    int fulldays = hours/ 24 ;
    int extrahours = hours% 24 ;
    double totalfulldays = fulldays * 50;
    double totalextrahours;
    if( extrahours <= 8){
    totalextrahours = 25 + (hours* 0.5);
    }
    else{

        double extrarent = 25 + (extrahours- 8)* 5;
    if (extrarent > 50) extrarent = 50;
    totalextrahours = extrarent + (extrahours* 0.5);
    }

    total = totalfulldays + totalextrahours;
}

return total;
}

int main(){
            int hours[3];
            double charges[3];
            int totalhours = 0;
            double totalcharges = 0;
            printf("Enter hours rented for each of 3 customers:\n");
            for (int i = 0; i < 3 ; i++){
                printf(" customer %d\n", i+1);
                scanf("%d", &hours[i]);
                charges[i] = calculatecharge(hours[i]);
                totalhours += hours[i];
                totalcharges += charges[i];
                }

                printf("%-5s%-5s%-10s\n", "car", "hours", "charges");
                for (int i = 0; i < 3 ; i++){
                    printf("%-5d%-5d%-10.2f\n", i+1 , hours[i], charges[i]);


                }

                printf("%-5s%-5d%-10.2lf\n", "TOTAL", totalhours, totalcharges);
}
