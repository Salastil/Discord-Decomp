package zp;

import ip.o0;
import java.util.Map;
import yq.y;

/* loaded from: classes3.dex */
public final class b implements jp.b {
    public static final b a = new b();

    @Override // jp.b
    public final hq.c a() {
        ip.f d6 = oq.e.d(this);
        if (d6 != null) {
            if (ar.l.f(d6)) {
                d6 = null;
            }
            if (d6 != null) {
                return oq.e.c(d6);
            }
        }
        return null;
    }

    @Override // jp.b
    public final Map b() {
        throw new IllegalStateException("No methods should be called on this descriptor. Only its presence matters");
    }

    @Override // jp.b
    public final o0 d() {
        throw new IllegalStateException("No methods should be called on this descriptor. Only its presence matters");
    }

    @Override // jp.b
    public final y getType() {
        throw new IllegalStateException("No methods should be called on this descriptor. Only its presence matters");
    }

    public final String toString() {
        return "[EnhancedType]";
    }
}
