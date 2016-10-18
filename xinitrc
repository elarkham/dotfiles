#!/bin/bash
## Author: Ethan Larkham
## Name: xinitrc

#############################
###- X11 General Options -###
#############################
xrdb $HOME/etc/xresources
xset fp rehash
xset +fp $XDG_CONFIG_HOME/fonts
xset -b
wmname LG3D
#xset s off -dpms
#xset m 0 0
xsetroot -cursor_name left_ptr
#ibus-daemon --xim &

#####################
###- Compositing -###
#####################
#redshift -l 43.194722:-70.875 &
compton --config "$HOME/etc/compton.conf" &

#####################
###- Root Window -###
#####################
hsetroot -fill $HOME/usr/images/wallpapers/abstract/space-clouds.png
#xsetroot -solid "#848484"
#hsetroot -solid "#848484"
#hsetroot -center $HOME/usr/pictures/Beserk_Battle.jpg -contrast 0.68 -gamma 0.4

##############################
##- Window Managment Tools -##
##############################
$HOME/bin/xcmenu -d
yabar -c $HOME/etc/yabar.conf &
sxhkd -f 100 -c $HOME/etc/sxhkdrc &
exec bspwm -c $HOME/etc/bspwmrc
