package ij;

/* loaded from: classes3.dex */
public final class u0 {
    public static t0 a(Object obj) {
        r rVar = (r) obj;
        t0 t0Var = rVar.f10920c;
        if (t0Var != t0.f10924e) {
            return t0Var;
        }
        t0 t0Var2 = new t0(0, new int[8], new Object[8], true);
        rVar.f10920c = t0Var2;
        return t0Var2;
    }

    public static boolean b(int i5, androidx.datastore.preferences.protobuf.h hVar, Object obj) {
        j jVar = (j) hVar.f1760e;
        int i6 = hVar.f1757b;
        int i10 = i6 >>> 3;
        int i11 = i6 & 7;
        if (i11 == 0) {
            hVar.W(0);
            ((t0) obj).b(i10 << 3, Long.valueOf(jVar.n()));
            return true;
        }
        if (i11 == 1) {
            hVar.W(1);
            ((t0) obj).b((i10 << 3) | 1, Long.valueOf(jVar.k()));
            return true;
        }
        if (i11 == 2) {
            ((t0) obj).b((i10 << 3) | 2, hVar.i());
            return true;
        }
        if (i11 != 3) {
            if (i11 == 4) {
                return false;
            }
            if (i11 != 5) {
                throw v.b();
            }
            hVar.W(5);
            ((t0) obj).b(5 | (i10 << 3), Integer.valueOf(jVar.j()));
            return true;
        }
        t0 t0Var = new t0(0, new int[8], new Object[8], true);
        int i12 = i10 << 3;
        int i13 = i12 | 4;
        int i14 = i5 + 1;
        if (i14 >= 100) {
            throw new v("Protocol message had too many levels of nesting.  May be malicious.  Use setRecursionLimit() to increase the recursion depth limit.");
        }
        while (hVar.a() != Integer.MAX_VALUE && b(i14, hVar, t0Var)) {
        }
        if (i13 != hVar.f1757b) {
            throw new v("Protocol message end-group tag did not match expected tag.");
        }
        if (t0Var.f10927d) {
            t0Var.f10927d = false;
        }
        ((t0) obj).b(i12 | 3, t0Var);
        return true;
    }
}
