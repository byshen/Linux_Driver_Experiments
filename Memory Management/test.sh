make
gcc prj3.c -o program
insmod mtest.ko
echo "listvma" > /proc/mtest
echo "findpage 0x40000" > /proc/mtest
echo "writeval 0x6fd000 0x123123" > /proc/mtest
dmesg | tail -50
