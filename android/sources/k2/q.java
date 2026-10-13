package k2;

import java.nio.ByteBuffer;

/* loaded from: classes.dex */
public final class q {
    public int a = 1;

    /* renamed from: b, reason: collision with root package name */
    public final u f13136b;

    /* renamed from: c, reason: collision with root package name */
    public u f13137c;

    /* renamed from: d, reason: collision with root package name */
    public u f13138d;

    /* renamed from: e, reason: collision with root package name */
    public int f13139e;

    /* renamed from: f, reason: collision with root package name */
    public int f13140f;

    public q(u uVar) {
        this.f13136b = uVar;
        this.f13137c = uVar;
    }

    public final void a() {
        this.a = 1;
        this.f13137c = this.f13136b;
        this.f13140f = 0;
    }

    public final boolean b() {
        l2.a b10 = this.f13137c.f13153b.b();
        int a = b10.a(6);
        return !(a == 0 || ((ByteBuffer) b10.f1594v).get(a + b10.f1591d) == 0) || this.f13139e == 65039;
    }
}
