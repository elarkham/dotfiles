" ///////// Vim colorscheme /////////"
" Name: darkmirror
" Author: Alex Sanchez (kniren)
" Email: kniren@gmail.com
" ///////////////////////////////////"
"
" ///////////////////////////////////////////////////////"
"
" .::::: .::
" .:: .:: .::
" .:: .:: .:: .: .:::.:: .::
" .:: .:: .:: .:: .:: .:: .::
" .:: .::.:: .:: .:: .:.::
" .:: .:: .:: .:: .:: .:: .::
" .::::: .:: .:::.::: .:: .::
"
" .:: .::
" .: .:: .::: .:
" .:: .:: . .:: .: .:::.: .::: .:: .: .:::
" .:: .:: .::.:: .:: .:: .:: .:: .::
" .:: .: .::.:: .:: .:: .:: .:: .::
" .:: .::.:: .:: .:: .:: .:: .::
" .:: .::.::.::: .::: .:: .:::
"
" ///////////////////////////////////////////////////////"
" //////////// URxvt Colors ////////////"
"
"*foreground: #DDDDDD
"*background: #050505
"!black
"*color0: #5f5f5f
"*color8: #121212
"!red
"*color1: #da4939
"*color9: #ff6c5c
"!green
"*color10: #509F7E
"*color2: #61C29A
"!yellow
"*color3: #cc7833
"*color11: #bc9458
"!blue
"*color4: #6d9cbe
"*color12: #91c1e3
"!magenta
"*color5: #9966D9
"*color13: #9954DE
"!cyan
"*color6: #435d75
"*color14: #6e98a4
"!white
"*color7: #dedede
"*color15: #dddddd

" //////////////////////////////////////"

set background=dark
hi clear
if exists("syntax on")
    syntax reset
endif

let g:color_name="darkmirror"

" Normal colors
hi Normal ctermfg=7 guifg=#dedede guibg=#050505 gui=none
hi Ignore ctermfg=0 guifg=#e9e9e9 gui=none
hi Comment ctermfg=0 guifg=#000000 gui=none
hi LineNr ctermfg=0 guifg=#e9e9e9 gui=none
hi CursorLine ctermbg=8 guibg=#202020 cterm=none gui=none
hi CursorLineNr ctermbg=8 guibg=#202020 cterm=none gui=none
hi ColorColumn ctermbg=8 guibg=#202020 gui=none
hi SignColumn ctermbg=none
hi VertSplit ctermfg=8 guifg=#e9e9e9 guibg=#121212 ctermbg=none cterm=none gui=none
hi Float ctermfg=1 guifg=#da4939 gui=none
hi Include ctermfg=3 guifg=#cc7833 gui=none
hi Define ctermfg=3 guifg=#cc7833 gui=none
hi Macro ctermfg=3 guifg=#cc7833 gui=none
hi PreProc ctermfg=2 guifg=#61c29a gui=none
hi PreCondit ctermfg=3 guifg=#cc7833 gui=none
hi NonText ctermfg=0 guifg=#e9e9e9 gui=none
hi Directory ctermfg=6 guifg=#435d75 gui=none
hi SpecialKey ctermfg=11 guifg=#bc9458 gui=none
hi Type ctermfg=3 guifg=#cc7833 gui=none
hi String ctermfg=2 guifg=#61c29a gui=none
hi Constant ctermfg=9 guifg=#ff6c5c gui=none
hi Special ctermfg=10 guifg=#61c29a gui=none
hi SpecialChar ctermfg=9 guifg=#ff6c5c gui=none
hi Number ctermfg=9 guifg=#ff6c5c gui=none
hi Identifier ctermfg=2 guifg=#61c29a gui=none
hi Conditional ctermfg=14 guifg=#6e98a4 gui=none
hi Repeat ctermfg=4 guifg=#6d9cbe gui=none
hi Statement ctermfg=3 guifg=#cc7833 gui=none
hi label ctermfg=7 guifg=#dedede gui=none
hi operator ctermfg=3 guifg=#cc7833 gui=none
hi keyword ctermfg=7 guifg=#dedede gui=none
hi StorageClass ctermfg=3 guifg=#cc7833 gui=none
hi Structure ctermfg=14 guifg=#6e98a4 gui=none
hi Typedef ctermfg=2 guifg=#61c29a gui=none
hi Function ctermfg=3 guifg=#cc7833 gui=none
hi Exception ctermfg=2 guifg=#61c29a gui=none
hi Underlined ctermfg=8 guifg=#121212 gui=none
hi Title ctermfg=7 guifg=#121212 gui=none
hi Tag ctermfg=8 guifg=#121212 gui=none
hi Delimiter ctermfg=1 guifg=#da4939 gui=none
hi SpecialComment ctermfg=0 guifg=#e9e9e9 gui=none
hi Boolean ctermfg=1 guifg=#da4939 gui=none
hi Todo ctermfg=11 ctermbg=none guifg=#bc9458 gui=none
hi MoreMsg ctermfg=15 guifg=#dddddd gui=none
hi ModeMsg ctermfg=7 guifg=#dedede gui=none
hi Debug ctermfg=1 guifg=#da4939 gui=none
hi MatchParen ctermfg=7 guifg=#ff6c5c ctermbg=0 guibg=#dedede gui=none
hi Error ctermfg=1 ctermbg=none
hi ErrorMsg ctermfg=7 guifg=#dedede ctermbg=1 guibg=#da4939 gui=none
hi WildMenu ctermfg=7 guifg=#dedede ctermbg=0 guibg=#e9e9e9gui=none
hi Folded ctermfg=0 guifg=#e9e9e9ctermbg=none guibg=#000000 gui=none
hi FoldColumn ctermfg=0 guifg=#e9e9e9 ctermbg=none guibg=#000000 gui=none
hi IncSearch ctermfg=7 guifg=#dedede ctermbg=3 guibg=#cc7833 cterm=none gui=none
hi Search ctermfg=2 guifg=#e9e9e9ctermbg=8 guibg=#e9e9e9 gui=none
hi WarningMsg ctermfg=9 guifg=#ff6c5c ctermbg=none gui=none
hi Question ctermfg=7 guifg=#dedede ctermbg=none gui=none
hi Pmenu ctermfg=0 guifg=#e9e9e9 ctermbg=8 guibg=#121212 gui=none
hi PmenuSel ctermfg=8 guifg=#121212 gui=none
hi Visual ctermfg=8 guifg=#121212 ctermbg=15 guibg=#dddddd gui=none
hi StatusLine ctermfg=8 ctermbg=15
hi StatusLineNC ctermfg=8 guifg=#121212 ctermbg=0 guibg=#e9e9e9 gui=none

" Vim specific
hi helpNote ctermfg=3 guifg=#cc7833 ctermbg=none gui=none

" Diff lines
hi DiffLine ctermfg=6 guifg=#435d75 ctermbg=none gui=none
hi DiffText ctermfg=0 ctermbg=2 guifg=#dddddd gui=none
hi DiffAdd ctermfg=2 guifg=#61c29a ctermbg=none gui=none
hi DiffDelete ctermfg=1 guifg=#61c29a ctermbg=none gui=none
hi DiffChange ctermfg=3 guifg=#cc7833 ctermbg=none gui=none
hi DiffRemoved ctermfg=1 guifg=#da4939

" Spell checking
if version >= 700
  hi clear SpellBad
  hi clear SpellCap
  hi clear SpellRare
  hi clear SpellLocal
  hi SpellBad cterm=underline gui=underline
  hi SpellCap cterm=underline gui=underline
  hi SpellRare cterm=underline gui=underline
  hi SpellLocal cterm=underline gui=underline
endif

" Python
hi pythonString ctermfg=2 guifg=#61c29a gui=none
hi pythonFunction ctermfg=7 guifg=#dedede gui=none

" HTML
hi htmlHead ctermfg=7 guifg=#dedede gui=none
hi htmlTitle ctermfg=7 guifg=#dedede gui=none
hi htmlH1 ctermfg=7 guifg=#dedede gui=none
hi htmlH2 ctermfg=7 guifg=#dedede gui=none
hi htmlH3 ctermfg=7 guifg=#dedede gui=none
hi htmlH4 ctermfg=7 guifg=#dedede gui=none
hi htmlH5 ctermfg=7 guifg=#dedede gui=none
hi htmlH6 ctermfg=7 guifg=#dedede gui=none
hi htmlLink ctermfg=4 guifg=#dedede gui=none

" NERDTree
hi NERDTreeRO ctermfg=2 guifg=#61c29a ctermbg=none gui=none
hi NERDTreeToggleOn ctermbg=none gui=none
hi NERDTreeToggleOff ctermbg=none gui=none
hi NERDTreeExecFile ctermfg=2 guifg=#61c29a ctermbg=none gui=none

" Markdown
hi markdownH1 ctermfg=2 guifg=#61c29a gui=none
hi markdownH2 ctermfg=2 guifg=#61c29a gui=none
hi markdownH3 ctermfg=10 guifg=#509F7E gui=none
hi markdownH4 ctermfg=10 guifg=#509F7E gui=none
hi markdownHeadingDelimiter ctermfg=10 guifg=#509F7E gui=none
hi markdownHeadingRule ctermfg=2 guifg=#61c29a gui=none
hi markdownCodeBlock ctermfg=7 guifg=#dedede gui=none
hi markdownAutomaticLink ctermfg=1 guifg=#da4939 gui=none
hi markdownLinkText ctermfg=3 guifg=#cc7833 gui=none

" Mutt
hi mailSubject ctermfg=5 guifg=#dedede gui=none
hi mailHeaderKey ctermfg=6 guifg=#dedede gui=none

" Cursor
hi Cursor guifg=#000000 guibg=#ff8939 gui=none
hi iCursor guifg=#000000 guibg=#ff8939 gui=none
hi vCursor guifg=#000000 guibg=#ff8939 gui=none
