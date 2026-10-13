package qa;

import android.util.Log;
import java.io.Closeable;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class i implements o, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public ByteBuffer f16708d;

    /* renamed from: e, reason: collision with root package name */
    public final int f16709e;

    /* renamed from: i, reason: collision with root package name */
    public final long f16710i = System.identityHashCode(this);

    public i(int i5) {
        this.f16708d = ByteBuffer.allocateDirect(i5);
        this.f16709e = i5;
    }

    @Override // qa.o
    public final long c() {
        return this.f16710i;
    }

    @Override // qa.o, java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        this.f16708d = null;
    }

    @Override // qa.o
    public final synchronized byte f(int i5) {
        boolean z5 = true;
        o8.h.e(!isClosed());
        o8.h.a(Boolean.valueOf(i5 >= 0));
        if (i5 >= this.f16709e) {
            z5 = false;
        }
        o8.h.a(Boolean.valueOf(z5));
        this.f16708d.getClass();
        return this.f16708d.get(i5);
    }

    @Override // qa.o
    public final void g(o oVar, int i5) {
        oVar.getClass();
        if (oVar.c() == this.f16710i) {
            Log.w("BufferMemoryChunk", "Copying from BufferMemoryChunk " + Long.toHexString(this.f16710i) + " to BufferMemoryChunk " + Long.toHexString(oVar.c()) + " which are the same ");
            o8.h.a(Boolean.FALSE);
        }
        if (oVar.c() < this.f16710i) {
            synchronized (oVar) {
                synchronized (this) {
                    t(oVar, i5);
                }
            }
        } else {
            synchronized (this) {
                synchronized (oVar) {
                    t(oVar, i5);
                }
            }
        }
    }

    @Override // qa.o
    public final synchronized ByteBuffer i() {
        return this.f16708d;
    }

    @Override // qa.o
    public final synchronized boolean isClosed() {
        return this.f16708d == null;
    }

    @Override // qa.o
    public final synchronized int l(int i5, int i6, int i10, byte[] bArr) {
        int f2;
        o8.h.e(!isClosed());
        this.f16708d.getClass();
        f2 = ta.a.f(i5, i10, this.f16709e);
        ta.a.j(i5, bArr.length, i6, f2, this.f16709e);
        this.f16708d.position(i5);
        this.f16708d.get(bArr, i6, f2);
        return f2;
    }

    @Override // qa.o
    public final synchronized int o(int i5, int i6, int i10, byte[] bArr) {
        int f2;
        o8.h.e(!isClosed());
        this.f16708d.getClass();
        f2 = ta.a.f(i5, i10, this.f16709e);
        ta.a.j(i5, bArr.length, i6, f2, this.f16709e);
        this.f16708d.position(i5);
        this.f16708d.put(bArr, i6, f2);
        return f2;
    }

    @Override // qa.o
    public final long q() {
        throw new UnsupportedOperationException("Cannot get the pointer of a BufferMemoryChunk");
    }

    @Override // qa.o
    public final int r() {
        return this.f16709e;
    }

    public final void t(o oVar, int i5) {
        if (!(oVar instanceof i)) {
            throw new IllegalArgumentException("Cannot copy two incompatible MemoryChunks");
        }
        o8.h.e(!isClosed());
        i iVar = (i) oVar;
        o8.h.e(!iVar.isClosed());
        this.f16708d.getClass();
        ta.a.j(0, iVar.f16709e, 0, i5, this.f16709e);
        this.f16708d.position(0);
        ByteBuffer i6 = iVar.i();
        i6.getClass();
        i6.position(0);
        byte[] bArr = new byte[i5];
        this.f16708d.get(bArr, 0, i5);
        i6.put(bArr, 0, i5);
    }
}
