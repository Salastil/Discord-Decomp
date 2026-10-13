package ii;

import java.security.AccessController;
import java.security.PrivilegedActionException;
import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public final class k extends com.facebook.imagepipeline.nativecode.b {
    public static final long E;
    public static final long F;

    /* renamed from: v, reason: collision with root package name */
    public static final Unsafe f10824v;

    /* renamed from: w, reason: collision with root package name */
    public static final long f10825w;

    /* renamed from: x, reason: collision with root package name */
    public static final long f10826x;

    /* renamed from: y, reason: collision with root package name */
    public static final long f10827y;

    static {
        Unsafe unsafe;
        try {
            try {
                unsafe = Unsafe.getUnsafe();
            } catch (SecurityException unused) {
                unsafe = (Unsafe) AccessController.doPrivileged(new j());
            }
            try {
                f10826x = unsafe.objectFieldOffset(m.class.getDeclaredField("i"));
                f10825w = unsafe.objectFieldOffset(m.class.getDeclaredField("e"));
                f10827y = unsafe.objectFieldOffset(m.class.getDeclaredField("d"));
                E = unsafe.objectFieldOffset(l.class.getDeclaredField("a"));
                F = unsafe.objectFieldOffset(l.class.getDeclaredField("b"));
                f10824v = unsafe;
            } catch (Exception e9) {
                Object obj = ei.k.a;
                if (!(e9 instanceof RuntimeException)) {
                    throw new RuntimeException(e9);
                }
                throw ((RuntimeException) e9);
            }
        } catch (PrivilegedActionException e10) {
            throw new RuntimeException("Could not initialize intrinsics", e10.getCause());
        }
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final void C(l lVar, l lVar2) {
        f10824v.putObject(lVar, F, lVar2);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final void D(l lVar, Thread thread) {
        f10824v.putObject(lVar, E, thread);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean d(m mVar, c cVar, c cVar2) {
        return h.a(f10824v, mVar, f10825w, cVar, cVar2);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean e(m mVar, Object obj, Object obj2) {
        return i.a(f10824v, mVar, f10827y, obj, obj2);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final boolean f(m mVar, l lVar, l lVar2) {
        return g.a(f10824v, mVar, f10826x, lVar, lVar2);
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final c n(m mVar) {
        c cVar;
        c cVar2 = c.f10817d;
        do {
            cVar = mVar.f10835e;
            if (cVar2 == cVar) {
                break;
            }
        } while (!d(mVar, cVar, cVar2));
        return cVar;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final l o(m mVar) {
        l lVar;
        l lVar2 = l.f10828c;
        do {
            lVar = mVar.f10836i;
            if (lVar2 == lVar) {
                break;
            }
        } while (!f(mVar, lVar, lVar2));
        return lVar;
    }
}
