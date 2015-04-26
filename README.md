﻿================================================================================
【 ソフト名 】thomasfermi
【  作成者  】@dc1394
================================================================================

★これは何？
　原子に対して、Thomas-Fermi方程式を有限要素法（Finite Element Method、FEM）で、
　数値的に解くプログラムです。

★更新履歴
　2015/04/28 ver.0.1  コードを全面的に書き直して公開。

★ライセンス
　このソフトはフリーソフトウェアです（修正BSDライセンス）。
--------------------------------------------------------------------------------
　thomasfermi
　Copyright (C) 2015 @dc1394

　1.ソースコード形式であれバイナリ形式であれ、変更の有無に関わらず、以下の条件を
　満たす限りにおいて、再配布および利用を許可します。

　1-1.ソースコード形式で再配布する場合、上記著作権表示、 本条件書および第2項の責
　任限定規定を必ず含めてください。
　1-2.バイナリ形式で再配布する場合、上記著作権表示、 本条件書および下記責任限定
　規定を、配布物とともに提供される文書 および/または 他の資料に必ず含めてくださ
　い。

　2.本ソフトウェアは無保証です。自己責任で使用してください。

　3.著作権者の名前を、広告や宣伝に勝手に使用しないでください。

  Copyright (c) 2015, @dc1394
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:
  * Redistributions of source code must retain the above copyright notice, 
    this list of conditions and the following disclaimer.
  * Redistributions in binary form must reproduce the above copyright notice, 
    this list of conditions and the following disclaimer in the documentation 
    and/or other materials provided with the distribution.
  * Neither the name of the <organization> nor the　names of its contributors 
    may be used to endorse or promote products derived from this software 
    without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND
  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
  DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
--------------------------------------------------------------------------------

  thomasfermiにはBoostコミュニティによるBoost C++ Librariesを使用しています。
  こちらのライセンスは Boostライセンス になります。

/* Boost Software License - Version 1.0 - August 17th, 2003
*
* Permission is hereby granted, free of charge, to any person or organization
* obtaining a copy of the software and accompanying documentation covered by
* this license (the "Software") to use, reproduce, display, distribute,
* execute, and transmit the Software, and to prepare derivative works of the
* Software, and to permit third-parties to whom the Software is furnished to
* do so, all subject to the following:

* The copyright notices in the Software and this entire statement, including
* the above license grant, this restriction and the following disclaimer,
* must be included in all copies of the Software, in whole or in part, and
* all derivative works of the Software, unless such copies or derivative
* works are solely in the form of machine-executable object code generated by
* a source language processor.

* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
* SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
* FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
* DEALINGS IN THE SOFTWARE.
*/

　thomasfermiにはALGLIB ProjectによるALGLIB®を使用しています。こちらのライセンス
　はGPL 2+になります。

/* ALGLIB® - numerical analysis library, 1999-2015.
*
* ALGLIB is a registered trademark of the ALGLIB Project.
*/
  thomasfermiにはGNU ProjectによるGNU Scientific Libraryを使用しています。こち
　らのライセンスは GNU General Public License になります。
