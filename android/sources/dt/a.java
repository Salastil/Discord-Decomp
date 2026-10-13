package dt;

import et.m;
import et.y;
import java.io.Closeable;
import java.util.zip.Deflater;
import java.util.zip.Inflater;
import kotlin.jvm.internal.Intrinsics;
import okio.Buffer;

/* loaded from: classes3.dex */
public final class a implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7761d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f7762e;

    /* renamed from: i, reason: collision with root package name */
    public final Buffer f7763i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f7764v;

    /* renamed from: w, reason: collision with root package name */
    public final Closeable f7765w;

    public a(boolean z5, int i5) {
        this.f7761d = i5;
        switch (i5) {
            case 1:
                this.f7762e = z5;
                Buffer source = new Buffer();
                this.f7763i = source;
                Inflater inflater = new Inflater(true);
                this.f7764v = inflater;
                Intrinsics.checkNotNullParameter(source, "source");
                Intrinsics.checkNotNullParameter(inflater, "inflater");
                this.f7765w = new m(y.d(source), inflater);
                break;
            default:
                this.f7762e = z5;
                Buffer buffer = new Buffer();
                this.f7763i = buffer;
                Deflater deflater = new Deflater(-1, true);
                this.f7764v = deflater;
                this.f7765w = new et.g(buffer, deflater);
                break;
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        switch (this.f7761d) {
            case 0:
                ((et.g) this.f7765w).close();
                break;
            default:
                ((m) this.f7765w).close();
                break;
        }
    }
}
