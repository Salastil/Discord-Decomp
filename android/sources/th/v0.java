package th;

import java.util.HashMap;
import java.util.concurrent.locks.ReentrantLock;

/* loaded from: classes3.dex */
public final class v0 {

    /* renamed from: g, reason: collision with root package name */
    public static final a5.m f18598g = new a5.m("ExtractorSessionStoreView", 3);
    public final s a;

    /* renamed from: b, reason: collision with root package name */
    public final p0 f18599b;

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f18600c = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final ReentrantLock f18601d = new ReentrantLock();

    /* renamed from: e, reason: collision with root package name */
    public final uh.f f18602e;

    /* renamed from: f, reason: collision with root package name */
    public final uh.f f18603f;

    public v0(s sVar, uh.f fVar, p0 p0Var, uh.f fVar2) {
        this.a = sVar;
        this.f18602e = fVar;
        this.f18599b = p0Var;
        this.f18603f = fVar2;
    }

    public final s0 a(int i5) {
        Integer valueOf = Integer.valueOf(i5);
        s0 s0Var = (s0) this.f18600c.get(valueOf);
        if (s0Var != null) {
            return s0Var;
        }
        throw new l0(String.format("Could not find session %d while trying to get it", valueOf), i5);
    }

    public final Object b(u0 u0Var) {
        ReentrantLock reentrantLock = this.f18601d;
        try {
            reentrantLock.lock();
            return u0Var.a();
        } finally {
            reentrantLock.unlock();
        }
    }
}
