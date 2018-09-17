obj-m += logitech_led.o

debug:
	make -d -C /lib/modules/$(shell uname -r)/build M=$(PWD)/ modules

all: 
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD)/ modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD)/ clean
