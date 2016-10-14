echo "--- Practice 1 ---"
insmod romfs.ko hided_file_name=aa
mount -o loop test.img t
find t
umount test.img
rmmod romfs.ko
echo "--- Practice 2 ---"
insmod romfs.ko encrypted_file_name=bb
mount -o loop test.img t
cat t/bb
umount test.img
rmmod romfs.ko
echo " "
echo "--- Practice 3 ---"
insmod romfs.ko exec_file_name=cc
mount -o loop test.img t
ls -l t
umount test.img
rmmod romfs.ko
