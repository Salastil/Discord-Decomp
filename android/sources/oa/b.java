package oa;

import com.facebook.common.references.CloseableReference;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class b extends f {

    /* renamed from: v, reason: collision with root package name */
    public e4.i f15803v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f15804w;

    @Override // oa.c, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        synchronized (this) {
            try {
                e4.i iVar = this.f15803v;
                if (iVar == null) {
                    return;
                }
                this.f15803v = null;
                synchronized (iVar) {
                    CloseableReference.l((CloseableReference) iVar.f7954i);
                    iVar.f7954i = null;
                    CloseableReference.o((ArrayList) iVar.f7955v);
                    iVar.f7955v = null;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // oa.c, com.facebook.imagepipeline.image.ImageInfo
    public final synchronized int getHeight() {
        e4.i iVar;
        iVar = this.f15803v;
        return iVar == null ? 0 : ((ba.b) iVar.f7952d).getHeight();
    }

    @Override // oa.c, com.facebook.imagepipeline.image.ImageInfo
    public final synchronized int getWidth() {
        e4.i iVar;
        iVar = this.f15803v;
        return iVar == null ? 0 : ((ba.b) iVar.f7952d).getWidth();
    }

    @Override // oa.a, oa.c
    public final boolean h0() {
        return this.f15804w;
    }

    @Override // oa.c
    public final synchronized boolean isClosed() {
        return this.f15803v == null;
    }

    @Override // oa.c
    public final synchronized int j() {
        e4.i iVar;
        iVar = this.f15803v;
        return iVar == null ? 0 : ((ba.b) iVar.f7952d).j();
    }
}
