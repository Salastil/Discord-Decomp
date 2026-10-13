package qa;

import android.os.SharedMemory;
import android.system.ErrnoException;
import android.util.Log;
import java.io.Closeable;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public final class a implements o, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public SharedMemory f16686d;

    /* renamed from: e, reason: collision with root package name */
    public ByteBuffer f16687e;

    /* renamed from: i, reason: collision with root package name */
    public final long f16688i;

    public a(int i5) {
        o8.h.a(Boolean.valueOf(i5 > 0));
        try {
            SharedMemory create = SharedMemory.create("AshmemMemoryChunk", i5);
            this.f16686d = create;
            this.f16687e = create.mapReadWrite();
            this.f16688i = System.identityHashCode(this);
        } catch (ErrnoException e9) {
            throw new RuntimeException("Fail to create AshmemMemory", e9);
        }
    }

    @Override // qa.o
    public final long c() {
        return this.f16688i;
    }

    @Override // qa.o, java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        try {
            if (!isClosed()) {
                SharedMemory sharedMemory = this.f16686d;
                if (sharedMemory != null) {
                    sharedMemory.close();
                }
                ByteBuffer byteBuffer = this.f16687e;
                if (byteBuffer != null) {
                    SharedMemory.unmap(byteBuffer);
                }
                this.f16687e = null;
                this.f16686d = null;
            }
        } catch (Throwable th2) {
            throw th2;
        }
    }

    @Override // qa.o
    public final synchronized byte f(int i5) {
        boolean z5 = true;
        o8.h.e(!isClosed());
        o8.h.a(Boolean.valueOf(i5 >= 0));
        if (i5 >= r()) {
            z5 = false;
        }
        o8.h.a(Boolean.valueOf(z5));
        this.f16687e.getClass();
        return this.f16687e.get(i5);
    }

    @Override // qa.o
    public final void g(o oVar, int i5) {
        oVar.getClass();
        if (oVar.c() == this.f16688i) {
            Log.w("AshmemMemoryChunk", "Copying from AshmemMemoryChunk " + Long.toHexString(this.f16688i) + " to AshmemMemoryChunk " + Long.toHexString(oVar.c()) + " which are the same ");
            o8.h.a(Boolean.FALSE);
        }
        if (oVar.c() < this.f16688i) {
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
    public final ByteBuffer i() {
        return this.f16687e;
    }

    @Override // qa.o
    public final synchronized boolean isClosed() {
        boolean z5;
        if (this.f16687e != null) {
            z5 = this.f16686d == null;
        }
        return z5;
    }

    @Override // qa.o
    public final synchronized int l(int i5, int i6, int i10, byte[] bArr) {
        int f2;
        this.f16687e.getClass();
        f2 = ta.a.f(i5, i10, r());
        ta.a.j(i5, bArr.length, i6, f2, r());
        this.f16687e.position(i5);
        this.f16687e.get(bArr, i6, f2);
        return f2;
    }

    @Override // qa.o
    public final synchronized int o(int i5, int i6, int i10, byte[] bArr) {
        int f2;
        this.f16687e.getClass();
        f2 = ta.a.f(i5, i10, r());
        ta.a.j(i5, bArr.length, i6, f2, r());
        this.f16687e.position(i5);
        this.f16687e.put(bArr, i6, f2);
        return f2;
    }

    @Override // qa.o
    public final long q() {
        throw new UnsupportedOperationException("Cannot get the pointer of an  AshmemMemoryChunk");
    }

    @Override // qa.o
    public final int r() {
        this.f16686d.getClass();
        return this.f16686d.getSize();
    }

    public final void t(o oVar, int i5) {
        if (!(oVar instanceof a)) {
            throw new IllegalArgumentException("Cannot copy two incompatible MemoryChunks");
        }
        o8.h.e(!isClosed());
        a aVar = (a) oVar;
        o8.h.e(!aVar.isClosed());
        this.f16687e.getClass();
        aVar.f16687e.getClass();
        ta.a.j(0, aVar.r(), 0, i5, r());
        this.f16687e.position(0);
        aVar.f16687e.position(0);
        byte[] bArr = new byte[i5];
        this.f16687e.get(bArr, 0, i5);
        aVar.f16687e.put(bArr, 0, i5);
    }
}
