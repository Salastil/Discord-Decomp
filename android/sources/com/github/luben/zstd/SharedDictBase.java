package com.github.luben.zstd;

/* loaded from: classes3.dex */
abstract class SharedDictBase extends AutoCloseBase {
    public void finalize() {
        close();
    }
}
