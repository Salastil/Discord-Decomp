package com.facebook.imagepipeline.memory;

import android.util.Log;
import java.io.Closeable;
import java.nio.ByteBuffer;
import jb.a;
import o8.c;
import o8.h;
import qa.o;

@c
/* loaded from: classes3.dex */
public class NativeMemoryChunk implements o, Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final long f4667d;

    /* renamed from: e, reason: collision with root package name */
    public final int f4668e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f4669i;

    static {
        a.C("imagepipeline");
    }

    public NativeMemoryChunk(int i5) {
        if (!(i5 > 0)) {
            throw new IllegalArgumentException();
        }
        this.f4668e = i5;
        this.f4667d = nativeAllocate(i5);
        this.f4669i = false;
    }

    @c
    private static native long nativeAllocate(int i5);

    @c
    private static native void nativeCopyFromByteArray(long j, byte[] bArr, int i5, int i6);

    @c
    private static native void nativeCopyToByteArray(long j, byte[] bArr, int i5, int i6);

    @c
    private static native void nativeFree(long j);

    @c
    private static native void nativeMemcpy(long j, long j5, int i5);

    @c
    private static native byte nativeReadByte(long j);

    @Override // qa.o
    public final long c() {
        return this.f4667d;
    }

    @Override // qa.o, java.io.Closeable, java.lang.AutoCloseable
    public final synchronized void close() {
        if (!this.f4669i) {
            this.f4669i = true;
            nativeFree(this.f4667d);
        }
    }

    @Override // qa.o
    public final synchronized byte f(int i5) {
        boolean z5 = true;
        h.e(!isClosed());
        if (!(i5 >= 0)) {
            throw new IllegalArgumentException();
        }
        if (i5 >= this.f4668e) {
            z5 = false;
        }
        if (!z5) {
            throw new IllegalArgumentException();
        }
        return nativeReadByte(this.f4667d + i5);
    }

    public final void finalize() {
        if (isClosed()) {
            return;
        }
        Log.w("NativeMemoryChunk", "finalize: Chunk " + Integer.toHexString(System.identityHashCode(this)) + " still active. ");
        try {
            close();
        } finally {
            super.finalize();
        }
    }

    @Override // qa.o
    public final void g(o oVar, int i5) {
        oVar.getClass();
        if (oVar.c() == this.f4667d) {
            Log.w("NativeMemoryChunk", "Copying from NativeMemoryChunk " + Integer.toHexString(System.identityHashCode(this)) + " to NativeMemoryChunk " + Integer.toHexString(System.identityHashCode(oVar)) + " which share the same address " + Long.toHexString(this.f4667d));
            h.a(Boolean.FALSE);
        }
        if (oVar.c() < this.f4667d) {
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
        return null;
    }

    @Override // qa.o
    public final synchronized boolean isClosed() {
        return this.f4669i;
    }

    @Override // qa.o
    public final synchronized int l(int i5, int i6, int i10, byte[] bArr) {
        int f2;
        h.e(!isClosed());
        f2 = ta.a.f(i5, i10, this.f4668e);
        ta.a.j(i5, bArr.length, i6, f2, this.f4668e);
        nativeCopyToByteArray(this.f4667d + i5, bArr, i6, f2);
        return f2;
    }

    @Override // qa.o
    public final synchronized int o(int i5, int i6, int i10, byte[] bArr) {
        int f2;
        h.e(!isClosed());
        f2 = ta.a.f(i5, i10, this.f4668e);
        ta.a.j(i5, bArr.length, i6, f2, this.f4668e);
        nativeCopyFromByteArray(this.f4667d + i5, bArr, i6, f2);
        return f2;
    }

    @Override // qa.o
    public final long q() {
        return this.f4667d;
    }

    @Override // qa.o
    public final int r() {
        return this.f4668e;
    }

    public final void t(o oVar, int i5) {
        if (!(oVar instanceof NativeMemoryChunk)) {
            throw new IllegalArgumentException("Cannot copy two incompatible MemoryChunks");
        }
        h.e(!isClosed());
        NativeMemoryChunk nativeMemoryChunk = (NativeMemoryChunk) oVar;
        h.e(!nativeMemoryChunk.isClosed());
        ta.a.j(0, nativeMemoryChunk.f4668e, 0, i5, this.f4668e);
        long j = 0;
        nativeMemcpy(nativeMemoryChunk.f4667d + j, this.f4667d + j, i5);
    }

    public NativeMemoryChunk() {
        this.f4668e = 0;
        this.f4667d = 0L;
        this.f4669i = true;
    }
}
