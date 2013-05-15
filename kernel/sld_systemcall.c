#include <linux/kernel.h>
#include <linux/linkage.h>

asmlinkage long
sys_seal (int type)
{
  return 0;
}

asmlinkage long
sys_is_sealed (int type)
{
  return 0;
}

asmlinkage long
sys_sld_create_key (int type)
{
  return 0;
}

asmlinkage long
sys_sld_open (int type)
{
  return 0;
}

asmlinkage long
sys_sld_socket (int type)
{
  return 0;
}


