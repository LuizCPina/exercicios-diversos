#define liga  PD5
#define desliga  PD6
#define s1  PD4

int main()
{
  DDRD = 0;
  PORTD = 255;

  DDRB = 255;
  PORTB =0;

while(1){



if(!(PIND & (1<<desliga)))
PORTB = 0;

if(PIND & (1<<s1))
PORTB = 0;

else if(!(PIND & (1<<liga)))
PORTB = 255;


}

}