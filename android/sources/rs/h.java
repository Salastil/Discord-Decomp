package rs;

import java.io.IOException;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;
import okio.Buffer;

/* loaded from: classes3.dex */
public final class h extends et.h {

    /* renamed from: e, reason: collision with root package name */
    public final Lambda f17658e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f17659i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    /* JADX WARN: Multi-variable type inference failed */
    public h(et.b delegate, Function1 onException) {
        super(delegate);
        Intrinsics.checkNotNullParameter(delegate, "delegate");
        Intrinsics.checkNotNullParameter(onException, "onException");
        this.f17658e = (Lambda) onException;
    }

    /* JADX WARN: Type inference failed for: r3v2, types: [kotlin.jvm.functions.Function1, kotlin.jvm.internal.Lambda] */
    @Override // et.h, okio.Sink
    public final void H(Buffer source, long j) {
        Intrinsics.checkNotNullParameter(source, "source");
        if (this.f17659i) {
            source.skip(j);
            return;
        }
        try {
            super.H(source, j);
        } catch (IOException e9) {
            this.f17659i = true;
            this.f17658e.invoke(e9);
        }
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [kotlin.jvm.functions.Function1, kotlin.jvm.internal.Lambda] */
    @Override // et.h, okio.Sink, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.f17659i) {
            return;
        }
        try {
            super.close();
        } catch (IOException e9) {
            this.f17659i = true;
            this.f17658e.invoke(e9);
        }
    }

    /* JADX WARN: Type inference failed for: r1v1, types: [kotlin.jvm.functions.Function1, kotlin.jvm.internal.Lambda] */
    @Override // et.h, okio.Sink, java.io.Flushable
    public final void flush() {
        if (this.f17659i) {
            return;
        }
        try {
            super.flush();
        } catch (IOException e9) {
            this.f17659i = true;
            this.f17658e.invoke(e9);
        }
    }
}
