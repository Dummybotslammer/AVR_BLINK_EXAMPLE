#define DDRB *((volatile unsigned char*) 0x24)
#define PORTB *((volatile unsigned char*) 0x25)

void _delay_loop(unsigned long x) {
    volatile unsigned char waster;
    for(unsigned long i=0; i<x; i++) {
        waster = 0;
    }
}

int main() {
    DDRB = 1<<1;

    while(true) {
        PORTB |= 1<<1;
        _delay_loop(250000);
        PORTB &= 0;
        _delay_loop(250000);
    }
    return 0;
}
