#ifndef _S_SUPERELLIPSOID
#define _S_SUPERELLIPSOID

#pragma once


#include "s_objectnonnormalized.h"

namespace SCD
{

	class S_Superellipsoid :
		public S_ObjectNonNormalized
	{
	public:
		S_Superellipsoid(Scalar a,Scalar b,Scalar c,Scalar epsilon1,Scalar epsilon2);
		virtual ~S_Superellipsoid(void);

		virtual Point3  n_Support(const Vector3& v, int& lastFeature)const;

		virtual S_ObjectType getType() const;

		virtual void drawGLInLocalCordinates();

	protected:
		Scalar a_,b_,c_,epsilon1_,epsilon2_;
		int displist_;
		int slices_, stacks_;


	};
}

#endif