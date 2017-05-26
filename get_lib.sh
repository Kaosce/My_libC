if [ -n $1 ]; then
    cp -a libs_srcs $1 && cp -a includes $1 && cp Makefile $1
else
    echo "Usage : get_lib <path>"
fi
