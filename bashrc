if [ -f /etc/bash_completion ]; then
	    . /etc/bash_completion
fi

complete -cf sudo

shopt -s cdspell
shopt -s checkwinsize
shopt -s cmdhist
shopt -s dotglob
shopt -s expand_aliases
shopt -s extglob
shopt -s histappend
shopt -s hostcomplete
shopt -s nocaseglob

export HISTSIZE=10000
export HISTFILESIZE=${HISTSIZE}
export HISTCONTROL=ignoreboth

BLACK="$(   tput setaf 0 )"
RED="$(     tput setaf 1 )"
GREEN="$(   tput setaf 2 )"
YELLOW="$(  tput setaf 3 )"
BLUE="$(    tput setaf 4 )"
MAGENTA="$( tput setaf 5 )"
CYAN="$(    tput setaf 6 )"
WHITE="$(   tput setaf 7 )"

alias ls='ls --group-directories-first --time-style=+"%d.%m.%Y %H:%M" --color=auto -F'
alias ll='ls -l --group-directories-first --time-style=+"%d.%m.%Y %H:%M" --color=auto -F'
alias la='ls -la --group-directories-first --time-style=+"%d.%m.%Y %H:%M" --color=auto -F'

alias grep='grep --color=tty -d skip'
alias ip='ip -c'
alias less='less -F'

alias cp="cp -i"     # confirm before overwriting something
alias df='df -h'     # human-readable sizes
alias free='free -m' # show sizes in MB

alias irssi="irssi --home=$HOME/etc/irssi"

#Prompt
#PS1='[\u@\h \W]\$ '
export PS1="\[$(tput bold)\][\[$(tput sgr0)\]\[$(tput sgr0)\]\[\033[38;5;1m\]\h\[$(tput bold)\]\[$(tput sgr0)\]\[\033[38;5;15m\]:\[$(tput sgr0)\]\w\[$(tput bold)\]]\[$(tput sgr0)\]\\$ \[$(tput sgr0)\]"

export PATH="/sbin:/usr/sbin:/home/ethan/bin/:$PATH"
export EDITOR="vim"
export VISUAL="less"
export PAGER="less"

# Man Colors
man() {
  env \
  LESS_TERMCAP_mb=$'\E[01;31m' \
  LESS_TERMCAP_md=$'\E[01;38;5;74m' \
  LESS_TERMCAP_me=$'\E[0m' \
  LESS_TERMCAP_se=$'\E[0m' \
  LESS_TERMCAP_so=$'\E[38;5;246m' \
  LESS_TERMCAP_ue=$'\E[0m' \
  LESS_TERMCAP_us=$'\E[04;38;5;146m' \
  man "$@"
}
:
