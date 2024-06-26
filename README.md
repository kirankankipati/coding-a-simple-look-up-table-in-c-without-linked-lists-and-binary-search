Linked-lists is one of the most commonly used data-structures to store linear dynamic items such as while commonly coding in C/C++ which is also the case in the Linux Kernel Programming. However linked-lists have their own drawbacks as they dynamically (i.e runtime) tend to shrink and grow in size thus the memory allocation and deallocation steps which need to be done. If we fail to do the same properly, it can lead to a nasty runtime crash. This is somewhat tolerable in user-space code which is quite easy to debug and fix, but it is extremely lethal in kernel programming, as it can bring down an entire system the moment any kernel crash happens. So at times these days we don’t need self do these as we may use any third-party library to manage the same. And in the case of kernel, depending upon the context chances are you may find one or multi-level multidimensional data-structure management APIs. What I really meant “multi-level” APIs is, it can be primitive list management data-structure APIs or one more level of wrapper APIs. For example sk_buff, net_device data-structures.

Having said, my most preferred choice when it comes to multidimensional data-structure is still plain simple fail-proof “arrays”. I use strictly arrays whenever I need a multidimensional data-structure. Say a packet queue, some items to store, instructions, jobs, so on. So what I do is a simple look-up-table without Linked lists. Since here the memory is statically allocated (not runtime), it is pretty safe. Of course you cannot resize while in operation. But it guarantees a crash proof rock solid code-base for any critical applications. So this example source which I wrote and discussed in the video.

For more details kindly refer: my Website article - The Linux Channel - https://thelinuxchannel.org/2023/12/coding-a-simple-look-up-table-in-c-without-linked-lists-and-a-binary-search/

my YouTube video - https://youtu.be/rdKxxwlu_QA

I also conduct sessions/classes on Systems and Network Software Programming, Linux Kernel Programming and Architecture. Kindly follow the link below: https://thelinuxchannel.org/courses/

If you have any queries or anything to discuss further kindly feel free to contact me. Kindly follow the link below: https://thelinuxchannel.org/contact/

