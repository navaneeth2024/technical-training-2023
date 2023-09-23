#include<stdio.h>
int main(){
    int unit;
    float rate,ba,sc,sgst,cgst;
    printf("Enter your units consumed:");
    scanf("%d",&unit);
    if(unit>5000)
        printf("Does not belong to domestic tariff!");
    else{
        switch(unit){
            case 1 ... 100:{
                ba=unit*2.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 101 ... 200:{
                ba=unit*3.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 201 ... 300:{
                ba=unit*4.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 301 ... 400:{
                ba=unit*5.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 401 ... 500:{
                ba=unit*6.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 501 ... 600:{
                ba=unit*9.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 601 ... 700:{
                ba=unit*12.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 701 ... 800:{
                ba=unit*15.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 801 ... 900:{
                ba=unit*18.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 901 ... 999:{
                ba=unit*25.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 1000 ... 2000:{
                ba=unit*30.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 2001 ... 3000:{
                ba=unit*35.90;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
            case 3001 ... 5000:{
                ba=unit*40;
                sc=ba*(7.85/100);
                sgst=ba*(15.25/100);
                cgst=ba*(2.75/100);
                break;
            }
        }
        printf("Billed Amount = %f\n",ba);
        printf("Surcharges = %f\n",sc);
        printf("SGST = %f\n",sgst);
        printf("CGST = %f\n",cgst);
    }
    return 0;
}