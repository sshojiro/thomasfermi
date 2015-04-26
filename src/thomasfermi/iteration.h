﻿/*! \file iteration.h
	\brief 微分方程式を反復法で解くクラスの宣言

	Copyright ©  2015 @dc1394 All Rights Reserved.
	This software is released under the BSD-2 License.
*/

#ifndef _ITERATION_H_
#define _ITERATION_H_

#pragma once

#include "data.h"
#include "foelement.h"
#include "linearequations.h"
#include "shoot/shootfunc.h"
#include "utility/property.h"
#include <boost/optional.hpp>	// for boost::optional

namespace thomasfermi {
	namespace femall {
		class Iteration final {
			// #region 型エイリアス

		public:
			using result_type = std::pair<std::shared_ptr<Beta>, FEM::dvector>;

			// #endregion 型エイリアス

			// #region コンストラクタ・デストラクタ

			//! A constructor.
			/*!
				唯一のコンストラクタ
				\param arg インプットファイル名とTBBを使用するかどうかのstd::pair
			*/
			explicit Iteration(std::pair<std::string, bool> const & arg);

			//! A destructor.
			/*!
				デストラクタ
			*/
			~Iteration();

			// #region コンストラクタ・デストラクタ
			
			// #region publicメンバ関数

			//! A public member function.
			/*!
				反復関数
			*/
			void Iterationloop();

			//! A public member function.
			/*!
				結果を返す関数
				\return 結果
			*/
			Iteration::result_type makeresult();
			
			// #endregion publicメンバ関数

			// #region privateメンバ関数

			//! A private member function (const).
			/*!
				反復の誤差を返す
				\return 反復の誤差
			*/
			double GetNormRD() const;
			
			//! A private member function (const).
			/*!
				βを生成する関数
				\return β
			*/
			FEM::dvector make_beta() const;

			//! A private member function.
			/*!
				yを合成する
			*/
			void ymix();
						
			// #endregion privateメンバ関数

			// #region プロパティ

		public:
			//! A property.
			/*!
				読み込んだデータを返す
				\return 読み込んだデータ
			*/
			utility::Property<std::shared_ptr<Data>> const PData;

			// #endregion プロパティ

			// #region メンバ変数

		private:
			//! A private member variable (constant expression).
			/*!
			*/
			static auto constexpr ITERATION_REDUCTION = 0.15;
			
			//! A private member variable (constant expression).
			/*!
			*/
			static auto constexpr ITERATION_THRESHOLD = 1.0;

			//! A private member variable (constant expression).
			/*!
			*/
			static auto constexpr N_BC_GIVEN = 2U;
			
			//! A private member variable.
			/*!
				一次混合の値α
			*/
			std::vector<std::size_t> i_bc_given_;

			//! A private member variable.
			/*!
				βオブジェクト
			*/
			std::shared_ptr<Beta> pbeta_;
			
			//!  A private member variable.
			/*!
				データオブジェクト
			*/
			std::shared_ptr<Data> pdata_;

			//! A private member variable.
			/*!
				有限要素法オブジェクト
			*/
			std::unique_ptr<FEM> pfem_;

			//! A private member variable.
			/*!
				連立一次方程式のソルバーオブジェクト
			*/
			boost::optional<Linear_equations> ple_;
			
			//! A private member variable.
			/*!
			*/
			FEM::dvector v_bc_nonzero_;

			//! A private member variable.
			/*!
				xのメッシュの可変長配列
			*/
			FEM::dvector x_;
			
			//! A private member variable.
			/*!
				yの値の可変長配列
			*/
			FEM::dmklvector y_;

			//! A private member variable.
			/*!
			*/
			double y1_;

			//! A private member variable.
			/*!
			*/
			double y2_;

			//! A private member variable.
			/*!
				前回のループのyの値の可変長配列
			*/
			FEM::dmklvector ybefore_;

			// #endregion メンバ変数
						
			// #region 禁止されたコンストラクタ・メンバ関数

			//! A private constructor (deleted).
			/*!
				デフォルトコンストラクタ（禁止）
			*/
			Iteration() = delete;

			//! A private copy constructor (deleted).
			/*!
				コピーコンストラクタ（禁止）
			*/
			Iteration(const Iteration &) = delete;

			//! A private member function (deleted).
			/*!
				operator=()の宣言（禁止）
				\param コピー元のオブジェクト（未使用）
				\return コピー元のオブジェクト
			*/
			Iteration & operator=(const Iteration &) = delete;

			// #endregion 禁止されたコンストラクタ・メンバ関数
		};
	}

	template <typename T>
	//! A template function（非メンバ関数）.
	/*!
		対象の値を二乗する
		\param x 対象の値
		\return 対象の値の二乗
	*/
	inline T sqr(T x)
	{ return x * x; }
}

#endif	// _ITERATION_H_