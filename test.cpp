#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>



TEST_CASE( "Sum is completed", "[Sum]"){
    SECTION("Check Positive Sum"){
        std::vector<int> v1{0,1,2};
        REQUIRE( Sum(v1) == 3);
    }SECTION("Check Negative Sum"){
        std::vector<int> v2{0,-1,-2};
        REQUIRE( Sum(v2) == -3);
    }SECTION("Check Negative and Positive sum"){
        std::vector<int> v3{2,-2};
        REQUIRE( Sum(v3) == 0);
    }SECTION("Check zero Sum"){
        std::vector<int> v4{};
        REQUIRE( Sum(v4) == 0);
    }
}

TEST_CASE( "Product is completed", "[Product]"){
    SECTION("Check positie product"){
        std::vector<int> v1{1,2};
        REQUIRE( Product(v1) == 2);
    }SECTION("Check Negative product"){
        std::vector<int> v2{-1,-2};
        REQUIRE( Product(v2) == 2);
    }SECTION("Check Negatie and Positive product"){
        std::vector<int> v3{2,-2};
        REQUIRE( Product(v3) == -4);
    }SECTION("Check Zero product"){
        std::vector<int> v4{0,1};
        REQUIRE( Product(v4) == 0);
    }
}

TEST_CASE( "Sign is completed", "[Sign]"){
    SECTION("Checking Double Values"){
        REQUIRE( Sign(-1.0) == -1);
        REQUIRE( Sign(1.0) == 1);
        REQUIRE( Sign(0.0) == 1);
    }
    
}