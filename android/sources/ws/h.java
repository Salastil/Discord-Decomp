package ws;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class h extends i {
    @Override // ws.i
    public final void b(w stream) {
        Intrinsics.checkNotNullParameter(stream, "stream");
        stream.c(b.REFUSED_STREAM, null);
    }
}
