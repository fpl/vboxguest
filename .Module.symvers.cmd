cmd_/tmp/vboxguest/src/vboxguest-7.0.20/Module.symvers :=  sed 's/ko$$/o/'  /tmp/vboxguest/src/vboxguest-7.0.20/modules.order | scripts/mod/modpost -m      -o /tmp/vboxguest/src/vboxguest-7.0.20/Module.symvers -e -i Module.symvers -T - 
