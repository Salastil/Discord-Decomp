package mc;

import hc.e0;
import java.nio.ByteBuffer;

/* loaded from: classes3.dex */
public class f extends a {
    public final int E;

    /* renamed from: i, reason: collision with root package name */
    public final c f14435i = new c();

    /* renamed from: v, reason: collision with root package name */
    public ByteBuffer f14436v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f14437w;

    /* renamed from: x, reason: collision with root package name */
    public long f14438x;

    /* renamed from: y, reason: collision with root package name */
    public ByteBuffer f14439y;

    static {
        e0.a("goog.exo.decoder");
    }

    public f(int i5) {
        this.E = i5;
    }

    public void f() {
        this.f14426e = 0;
        ByteBuffer byteBuffer = this.f14436v;
        if (byteBuffer != null) {
            byteBuffer.clear();
        }
        ByteBuffer byteBuffer2 = this.f14439y;
        if (byteBuffer2 != null) {
            byteBuffer2.clear();
        }
        this.f14437w = false;
    }

    public final ByteBuffer g(int i5) {
        int i6 = this.E;
        if (i6 == 1) {
            return ByteBuffer.allocate(i5);
        }
        if (i6 == 2) {
            return ByteBuffer.allocateDirect(i5);
        }
        ByteBuffer byteBuffer = this.f14436v;
        throw new e(s4.h.d(byteBuffer == null ? 0 : byteBuffer.capacity(), "Buffer too small (", i5, " < ", ")"));
    }

    public final void h(int i5) {
        ByteBuffer byteBuffer = this.f14436v;
        if (byteBuffer == null) {
            this.f14436v = g(i5);
            return;
        }
        int capacity = byteBuffer.capacity();
        int position = byteBuffer.position();
        int i6 = i5 + position;
        if (capacity >= i6) {
            this.f14436v = byteBuffer;
            return;
        }
        ByteBuffer g6 = g(i6);
        g6.order(byteBuffer.order());
        if (position > 0) {
            byteBuffer.flip();
            g6.put(byteBuffer);
        }
        this.f14436v = g6;
    }

    public final void j() {
        ByteBuffer byteBuffer = this.f14436v;
        if (byteBuffer != null) {
            byteBuffer.flip();
        }
        ByteBuffer byteBuffer2 = this.f14439y;
        if (byteBuffer2 != null) {
            byteBuffer2.flip();
        }
    }
}
