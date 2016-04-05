#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


static int init(void)
{
	printk(KERN_INFO "*** YEAH, I am a kernel hacker, dude =) ***\n");
	return 0;
}

static void exit(void)
{
	printk(KERN_INFO "*** GOOD BY in <3 ***\n");
}

module_init(init);
module_exit(exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("dojomi");
MODULE_DESCRIPTION("Just a sample module");
