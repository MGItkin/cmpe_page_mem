obj-m += final_mod.o
all: kern_mod 

kern_mod:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean

#client:
	#g++ -g ./client/final_cl.cpp -lpthread -lboost_system -o client
