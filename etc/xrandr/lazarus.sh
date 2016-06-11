#!/bin/sh
xrandr --output DisplayPort-0 --off \
       --output HDMI-0 --off \
       --output DVI-1 --primary --mode 1920x1080 --pos 900x120 --rotate normal \
       --output DVI-0 --mode 1600x900 --pos 0x0 --rotate left
