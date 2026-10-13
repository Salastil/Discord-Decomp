package kt;

import ij.e0;
import ij.i;
import ij.j;
import ij.l;
import ij.p0;
import ij.q;
import ij.r;
import ij.s0;
import ij.v;
import java.io.FileInputStream;
import java.io.IOException;

/* loaded from: classes.dex */
public final class e extends r {

    /* renamed from: f, reason: collision with root package name */
    public static final e f13692f;

    /* renamed from: g, reason: collision with root package name */
    public static volatile q f13693g;

    /* renamed from: e, reason: collision with root package name */
    public final e0 f13694e = e0.f10854e;

    static {
        e eVar = new e();
        f13692f = eVar;
        r.h(e.class, eVar);
    }

    public static e i(FileInputStream fileInputStream) {
        r rVar;
        l a = l.a();
        try {
            int read = fileInputStream.read();
            if (read == -1) {
                rVar = null;
            } else {
                i iVar = new i(new ij.a(fileInputStream, j.o(read, fileInputStream), 0));
                r g6 = r.g(f13692f, iVar, a);
                iVar.a(0);
                rVar = g6;
            }
            if (rVar == null || r.d(rVar, true)) {
                return (e) rVar;
            }
            throw new v(new s0().getMessage());
        } catch (v e9) {
            if (e9.f10928d) {
                throw new v(e9.getMessage(), e9);
            }
            throw e9;
        } catch (IOException e10) {
            throw new v(e10.getMessage(), e10);
        }
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
                return new p0(f13692f, "\u0001\u0001\u0000\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u00012", new Object[]{"flags_", d.a});
            case 3:
                return new e();
            case 4:
                return new c(f13692f);
            case 5:
                return f13692f;
            case 6:
                q qVar2 = f13693g;
                if (qVar2 != null) {
                    return qVar2;
                }
                synchronized (e.class) {
                    try {
                        qVar = f13693g;
                        if (qVar == null) {
                            qVar = new q();
                            f13693g = qVar;
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
