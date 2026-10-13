package io.sentry.android.core.internal.tombstone;

import ij.o0;
import ij.p0;
import ij.q;
import ij.r;

/* loaded from: classes3.dex */
public final class l extends r {

    /* renamed from: g, reason: collision with root package name */
    public static final l f11203g;

    /* renamed from: h, reason: collision with root package name */
    public static volatile q f11204h;

    /* renamed from: e, reason: collision with root package name */
    public final o0 f11205e;

    /* renamed from: f, reason: collision with root package name */
    public final o0 f11206f;

    static {
        l lVar = new l();
        f11203g = lVar;
        r.h(l.class, lVar);
    }

    public l() {
        o0 o0Var = o0.f10910v;
        this.f11205e = o0Var;
        this.f11206f = o0Var;
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
                return new p0(f11203g, "\u0000\t\u0000\u0000\u0001\t\t\u0000\u0005\u0000\u0001\u0004\u0002Ȉ\u0003\u001b\u0004\u001b\u0005\u001b\u0006\u0002\u0007Ț\b\u0002\tȚ", new Object[]{"id_", "name_", "registers_", i.class, "currentBacktrace_", b.class, "memoryDump_", g.class, "taggedAddrCtrl_", "backtraceNote_", "pacEnabledKeys_", "unreadableElfFiles_"});
            case 3:
                return new l();
            case 4:
                return new j(f11203g);
            case 5:
                return f11203g;
            case 6:
                q qVar2 = f11204h;
                if (qVar2 != null) {
                    return qVar2;
                }
                synchronized (l.class) {
                    try {
                        qVar = f11204h;
                        if (qVar == null) {
                            qVar = new q();
                            f11204h = qVar;
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
