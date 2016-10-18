#!/usr/bin/env bash
## Author: Ethan Larkham
## Date: 10-10-2016
## ~/etc/profile

# Create downloads dir in tmpfs
if [ ! -d /tmp/downloads ];       then mkdir $HOME/tmp/downloads;       fi
if [ ! -d /tmp/downloads/$USER ]; then mkdir $HOME/tmp/downloads/$USER; fi

# Exports
export PATH="$HOME/bin:/sbin:/usr/sbin:$PATH"
export MANPATH="$HOME/var/man:$MANPATH"
