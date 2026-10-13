package jc;

import java.nio.ByteBuffer;
import java.nio.ByteOrder;

/* loaded from: classes3.dex */
public abstract class z implements n {

    /* renamed from: b, reason: collision with root package name */
    public l f12694b;

    /* renamed from: c, reason: collision with root package name */
    public l f12695c;

    /* renamed from: d, reason: collision with root package name */
    public l f12696d;

    /* renamed from: e, reason: collision with root package name */
    public l f12697e;

    /* renamed from: f, reason: collision with root package name */
    public ByteBuffer f12698f;

    /* renamed from: g, reason: collision with root package name */
    public ByteBuffer f12699g;

    /* renamed from: h, reason: collision with root package name */
    public boolean f12700h;

    public z() {
        ByteBuffer byteBuffer = n.a;
        this.f12698f = byteBuffer;
        this.f12699g = byteBuffer;
        l lVar = l.f12572e;
        this.f12696d = lVar;
        this.f12697e = lVar;
        this.f12694b = lVar;
        this.f12695c = lVar;
    }

    public abstract l a(l lVar);

    @Override // jc.n
    public boolean c() {
        return this.f12697e != l.f12572e;
    }

    @Override // jc.n
    public ByteBuffer d() {
        ByteBuffer byteBuffer = this.f12699g;
        this.f12699g = n.a;
        return byteBuffer;
    }

    @Override // jc.n
    public final void f() {
        this.f12700h = true;
        i();
    }

    @Override // jc.n
    public final void flush() {
        this.f12699g = n.a;
        this.f12700h = false;
        this.f12694b = this.f12696d;
        this.f12695c = this.f12697e;
        b();
    }

    @Override // jc.n
    public boolean g() {
        return this.f12700h && this.f12699g == n.a;
    }

    @Override // jc.n
    public final l h(l lVar) {
        this.f12696d = lVar;
        this.f12697e = a(lVar);
        return c() ? this.f12697e : l.f12572e;
    }

    public final ByteBuffer k(int i5) {
        if (this.f12698f.capacity() < i5) {
            this.f12698f = ByteBuffer.allocateDirect(i5).order(ByteOrder.nativeOrder());
        } else {
            this.f12698f.clear();
        }
        ByteBuffer byteBuffer = this.f12698f;
        this.f12699g = byteBuffer;
        return byteBuffer;
    }

    @Override // jc.n
    public final void reset() {
        flush();
        this.f12698f = n.a;
        l lVar = l.f12572e;
        this.f12696d = lVar;
        this.f12697e = lVar;
        this.f12694b = lVar;
        this.f12695c = lVar;
        j();
    }

    public void b() {
    }

    public void i() {
    }

    public void j() {
    }
}
