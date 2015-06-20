KERNEL_SRC := /lib/modules/3.16.0-41-generic/build

ifneq ($(KERNELRELEASE),)

obj-m := kfioc_test.o

else

all: modules

modules clean:
	$(MAKE) -C $(KERNEL_SRC) M=$(CURDIR) EXTRA_CFLAGS='-Wall -Werror-implicit-function-declaration' $@

endif

