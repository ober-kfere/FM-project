
/*
co chcem urobit -


op write(operator, reg-adresa, hodnota), mozno cislo op?

testujes, v ktorom registri sa op nachadza
*/

int main(){


void regwrite(uint8_t addr, uint8_t val)
{
	A0DOWN;
		if (regflag = 1){
			A0UP;
		} else {
			A1DOWN;
		}

	// Send address
	PORTD |= (addr << 2);
	PORTB |= (addr >> 6);

	CSDOWN;
	CSUP;

	// clear data port
	PORTD &= 0b00000011;
	PORTB &= 0b11111100;

	// Go into data write mode
	A0UP;

	PORTD |= (val << 2);
	PORTB |= (val >> 6);

	CSDOWN;
	CSUP;
  
  	// clear data port
	PORTD &= 0b00000011;
	PORTB &= 0b11111100;
}

