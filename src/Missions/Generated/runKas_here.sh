#!/bin/bash
for filename in *.kp; do
	filename=${filename%.kp}
	./kas2c $filename.kp ../Generated/$filename.c ../Generated/$filename.h ../Generated/$filename.func.c 
done
