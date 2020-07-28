// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWGhostCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeGhost));
    auto txId = TWStringCreateWithUTF8Bytes("85a3fabef7e6f44be4839b50e2336616bbc7f87c59e3d8c422d36971f6cdfd43");
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeGhost, txId));
    auto accId = TWStringCreateWithUTF8Bytes("2vGo6CA3u6FzuUuZnzsTmmJFPbzhzE8W3h19E3XdW2H3erDyWmr");
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeGhost, accId));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeGhost));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeGhost));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeGhost), 8);
    ASSERT_EQ(TWBlockchainBitcoin, TWCoinTypeBlockchain(TWCoinTypeGhost));
    ASSERT_EQ(0x61, TWCoinTypeP2shPrefix(TWCoinTypeGhost));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeGhost));
    assertStringsEqual(symbol, "GHOST");
    assertStringsEqual(txUrl, "https://ghostscan.io/tx/85a3fabef7e6f44be4839b50e2336616bbc7f87c59e3d8c422d36971f6cdfd43");
    assertStringsEqual(accUrl, "https://ghostscan.io/address/2vGo6CA3u6FzuUuZnzsTmmJFPbzhzE8W3h19E3XdW2H3erDyWmr");
    assertStringsEqual(id, "ghost");
    assertStringsEqual(name, "Ghost");
}
