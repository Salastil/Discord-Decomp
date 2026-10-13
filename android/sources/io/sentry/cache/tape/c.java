package io.sentry.cache.tape;

import java.io.ByteArrayOutputStream;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c extends ByteArrayOutputStream {
    public byte[] c() {
        return ((ByteArrayOutputStream) this).buf;
    }

    public byte[] f() {
        byte[] buf = ((ByteArrayOutputStream) this).buf;
        Intrinsics.checkNotNullExpressionValue(buf, "buf");
        return buf;
    }
}
