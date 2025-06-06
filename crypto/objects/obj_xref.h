/*
 * WARNING: do not edit!
 * Generated by objxref.pl
 *
 * Copyright 1998-2025 The OpenSSL Project Authors. All Rights Reserved.
 *
 * Licensed under the Apache License 2.0 (the "License").  You may not use
 * this file except in compliance with the License.  You can obtain a copy
 * in the file LICENSE in the source distribution or at
 * https://www.openssl.org/source/license.html
 */


typedef struct {
    int sign_id;
    int hash_id;
    int pkey_id;
} nid_triple;

DEFINE_STACK_OF(nid_triple)

static const nid_triple sigoid_srt[] = {
    {NID_md2WithRSAEncryption, NID_md2, NID_rsaEncryption},
    {NID_md5WithRSAEncryption, NID_md5, NID_rsaEncryption},
    {NID_shaWithRSAEncryption, NID_sha, NID_rsaEncryption},
    {NID_sha1WithRSAEncryption, NID_sha1, NID_rsaEncryption},
    {NID_dsaWithSHA, NID_sha, NID_dsa},
    {NID_dsaWithSHA1_2, NID_sha1, NID_dsa_2},
    {NID_mdc2WithRSA, NID_mdc2, NID_rsaEncryption},
    {NID_md5WithRSA, NID_md5, NID_rsa},
    {NID_dsaWithSHA1, NID_sha1, NID_dsa},
    {NID_sha1WithRSA, NID_sha1, NID_rsa},
    {NID_ripemd160WithRSA, NID_ripemd160, NID_rsaEncryption},
    {NID_md4WithRSAEncryption, NID_md4, NID_rsaEncryption},
    {NID_ecdsa_with_SHA1, NID_sha1, NID_X9_62_id_ecPublicKey},
    {NID_sha256WithRSAEncryption, NID_sha256, NID_rsaEncryption},
    {NID_sha384WithRSAEncryption, NID_sha384, NID_rsaEncryption},
    {NID_sha512WithRSAEncryption, NID_sha512, NID_rsaEncryption},
    {NID_sha224WithRSAEncryption, NID_sha224, NID_rsaEncryption},
    {NID_ecdsa_with_Recommended, NID_undef, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_Specified, NID_undef, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA224, NID_sha224, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA256, NID_sha256, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA384, NID_sha384, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA512, NID_sha512, NID_X9_62_id_ecPublicKey},
    {NID_dsa_with_SHA224, NID_sha224, NID_dsa},
    {NID_dsa_with_SHA256, NID_sha256, NID_dsa},
    {NID_id_GostR3411_94_with_GostR3410_2001, NID_id_GostR3411_94,
     NID_id_GostR3410_2001},
    {NID_id_GostR3411_94_with_GostR3410_94, NID_id_GostR3411_94,
     NID_id_GostR3410_94},
    {NID_id_GostR3411_94_with_GostR3410_94_cc, NID_id_GostR3411_94,
     NID_id_GostR3410_94_cc},
    {NID_id_GostR3411_94_with_GostR3410_2001_cc, NID_id_GostR3411_94,
     NID_id_GostR3410_2001_cc},
    {NID_rsassaPss, NID_undef, NID_rsassaPss},
    {NID_dhSinglePass_stdDH_sha1kdf_scheme, NID_sha1, NID_dh_std_kdf},
    {NID_dhSinglePass_stdDH_sha224kdf_scheme, NID_sha224, NID_dh_std_kdf},
    {NID_dhSinglePass_stdDH_sha256kdf_scheme, NID_sha256, NID_dh_std_kdf},
    {NID_dhSinglePass_stdDH_sha384kdf_scheme, NID_sha384, NID_dh_std_kdf},
    {NID_dhSinglePass_stdDH_sha512kdf_scheme, NID_sha512, NID_dh_std_kdf},
    {NID_dhSinglePass_cofactorDH_sha1kdf_scheme, NID_sha1,
     NID_dh_cofactor_kdf},
    {NID_dhSinglePass_cofactorDH_sha224kdf_scheme, NID_sha224,
     NID_dh_cofactor_kdf},
    {NID_dhSinglePass_cofactorDH_sha256kdf_scheme, NID_sha256,
     NID_dh_cofactor_kdf},
    {NID_dhSinglePass_cofactorDH_sha384kdf_scheme, NID_sha384,
     NID_dh_cofactor_kdf},
    {NID_dhSinglePass_cofactorDH_sha512kdf_scheme, NID_sha512,
     NID_dh_cofactor_kdf},
    {NID_id_tc26_signwithdigest_gost3410_2012_256, NID_id_GostR3411_2012_256,
     NID_id_GostR3410_2012_256},
    {NID_id_tc26_signwithdigest_gost3410_2012_512, NID_id_GostR3411_2012_512,
     NID_id_GostR3410_2012_512},
    {NID_ED25519, NID_undef, NID_ED25519},
    {NID_ED448, NID_undef, NID_ED448},
    {NID_ecdsa_with_SHA3_224, NID_sha3_224, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA3_256, NID_sha3_256, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA3_384, NID_sha3_384, NID_X9_62_id_ecPublicKey},
    {NID_ecdsa_with_SHA3_512, NID_sha3_512, NID_X9_62_id_ecPublicKey},
    {NID_RSA_SHA3_224, NID_sha3_224, NID_rsaEncryption},
    {NID_RSA_SHA3_256, NID_sha3_256, NID_rsaEncryption},
    {NID_RSA_SHA3_384, NID_sha3_384, NID_rsaEncryption},
    {NID_RSA_SHA3_512, NID_sha3_512, NID_rsaEncryption},
    {NID_SM2_with_SM3, NID_sm3, NID_sm2},
    {NID_ML_DSA_44, NID_undef, NID_ML_DSA_44},
    {NID_ML_DSA_65, NID_undef, NID_ML_DSA_65},
    {NID_ML_DSA_87, NID_undef, NID_ML_DSA_87},
    {NID_SLH_DSA_SHA2_128s, NID_undef, NID_SLH_DSA_SHA2_128s},
    {NID_SLH_DSA_SHA2_128f, NID_undef, NID_SLH_DSA_SHA2_128f},
    {NID_SLH_DSA_SHA2_192s, NID_undef, NID_SLH_DSA_SHA2_192s},
    {NID_SLH_DSA_SHA2_192f, NID_undef, NID_SLH_DSA_SHA2_192f},
    {NID_SLH_DSA_SHA2_256s, NID_undef, NID_SLH_DSA_SHA2_256s},
    {NID_SLH_DSA_SHA2_256f, NID_undef, NID_SLH_DSA_SHA2_256f},
    {NID_SLH_DSA_SHAKE_128s, NID_undef, NID_SLH_DSA_SHAKE_128s},
    {NID_SLH_DSA_SHAKE_128f, NID_undef, NID_SLH_DSA_SHAKE_128f},
    {NID_SLH_DSA_SHAKE_192s, NID_undef, NID_SLH_DSA_SHAKE_192s},
    {NID_SLH_DSA_SHAKE_192f, NID_undef, NID_SLH_DSA_SHAKE_192f},
    {NID_SLH_DSA_SHAKE_256s, NID_undef, NID_SLH_DSA_SHAKE_256s},
    {NID_SLH_DSA_SHAKE_256f, NID_undef, NID_SLH_DSA_SHAKE_256f},
};

static const nid_triple *const sigoid_srt_xref[] = {
    &sigoid_srt[0],
    &sigoid_srt[1],
    &sigoid_srt[7],
    &sigoid_srt[2],
    &sigoid_srt[4],
    &sigoid_srt[3],
    &sigoid_srt[9],
    &sigoid_srt[5],
    &sigoid_srt[8],
    &sigoid_srt[12],
    &sigoid_srt[30],
    &sigoid_srt[35],
    &sigoid_srt[6],
    &sigoid_srt[10],
    &sigoid_srt[11],
    &sigoid_srt[13],
    &sigoid_srt[24],
    &sigoid_srt[20],
    &sigoid_srt[32],
    &sigoid_srt[37],
    &sigoid_srt[14],
    &sigoid_srt[21],
    &sigoid_srt[33],
    &sigoid_srt[38],
    &sigoid_srt[15],
    &sigoid_srt[22],
    &sigoid_srt[34],
    &sigoid_srt[39],
    &sigoid_srt[16],
    &sigoid_srt[23],
    &sigoid_srt[19],
    &sigoid_srt[31],
    &sigoid_srt[36],
    &sigoid_srt[25],
    &sigoid_srt[26],
    &sigoid_srt[27],
    &sigoid_srt[28],
    &sigoid_srt[40],
    &sigoid_srt[41],
    &sigoid_srt[48],
    &sigoid_srt[44],
    &sigoid_srt[49],
    &sigoid_srt[45],
    &sigoid_srt[50],
    &sigoid_srt[46],
    &sigoid_srt[51],
    &sigoid_srt[47],
    &sigoid_srt[52],
};
