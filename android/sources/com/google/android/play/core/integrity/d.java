package com.google.android.play.core.integrity;

import com.google.android.play.core.integrity.StandardIntegrityManager;

/* loaded from: classes3.dex */
public final class d extends StandardIntegrityManager.StandardIntegrityToken {
    public final String a;

    public d(String str) {
        this.a = str;
    }

    @Override // com.google.android.play.core.integrity.StandardIntegrityManager.StandardIntegrityToken
    public final String a() {
        return this.a;
    }
}
