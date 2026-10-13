package com.google.android.exoplayer2.upstream;

import android.net.Uri;
import ie.p;
import ie.u0;
import java.io.IOException;

/* loaded from: classes3.dex */
public final class b implements DataSource {

    /* renamed from: d, reason: collision with root package name */
    public static final b f5566d = new b();

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void close() {
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final long o(p pVar) {
        throw new IOException("PlaceholderDataSource cannot be opened");
    }

    @Override // ie.k
    public final int read(byte[] bArr, int i5, int i6) {
        throw new UnsupportedOperationException();
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final Uri x() {
        return null;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource
    public final void n(u0 u0Var) {
    }
}
