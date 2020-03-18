COMMON_OBJECTS =
CPU	       = msp430g2553
CFLAGS         = -mmcu=${CPU} -I../h
LDFLAGS        = -L/opt/ti/msp430_gcc/include

CC             = msp430-elf-gcc
AS             = msp430-elf-as

all: led.elf

led.elf: ${COMMON_OBJECTS} greenTrue.o
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^

load: led.elf
	msp430loader.sh led.elf
clean:
	rm -f *.o *.elf *~
greenTrue.o: greenTrue.c
