// THIS IS A GENERATED FILE => DO NOT EDIT
#include <gtest/gtest.h>

extern "C" {
	#include "components_TireDeviation_Automatic.h"
	#include "components_TireDeviationTest_noDeviation_Automatic.h"
}

namespace {
	// test fixture class
	class components_TireDeviationTest_noDeviation_Automatic_SubClass: public ::testing::Test {
		// TODO
	};

	TEST_F(components_TireDeviationTest_noDeviation_Automatic_SubClass, components_TireDeviationTest_noDeviation_Automatic_noDeviation) {
		/* user defined local variables */
		float32 limit;
		uint8 noFailure;
		float32 v;
		float32 v_mean;

		v = 100.04F;
		v_mean = 100.0F;
		limit = 0.05F;
		noFailure = false;
		ASSERT_TRUE(!components_TireDeviation_Automatic_calc(&(components_TireDeviationTest_noDeviation.td), v, v_mean, limit, noFailure));
	}

}