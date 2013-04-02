#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#define DRIVER_AUTHOR "Eugene Gritskevich <qwaker.00@gmail.com>"
#define DRIVER_DESC   "Calculator module"

static int __init init(void)
{
    printk(KERN_ALERT "Hello, world\n");
    return 0;
}

static void __exit cleanup(void)
{
    printk(KERN_ALERT "Goodbye, world\n");
}

module_init(init);
module_exit(cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_SUPPORTED_DEVICE("testdevice");
