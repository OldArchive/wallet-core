// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

package com.trustwallet.core.app.blockchains.ghost

import com.google.protobuf.ByteString
import com.trustwallet.core.app.utils.Numeric
import com.trustwallet.core.app.utils.toHexByteArray
import com.trustwallet.core.app.utils.toHexBytes
import com.trustwallet.core.app.utils.toHexBytesInByteString
import junit.framework.Assert.assertEquals
import org.junit.Test
import wallet.core.jni.GhostSigner
import wallet.core.jni.proto.Ghost

class TestGhostSigner {

    init {
        System.loadLibrary("TrustWalletCore")
    }

    @Test
    fun GhostTransactionSigning() {
        // TODO: Finalize implementation

        //val transfer = Ghost.TransferMessage.newBuilder()
        //    .setTo("...")
        //    .setAmount(...)
        //    ...
        //    .build()
        //val signingInput = Ghost.SigningInput.newBuilder()
        //    ...
        //    .build()

        //val output: Ghost.SigningOutput = GhostSigner.sign(signingInput)

        //assertEquals(
        //    "__EXPECTED_RESULT_DATA__",
        //    Numeric.toHexString(output.encoded.toByteArray())
        //)
    }
}
