docker run --rm --name gcc --workdir /usr/src/Workspace -v %cd%:/usr/src/Workspace toolchain_image make

docker run --rm --name gcc --workdir /usr/src/Workspace -v %cd%:/usr/src/Workspace toolchain_image bin/CCourse_L01_helloworld
