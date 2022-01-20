#/usr/bin/bash

docker build -t buffer-overflow .
docker run -d --rm -p 1337:1337 --name buffer-overflow buffer-overflow
