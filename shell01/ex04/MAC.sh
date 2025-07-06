#!/bin/sh
ifconfig -a | grep 'ether' | tr -s " " "\t" | cut -f 3
