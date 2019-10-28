obj-m := hello_dev.o 

hello_dev-y += hello.o
#hello_dev-y += world.o

KERNELDIR := /lib/modules/$(shell uname -r)/build #内核路径

PWD := $(shell pwd)

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules #编译命令
	
clean:
	rm -rf *.o *~ codre .depend .*.cmd *.ko *.mod.c *.tmp_versions *.order *.symvers .cache.mk .tmp_versions
