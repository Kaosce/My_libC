if [ -n $1 ]; then
    cp -a ~/Library/V2/includes $1 && cp -a ~/Library/V2/libs_srcs $1 && cp -a ~/Library/V2/Makefile $1
else
    echo "Usage : get_lib <path>"
fi
