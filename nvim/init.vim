" =============================
" |       LOAD PLUGINS        |
" =============================
call plug#begin()
Plug 'itchyny/lightline.vim'
Plug 'scrooloose/nerdtree'
Plug 'Raimondi/delimitMate'
"Plug 'Valloric/YouCompleteMe'
Plug 'derekwyatt/vim-scala'
Plug 'tpope/vim-surround'
Plug 'tpope/vim-fugitive'
Plug 'elixir-lang/vim-elixir'
Plug 'pangloss/vim-javascript'
Plug 'mxw/vim-jsx'
Plug 'dag/vim-fish'
call plug#end()


" =============================
" |    VIM GENERAL CONFIG     |
" =============================

" | ==== BEHAVIOR ==== |

" -||General||-
set virtualedit=block " make visual blocks easier to understand"

filetype plugin on
filetype indent on

set autoread  " re-read file if changed outside
set autowrite " automatically save before commands like :next and :make"

set so=7      " keeps cursor reasonably centered

" for self-made keybindings
let mapleader   = ","
let g:mapleader = ","

" use unix as the standard file type
set ffs=unix,mac,dos

" use JSX on all js files
let g:jsx_ext_required = 0

" fix mouse issues
set mouse=r

" -||Backups||-
set noswapfile
set nowritebackup
set nobackup
set undodir=$HOME/etc/undo

" -||Formatting||-
set tabstop=2      " number of visual spaces per tab
set shiftwidth=2   " size of tab indent
set softtabstop=2  " number of spaces in tab when editing
set expandtab      " tabs print spaces
set autoindent     " auto tab-indent based on code postition

set lbr            " enables line breaking
set sbr=>          " symbol to indicate linebreak

set splitright          " open vsplits on the right"
set nofoldenable        " disable folding
set foldmethod=syntax   " define how to fold files in general"
set foldlevelstart=20   " only I can set the folds
set backspace=2         " fixes backspaces

" removes all trailing whitespace
autocmd BufWritePre * %s/\s\+$//e

" -||Searching||-
set incsearch           " search as characters are entered
set hlsearch            " highlight matches
set ignorecase          " ignore case when searching
set smartcase           " case only helps search

" Visual mode pressing * or # searches for the current selection
" Super useful! From an idea by Michael Naumann
vnoremap <silent> * :call VisualSelection('f')<CR>
vnoremap <silent> # :call VisualSelection('b')<CR>


" | ==== DISPLAY ==== |

" -||General||-
let base16colorspace=256
set t_Co=256
set background=dark
colorscheme dougblack
syntax on               " display syntax coloring

set number              " show line numbers
set cursorline          " highlight current line
set showmatch           " highlight matching [{()}]
set wildmenu            " visual autocomplete for command menu

set showcmd             " show command in bottom bar
set laststatus=2        " the status line always displayed

set lazyredraw          " redraw only when we need to.
set encoding=utf-8      " use UTF-8 for file/term encoding"
set modeline            " modelines are vim settings for a specfic file
" set noeb vb t_vb=

" Popup menu colors
highlight Pmenu ctermfg=4 ctermbg=8


" Cursor highlight colors
" hi CursorLine term=bold cterm=bold guibg=White

" | ==== KEY BINDINGS ==== |

" Disables Highlight
nmap <F3> :set hlsearch!<CR>

" CTRL-Tab is next tab
nmap <C-Tab> :<C-U>bnext<CR>

" CTRL-SHIFT-Tab is previous tab
nmap <C-S-Tab> :<C-U>bprev<CR>

" Sets Buffer Keys
nmap <C-n> :bnext<CR>
nmap <C-p> :bprevious<CR>

" Space open/closes folds
nnoremap <space> za

" Disable Arrow Keys
nmap <Up> <NOP>
nmap <Down> <NOP>
nmap <Left> <NOP>
nmap <Right> <NOP>

" Treat broken lines as multiple lines with j/k
map j gj
map k gk

" Center the cursor on the search word when using 'n'
nmap n nzz
nmap N Nzz

" Pressing leader+ss will toggle and untoggle spell checking
map <leader>ss :setlocal spell!<cr>


" =============================
" |         PLUGINS           |
" =============================

" | ==== Lightbar ==== |
let g:lightline = {
      \ 'colorscheme': 'wombat',
      \ 'component': {
      \   'readonly': '%{&readonly?"⭤":""}',
      \ }
      \ }


" | ==== NERD Tree ==== |
" Close Tree if its the only buffer left
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTreeType") && b:NERDTreeType == "primary") | q | endif
" ^Map ctrl + n to nerdTree toggle
map <F2> :NERDTreeToggle<CR>

