package kt;

import ij.o0;
import ij.p0;
import ij.q;
import ij.r;
import io.sentry.android.core.internal.tombstone.j;

/* loaded from: classes.dex */
public final class b extends r {

    /* renamed from: f, reason: collision with root package name */
    public static final b f13689f;

    /* renamed from: g, reason: collision with root package name */
    public static volatile q f13690g;

    /* renamed from: e, reason: collision with root package name */
    public final o0 f13691e = o0.f10910v;

    static {
        b bVar = new b();
        f13689f = bVar;
        r.h(b.class, bVar);
    }

    @Override // ij.r
    public final Object a(int i5) {
        q qVar;
        switch (f0.e.b(i5)) {
            case 0:
                return (byte) 1;
            case 1:
                return null;
            case 2:
                return new p0(f13689f, "\u0001\u0001\u0000\u0000\b\b\u0001\u0000\u0001\u0000\b\u001b", new Object[]{"constrainedValues_", a.class});
            case 3:
                return new b();
            case 4:
                return new j(f13689f);
            case 5:
                return f13689f;
            case 6:
                q qVar2 = f13690g;
                if (qVar2 != null) {
                    return qVar2;
                }
                synchronized (b.class) {
                    try {
                        qVar = f13690g;
                        if (qVar == null) {
                            qVar = new q();
                            f13690g = qVar;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return qVar;
            default:
                throw new UnsupportedOperationException();
        }
    }
}
