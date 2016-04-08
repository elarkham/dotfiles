#! /usr/bin/env fish
## Author: Ethan Larkham
## Date: March 30, 2016

# Source Login Profiles
env -i HOME=$HOME dash -l -c printenv | sed -e '/PATH/s/:/ /g;s/=/ /;s/^/set -x /' | source

# Environment Variables
set -x PATH $PATH $HOME/bin
set -x EDITOR "nvim"
set -x VISUAL "nvim"

# Edit Mode
##fish_vi_mode

# Colored LESS output
set -x LESS_TERMCAP_mb (printf "\033[01;31m")
set -x LESS_TERMCAP_md (printf "\033[01;38;5;74m")
set -x LESS_TERMCAP_me (printf "\033[0m")
set -x LESS_TERMCAP_se (printf "\033[0m")
set -x LESS_TERMCAP_so (printf "\033[38;5;246m")
set -x LESS_TERMCAP_ue (printf "\033[0m")
set -x LESS_TERMCAP_us (printf "\033[04;38;5;146m")

# Set Fish Syntax Colors
set fish_color_command      blue --bold
set fish_color_param        yellow
set fish_color_quote        green
set fish_color_redirection  cyan
set fish_color_end          purple
set fish_color_comment      white
set fish_color_match        cyan
set fish_color_search_match --background=purple
set fish_color_operator     cyan
set fish_color_escape       cyan
set fish_color_cwd          white

set fish_pager_color_prefix       cyan
set fish_pager_color_completion   normal
set fish_pager_color_description  555 yellow
set fish_pager_color_progress     cyan
set fish_pager_color_secondary    cyan

# PS1 Settings
function fish_prompt
  set_color white
  echo -n '['

  set_color blue
  echo -n (hostname)

  set_color white
  echo -n ':'(prompt_pwd)']'

  set_color yellow
  if [ (whoami) = "root" ]
    echo -n '# '
  else
    echo -n '$ '
  end

  set_color normal
end

# Greeting
set fish_greeting ""
