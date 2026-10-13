package qa;

import com.facebook.common.references.CloseableReference;
import java.io.Closeable;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class q implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final int f16711d;

    /* renamed from: e, reason: collision with root package name */
    public CloseableReference f16712e;

    public q(s8.b bVar, int i5) {
        bVar.getClass();
        if (!(i5 >= 0 && i5 <= ((o) bVar.q()).r())) {
            throw new IllegalArgumentException();
        }
        this.f16712e = bVar.clone();
        this.f16711d = i5;
    }

    public final synchronized void c() {
        synchronized (this) {
        }
        if (!CloseableReference.t(this.f16712e)) {
            throw new ai.k("Invalid bytebuf. Already closed");
        }
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        CloseableReference.l(this.f16712e);
        this.f16712e = null;
    }

    public final synchronized ByteBuffer f() {
        this.f16712e.getClass();
        return ((o) this.f16712e.q()).i();
    }

    public final synchronized long g() {
        c();
        this.f16712e.getClass();
        return ((o) this.f16712e.q()).q();
    }

    public final synchronized byte i(int i5) {
        c();
        if (!(i5 >= 0)) {
            throw new IllegalArgumentException();
        }
        if (!(i5 < this.f16711d)) {
            throw new IllegalArgumentException();
        }
        this.f16712e.getClass();
        return ((o) this.f16712e.q()).f(i5);
    }

    public final synchronized void l(int i5, int i6, int i10, byte[] bArr) {
        c();
        if (!(i5 + i10 <= this.f16711d)) {
            throw new IllegalArgumentException();
        }
        this.f16712e.getClass();
        ((o) this.f16712e.q()).l(i5, i6, i10, bArr);
    }

    public final synchronized int o() {
        c();
        return this.f16711d;
    }
}
