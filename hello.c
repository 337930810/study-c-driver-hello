#include <linux/module.h>
#include <linux/init.h>
/*所有的驱动程序都会包含上面的2个头文件*/

static int hello_init(void)
{
        printk(KERN_EMERG "hello world\n");/*打印hello world*/
        return 0;
}

static void hello_exit(void)
{
        printk(KERN_EMERG "goodbay world\n");/*打印goodbay world*/
}

module_init(hello_init);/*制定模块加载函数*/
module_exit(hello_exit);/*制定模块卸载函数*/

MODULE_LICENSE("GPL");/*模块许可声明*/


