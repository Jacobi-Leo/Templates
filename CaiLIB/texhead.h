\usepackage{txfonts}
\usepackage{graphicx,color,amssymb}
\usepackage{makeidx}
\usepackage[CJKbookmarks]{hyperref}
\usepackage{longtable}
\makeindex
\hypersetup{CJKbookmarks,%
       bookmarksnumbered,%
              colorlinks,%
               linkcolor=blue,%
              plainpages=false,%
            pdfstartview=FitH}
\font\tenmsa=msam10
% ==============================================================
\def\tenrm{}
% ----------------------------------------------
% 编辑命令
\def\linetitle#1{\vspace{3mm}{\noindent\large$\bullet$ #1}\vspace{3mm}}
\def\deltext#1{}  % 用于把某些文本暂时去掉，相当于整段加注释。
\def\cb#1{\vbox to0pt{\vss\hbox to 0pt{\hss{}#1\hss}\vss}}%
\def\h#1{\hspace{#1}}
\def\hzblue#1{ {\kaishu\color{blue}#1} }
% ----------------------------------------------
% 索引
\def\cqdindex#1{\index{#1}}
\def\indexd#1{\index{A.2.演示程序!{#1}}{\bf #1}}
%\def\indexc#1{\index{A.1.名词索引!{#1}}{\bf #1}}
\def\indexc#1#2{\index{名词索引!{#1,#2}}{\bf {#1}({\bf #2})}}
% ----------------------------------------------
% 长话短说
\def\e{\varepsilon}
\def\h{\hbar}
\def\be{\begin{equation}}
\def\ee{\end{equation}}
\def\FT{{\Longleftrightarrow}}
\def\o{\pmb{\omega}}
% ----------------------------------------------
% 特殊符号
\def\boxdot{\hbox{\tenmsa\char0}}
\def\boxplus{\hbox{\tenmsa\char1}}
\def\boxcross{\hbox{\tenmsa\char2}}
\def\boxq{\hbox{\tenmsa\char3}}
\def\boxb{\hbox{\tenmsa\char4}}
\font\tenmsb=msbm10
\def\CI{\hbox{\tenmsb I}}
\def\CL{\hbox{\tenmsb L}}
\def\CP{\hbox{\tenmsb P}}
\def\M{\mathcal{M}}
\def\Pm{\mathcal{P}}
\def\l{\ell}
% ----------------------------------------------
% 带帽子的符号
\def\etab1{\overline{\eta_1}}
\def\ctimes{\underline{:}}
\def\ol#1{\overline{#1}}
\def\oll#1{\overline{\overline{#1}}}
\def\wh#1{\widehat{#1}}
\def\tf#1{\widetilde{#1}}
\def\df#1{\widetilde{\ol{#1}}}
\def\x{{\hat x}}
% ----------------------------------------------
% 数学符号
\def\inti{{\int_{-\infty}^\infty}}
\def\iint{\int\!\!\!\!\!\int}
\def\iinti{\int\!\!\!\!\!\int\limits_{-\infty}^\infty}
\def\iiint{\int\!\!\!\!\!\int\!\!\!\!\!\int}
\def\iiinti{\int\!\!\!\!\!\int\limits_{-\infty}^\infty\!\!\!\!\!\int}
\def\dint{\displaystyle\int}
\def\F#1{ \mathcal{F}\left\{ #1 \right\}}
\def\Fi#1{ \mathcal{F}^{-1}\left\{ #1 \right\}}
% ----------------------------------------------
% 函数关系
\def\Matrix#1{\left(#1\right)}
\def\jump#1{\left[\!\left[#1\right]\!\right]}
\def\erfc#1{{\,\rm erfc}\left(#1\right)}
\def\abs#1{\left|#1\right|}
\def\aabs#1{\left\|#1\right\|}
\def\dimm#1{\left[#1\right]}
\def\ket#1{\left|\left. #1 \right> \right.}
\def\bra#1{\left.\left< #1 \right. \right|}
% ----------------------------------------------
% 数学函数
\def\Rank{\hbox{\rm Rank}}
\def\sign{\hbox{\rm sign}}
\def\sgn{\hbox{\rm sgn}}
\def\minmod{\hbox{\rm minmod}}
\def\maxmin{\begin{array}{c}\max\\ \min\\ \end{array}}
\def\supmaxmin{\stackrel{\displaystyle\max}{\displaystyle\min}}
\def\Ai{ {\rm Ai} }
\def\Bi{ {\rm Bi} }
\def\Arg{ {\rm Arg} }
% ----------------------------------------------
% 用于上标下标
\def\iph{{i+\frac{1}{2}}}
\def\imh{{i-\frac{1}{2}}}
\def\jph{{j+\frac{1}{2}}}
\def\jmh{{j-\frac{1}{2}}}
% ----------------------------------------------
% 导数，梯度，旋度，Laplace 算子等
\def\H{\nabla}
\def\n{\a{n}}
\def\d{{\,\bf d}}
\def\vd{{\,\delta}}
\def\dt#1#2{\frac{{\rm d} #1}{{\rm d} #2}}
\def\L{\Delta}
\def\D{\nabla\cdot}
\def\R{\nabla\times}
\def\p{{\prime}}
\def\pp{{\prime\prime}}
\def\ppp{{\prime\prime\prime}}
%\newcommand{\dfrac}[2]{\frac{\displaystyle #1}{\displaystyle #2}}
\def\dfrac#1#2{\frac{\displaystyle #1}{\displaystyle #2}}
\def\P#1#2{\frac{\partial #1}{\partial #2}}
\def\div{\nabla\cdot}
\def\rot{\nabla\times}
\def\grad{\nabla}
\def\dt#1#2{\frac{{\rm d} #1}{{\rm d} #2}}
\def\dts#1#2{{{\rm d} #1}/{{\rm d} #2}}
\def\Dt#1#2{\frac{{\rm D} #1}{{\rm D} #2}}
\def\Dts#1#2{{{\rm D} #1}/{{\rm D} #2}}
\def\Dta#1#2{\frac{{\bar{\rm D}} #1}{{\bar{\rm D}} #2}}
\def\Dtas#1#2{{{\bar{\rm D}} #1}/{{\bar{\rm D}} #2}}
\def\Dtol#1#2{\frac{{\overline{\rm D}}\, #1}{{\overline{\rm D}} #2}}
\def\Dtols#1#2{{{\overline{\rm D}}\, #1}/{{\overline{\rm D}} #2}}
\def\rad{{\rm rad}}
% ----------------------------------------------
% 俄文
\input cyracc.def
\font\cyrr=wncyr10
\font\bbf=cmbx12 scaled 1600
\def\cyr{\cyracc\cyrr}
\def\Godunov{{\cyr Godunov}}
% ----------------------------------------------
% 中文
\def\beginpar{\hskip 2\ccwd}
\def\news#1{ {\zihao{-5}\small\noindent\heiti 小资料：\fangsong #1} }
\def\huozhe#1{\hspace{#1 mm}\mbox{或者}\hspace{#1 mm}}
\def\bingqie#1{\hspace{#1 mm}\mbox{并且}\hspace{#1 mm}}
\def\qie#1{\hspace{#1 mm}\mbox{且}\hspace{#1 mm}}
\def\he#1{\hspace{#1 mm}\mbox{和}\hspace{#1 mm}}
\def\qizhong#1{\hspace{#1 mm}\mbox{其中}\hspace{#1 mm}}
\def\yearc{2015年}
\def\datec{2015年4月1日}
\def\datef{二零一五年四月一日}
\def\why{{\heiti (※为什么？※)}}
% ----------------------------------------------
% 黑体
\def\pmb#1{\hbox{\boldmath $#1$}}
\def\a#1{{\hbox{\boldmath $#1$}}}
\def\cqdbf#1{\hbox{\boldmath $#1$}}
% ----------------------------------------------
% 统计物理，动理学格式
\def\ndd#1{\left[#1\right]}
\def\nvd#1{\left<#1\right>}
\def\nav#1{<\!\! #1\!\!>}
\def\feq{f^{ {\rm eq} }}
\def\fns{f_{ {\rm ns} }}
\def\lmfp{\ell_{ {\rm mfp} }}
\def\gl{g_{_{\!\parallel}}\!}
\def\gp{g_{_{\!\perp}}\!}
\def\sD{{\!_D}}
\def\ssp{{\!_{\!\bf{+}}}}
\def\ssn{{\!_{\!\bf{-}}}}
\def\sspv#1{{\!_{\!\bf{+#1}}}}
\def\ssnv#1{{\!_{\!\bf{-#1}}}}
\def\sspvi#1{{\!_{\!{#1}}}}
\def\ssnvi#1{{\!_{\!{\ol{#1}}}}}
% ----------------------------------------------
% 无量纲数
\def\Mt{M\!t}
\def\Kn{{\rm K\!n}}
\def\Pr{{\rm Pr}}
\def\Ma{{\rm Ma}}
\def\Re{{\rm Re}}
\def\t0{{\tau_{_0}}}
% ----------------------------------------------
% 奇怪人名
\def\Lohner{L\" ohner}
% ----------------------------------------------
% F90D
\def\F90D{{\tt F90D}}
\def\RI{ {\rm I} }
\def\RII{ {\rm I\! I} }
\def\RIII{ {\rm I\! I\! I} }
\def\afootnote#1{\footnote{#1}}
%\setcounter{tocdepth}{3}

