obj-m += hello_kernel.o

KDIR = /lib/modules/$(shell uname -r)/build

module:
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules

#module_install:
#	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) modules_install

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order
