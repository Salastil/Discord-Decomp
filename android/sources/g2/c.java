package g2;

import ai.k;
import androidx.datastore.preferences.protobuf.h;
import androidx.datastore.preferences.protobuf.i0;
import androidx.datastore.preferences.protobuf.l;
import androidx.datastore.preferences.protobuf.r;
import androidx.datastore.preferences.protobuf.r0;
import androidx.datastore.preferences.protobuf.s;
import androidx.datastore.preferences.protobuf.t;
import androidx.datastore.preferences.protobuf.t0;
import androidx.datastore.preferences.protobuf.v0;
import androidx.datastore.preferences.protobuf.w0;
import androidx.datastore.preferences.protobuf.x;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.Collections;
import java.util.Map;

/* loaded from: classes.dex */
public final class c extends t {
    private static final c DEFAULT_INSTANCE;
    private static volatile r0 PARSER = null;
    public static final int PREFERENCES_FIELD_NUMBER = 1;
    private i0 preferences_ = i0.f1762e;

    static {
        c cVar = new c();
        DEFAULT_INSTANCE = cVar;
        t.h(c.class, cVar);
    }

    public static i0 i(c cVar) {
        i0 i0Var = cVar.preferences_;
        if (!i0Var.f1763d) {
            cVar.preferences_ = i0Var.b();
        }
        return cVar.preferences_;
    }

    public static a k() {
        return (a) ((r) DEFAULT_INSTANCE.d(5));
    }

    public static c l(FileInputStream fileInputStream) {
        c cVar = DEFAULT_INSTANCE;
        androidx.datastore.preferences.protobuf.g gVar = new androidx.datastore.preferences.protobuf.g(fileInputStream);
        l a = l.a();
        t tVar = (t) cVar.d(4);
        try {
            t0 t0Var = t0.f1812c;
            t0Var.getClass();
            w0 a10 = t0Var.a(tVar.getClass());
            h hVar = gVar.f1746b;
            if (hVar == null) {
                hVar = new h(gVar);
            }
            a10.i(tVar, hVar, a);
            a10.a(tVar);
            if (tVar.g()) {
                return (c) tVar;
            }
            throw new x(new k().getMessage());
        } catch (IOException e9) {
            if (e9.getCause() instanceof x) {
                throw ((x) e9.getCause());
            }
            throw new x(e9.getMessage());
        } catch (RuntimeException e10) {
            if (e10.getCause() instanceof x) {
                throw ((x) e10.getCause());
            }
            throw e10;
        }
    }

    @Override // androidx.datastore.preferences.protobuf.t
    public final Object d(int i5) {
        r0 r0Var;
        switch (f0.e.b(i5)) {
            case 0:
                return (byte) 1;
            case 1:
                return null;
            case 2:
                return new v0(DEFAULT_INSTANCE, "\u0001\u0001\u0000\u0000\u0001\u0001\u0001\u0001\u0000\u0000\u00012", new Object[]{"preferences_", b.a});
            case 3:
                return new c();
            case 4:
                return new a(DEFAULT_INSTANCE);
            case 5:
                return DEFAULT_INSTANCE;
            case 6:
                r0 r0Var2 = PARSER;
                if (r0Var2 != null) {
                    return r0Var2;
                }
                synchronized (c.class) {
                    try {
                        r0Var = PARSER;
                        if (r0Var == null) {
                            r0Var = new s();
                            PARSER = r0Var;
                        }
                    } catch (Throwable th2) {
                        throw th2;
                    }
                }
                return r0Var;
            default:
                throw new UnsupportedOperationException();
        }
    }

    public final Map j() {
        return Collections.unmodifiableMap(this.preferences_);
    }
}
