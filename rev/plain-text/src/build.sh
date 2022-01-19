#/usr/bin/bash

sudo docker build -t ctf-builder - < build.dockerfile
sudo docker run --rm --mount type=bind,src="$(pwd)",dst=/mnt ctf-builder

cp plain-text ../players/
