# vboxguest

Mirror of the Virtualbox guest Linux modules. 
This is extracted from the VirtualBox Guest Additions and limited to Linux kernel support.

It is possibile to update this tree on a Debian system with an up-to-date Virtualbox package as follows

```
mount -r -o loop /usr/share/virtualbox/VBox*iso /mnt
/mnt/VBoxLinuxAdditions.run --target /tmp/vboxguest --noexec
cd /tmp/vboxguest && tar xvf VBoxGuestAdditions-amd64.tar.bz2
rsync -av /tmp/vboxguest/src/vboxguest-7*/ /path/to/vboxguest-repo/.
```

On the target guest system it is only required to install the kernel headers of
the running kernel and then:

```
make -C /lib/modules/`uname -r`/build M=$PWD
sudo make -C /lib/modules/`uname -r`/build M=$PWD modules_install
```

Of course, it is possible to apply patches and separate the building and install
phases if required. This repo has been expressly prepared for Guix integration.
