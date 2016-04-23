
# Style Options
zstyle ':completion:*' completer _expand _complete _ignored _correct _approximate
zstyle ':completion:*' completions 0
zstyle ':completion:*' glob 1
zstyle ':completion:*' list-colors ${(s.:.)LS_COLORS}
zstyle ':completion:*' list-prompt %SAt %p: Hit TAB for more, or the character to insert%s
zstyle ':completion:*' max-errors 5
zstyle ':completion:*' substitute 1
zstyle ':completion:*' rehash true
zstyle ':completion:*' menu select
zstyle :compinstall filename '/home/ethan/.zshrc'

# Module Loading
autoload -Uz compinit promptinit
compinit
promptinit

# Shell History
HISTFILE=~/etc/zsh-histfile
HISTSIZE=1000
SAVEHIST=1000

# Shell Options
setopt appendhistory
setopt autocd
setopt extendedglob
setopt nomatch
setopt notify
setopt complete_aliases
setopt hist_ignore_dups

# Emacs Bindings
bindkey -e
