//
// Created by hanson on 2018/8/10.
//

#include <libff/common/default_types/ec_pp.hpp>
#include <libff/algebra/curves/bn128/bn128_pp.hpp>
#include <libsnark/common/default_types/r1cs_gg_ppzksnark_pp.hpp>
#include <libsnark/relations/constraint_satisfaction_problems/r1cs/examples/r1cs_examples.hpp>
#include <libsnark/zk_proof_systems/ppzksnark/r1cs_gg_ppzksnark/r1cs_gg_ppzksnark.hpp>
#include "Address.h"

using namespace libzerocash;

int main(){
    Address address;
    PublicAddress publicAddress = address.getPublicAddress();

    printf("hello world!");
    return 0;
}