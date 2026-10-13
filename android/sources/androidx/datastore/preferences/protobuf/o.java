package androidx.datastore.preferences.protobuf;

import java.util.Collections;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes.dex */
public final class o {

    /* renamed from: c, reason: collision with root package name */
    public static final /* synthetic */ int f1797c = 0;
    public final y0 a = new y0(16);

    /* renamed from: b, reason: collision with root package name */
    public boolean f1798b;

    static {
        new o(0);
    }

    public o() {
    }

    public static void b(j jVar, v1 v1Var, int i5, Object obj) {
        if (v1Var == v1.f1822v) {
            jVar.R(i5, 3);
            ((a) obj).c(jVar);
            jVar.R(i5, 4);
        }
        jVar.R(i5, v1Var.f1826e);
        switch (v1Var.ordinal()) {
            case 0:
                jVar.L(Double.doubleToRawLongBits(((Double) obj).doubleValue()));
                break;
            case 1:
                jVar.J(Float.floatToRawIntBits(((Float) obj).floatValue()));
                break;
            case 2:
                jVar.V(((Long) obj).longValue());
                break;
            case 3:
                jVar.V(((Long) obj).longValue());
                break;
            case 4:
                jVar.N(((Integer) obj).intValue());
                break;
            case 5:
                jVar.L(((Long) obj).longValue());
                break;
            case 6:
                jVar.J(((Integer) obj).intValue());
                break;
            case 7:
                jVar.D(((Boolean) obj).booleanValue() ? (byte) 1 : (byte) 0);
                break;
            case 8:
                if (!(obj instanceof f)) {
                    jVar.Q((String) obj);
                    break;
                } else {
                    jVar.H((f) obj);
                    break;
                }
            case 9:
                ((a) obj).c(jVar);
                break;
            case 10:
                a aVar = (a) obj;
                jVar.getClass();
                jVar.T(aVar.a());
                aVar.c(jVar);
                break;
            case 11:
                if (!(obj instanceof f)) {
                    byte[] bArr = (byte[]) obj;
                    int length = bArr.length;
                    jVar.T(length);
                    jVar.E(bArr, 0, length);
                    break;
                } else {
                    jVar.H((f) obj);
                    break;
                }
            case 12:
                jVar.T(((Integer) obj).intValue());
                break;
            case 13:
                jVar.N(((Integer) obj).intValue());
                break;
            case 14:
                jVar.J(((Integer) obj).intValue());
                break;
            case 15:
                jVar.L(((Long) obj).longValue());
                break;
            case 16:
                int intValue = ((Integer) obj).intValue();
                jVar.T((intValue >> 31) ^ (intValue << 1));
                break;
            case 17:
                long longValue = ((Long) obj).longValue();
                jVar.V((longValue >> 63) ^ (longValue << 1));
                break;
        }
    }

    public final void a() {
        if (this.f1798b) {
            return;
        }
        y0 y0Var = this.a;
        if (!y0Var.f1848v) {
            if (y0Var.f1846e.size() > 0) {
                y0Var.c(0).getKey().getClass();
                throw new ClassCastException();
            }
            Iterator it = y0Var.d().iterator();
            if (it.hasNext()) {
                ((Map.Entry) it.next()).getKey().getClass();
                throw new ClassCastException();
            }
        }
        if (!y0Var.f1848v) {
            y0Var.f1847i = y0Var.f1847i.isEmpty() ? Collections.EMPTY_MAP : Collections.unmodifiableMap(y0Var.f1847i);
            y0Var.f1850x = y0Var.f1850x.isEmpty() ? Collections.EMPTY_MAP : Collections.unmodifiableMap(y0Var.f1850x);
            y0Var.f1848v = true;
        }
        this.f1798b = true;
    }

    public final Object clone() {
        o oVar = new o();
        y0 y0Var = this.a;
        if (y0Var.f1846e.size() > 0) {
            Map.Entry c6 = y0Var.c(0);
            if (c6.getKey() != null) {
                throw new ClassCastException();
            }
            c6.getValue();
            throw null;
        }
        Iterator it = y0Var.d().iterator();
        if (!it.hasNext()) {
            return oVar;
        }
        Map.Entry entry = (Map.Entry) it.next();
        if (entry.getKey() != null) {
            throw new ClassCastException();
        }
        entry.getValue();
        throw null;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof o) {
            return this.a.equals(((o) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public o(int i5) {
        a();
        a();
    }
}
