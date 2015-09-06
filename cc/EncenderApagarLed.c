#include<16876.H>
#fuses XT,NOWDT
#use delay(clock=4000000)
#BYTE TRISB=0X86
#BYTE PORTB=0X06
Void main()
{
   bit_clear(TRISB,0);//configura en 0,osea
                       //se configura como salida
   White(1){
   bit_set(PORTB,0);//se prende el led 
   delay_ms(100);
   bit_clear(PORTB,0);
   delay_ms(100);
   }
}
