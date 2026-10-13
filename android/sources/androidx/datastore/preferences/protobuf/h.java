package androidx.datastore.preferences.protobuf;

import java.nio.charset.Charset;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes.dex */
public final class h {

    /* renamed from: b, reason: collision with root package name */
    public int f1757b;

    /* renamed from: c, reason: collision with root package name */
    public int f1758c;

    /* renamed from: e, reason: collision with root package name */
    public final Object f1760e;
    public final /* synthetic */ int a = 0;

    /* renamed from: d, reason: collision with root package name */
    public int f1759d = 0;

    public h(ij.j jVar) {
        Charset charset = ij.t.a;
        this.f1760e = jVar;
        jVar.f10877b = this;
    }

    public final void A(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Integer.valueOf(gVar.l()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Integer.valueOf(gVar.l()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Integer.valueOf(jVar.m()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Integer.valueOf(jVar.m()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public long B() {
        X(0);
        return ((g) this.f1760e).m();
    }

    public final void C(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Long.valueOf(gVar.m()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Long.valueOf(gVar.m()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Long.valueOf(jVar.n()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Long.valueOf(jVar.n()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public Object D(w0 w0Var, l lVar) {
        g gVar = (g) this.f1760e;
        int A = gVar.A();
        if (gVar.a >= 100) {
            throw new x("Protocol message had too many levels of nesting.  May be malicious.  Use CodedInputStream.setRecursionLimit() to increase the depth limit.");
        }
        int e9 = gVar.e(A);
        Object c6 = w0Var.c();
        gVar.a++;
        w0Var.i(c6, this, lVar);
        w0Var.a(c6);
        gVar.a(0);
        gVar.a--;
        gVar.d(e9);
        return c6;
    }

    public Object E(w0 w0Var, l lVar) {
        X(2);
        return D(w0Var, lVar);
    }

    public int F() {
        X(5);
        return ((g) this.f1760e).v();
    }

    public final void G(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 2) {
                    int A = gVar.A();
                    if ((A & 3) != 0) {
                        throw x.e();
                    }
                    int b10 = gVar.b() + A;
                    do {
                        list.add(Integer.valueOf(gVar.v()));
                    } while (gVar.b() < b10);
                    return;
                }
                if (i5 != 5) {
                    throw x.b();
                }
                do {
                    list.add(Integer.valueOf(gVar.v()));
                    if (gVar.c()) {
                        return;
                    } else {
                        z5 = gVar.z();
                    }
                } while (z5 == this.f1757b);
                this.f1759d = z5;
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 2) {
                    int w5 = jVar.w();
                    if ((w5 & 3) != 0) {
                        throw new ij.v("Failed to parse the message.");
                    }
                    int b11 = jVar.b() + w5;
                    do {
                        list.add(Integer.valueOf(jVar.p()));
                    } while (jVar.b() < b11);
                    return;
                }
                if (i6 != 5) {
                    throw ij.v.b();
                }
                do {
                    list.add(Integer.valueOf(jVar.p()));
                    if (jVar.c()) {
                        return;
                    } else {
                        v5 = jVar.v();
                    }
                } while (v5 == this.f1757b);
                this.f1759d = v5;
                return;
        }
    }

    public long H() {
        X(1);
        return ((g) this.f1760e).w();
    }

    public final void I(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 1) {
                    do {
                        list.add(Long.valueOf(gVar.w()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int A = gVar.A();
                if ((A & 7) != 0) {
                    throw x.e();
                }
                int b10 = gVar.b() + A;
                do {
                    list.add(Long.valueOf(gVar.w()));
                } while (gVar.b() < b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 1) {
                    do {
                        list.add(Long.valueOf(jVar.q()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int w5 = jVar.w();
                if ((w5 & 7) != 0) {
                    throw new ij.v("Failed to parse the message.");
                }
                int b11 = jVar.b() + w5;
                do {
                    list.add(Long.valueOf(jVar.q()));
                } while (jVar.b() < b11);
                return;
        }
    }

    public int J() {
        X(0);
        return ((g) this.f1760e).x();
    }

    public final void K(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Integer.valueOf(gVar.x()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Integer.valueOf(gVar.x()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Integer.valueOf(jVar.r()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Integer.valueOf(jVar.r()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public long L() {
        X(0);
        return ((g) this.f1760e).y();
    }

    public final void M(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Long.valueOf(gVar.y()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Long.valueOf(gVar.y()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Long.valueOf(jVar.s()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Long.valueOf(jVar.s()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public String N() {
        X(2);
        g gVar = (g) this.f1760e;
        byte[] bArr = gVar.f1748d;
        int s2 = gVar.s();
        if (s2 > 0) {
            int i5 = gVar.f1749e;
            int i6 = gVar.f1751g;
            if (s2 <= i5 - i6) {
                String str = new String(bArr, i6, s2, v.a);
                gVar.f1751g += s2;
                return str;
            }
        }
        if (s2 == 0) {
            return "";
        }
        if (s2 > gVar.f1749e) {
            return new String(gVar.n(s2), v.a);
        }
        gVar.D(s2);
        String str2 = new String(bArr, gVar.f1751g, s2, v.a);
        gVar.f1751g += s2;
        return str2;
    }

    public final void O(List list, boolean z5) {
        int z6;
        int z7;
        String t5;
        int v5;
        int v6;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                if ((this.f1757b & 7) != 2) {
                    throw x.b();
                }
                if (!(list instanceof a0) || z5) {
                    do {
                        list.add(z5 ? P() : N());
                        if (gVar.c()) {
                            return;
                        } else {
                            z6 = gVar.z();
                        }
                    } while (z6 == this.f1757b);
                    this.f1759d = z6;
                    return;
                }
                a0 a0Var = (a0) list;
                do {
                    a0Var.q(h());
                    if (gVar.c()) {
                        return;
                    } else {
                        z7 = gVar.z();
                    }
                } while (z7 == this.f1757b);
                this.f1759d = z7;
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                if ((this.f1757b & 7) != 2) {
                    throw ij.v.b();
                }
                if ((list instanceof ij.x) && !z5) {
                    ij.x xVar = (ij.x) list;
                    do {
                        xVar.C(i());
                        if (jVar.c()) {
                            return;
                        } else {
                            v6 = jVar.v();
                        }
                    } while (v6 == this.f1757b);
                    this.f1759d = v6;
                    return;
                }
                do {
                    if (z5) {
                        W(2);
                        t5 = jVar.u();
                    } else {
                        W(2);
                        t5 = jVar.t();
                    }
                    list.add(t5);
                    if (jVar.c()) {
                        return;
                    } else {
                        v5 = jVar.v();
                    }
                } while (v5 == this.f1757b);
                this.f1759d = v5;
                return;
        }
    }

    public String P() {
        X(2);
        g gVar = (g) this.f1760e;
        byte[] bArr = gVar.f1748d;
        int s2 = gVar.s();
        int i5 = gVar.f1751g;
        int i6 = gVar.f1749e;
        if (s2 <= i6 - i5 && s2 > 0) {
            gVar.f1751g = i5 + s2;
        } else {
            if (s2 == 0) {
                return "";
            }
            i5 = 0;
            if (s2 <= i6) {
                gVar.D(s2);
                gVar.f1751g = s2;
            } else {
                bArr = gVar.n(s2);
            }
        }
        return q1.a.e(bArr, i5, s2);
    }

    public int Q() {
        X(0);
        return ((g) this.f1760e).A();
    }

    public final void R(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Integer.valueOf(gVar.A()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Integer.valueOf(gVar.A()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Integer.valueOf(jVar.w()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Integer.valueOf(jVar.w()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public long S() {
        X(0);
        return ((g) this.f1760e).B();
    }

    public final void T(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Long.valueOf(gVar.B()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Long.valueOf(gVar.B()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Long.valueOf(jVar.x()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Long.valueOf(jVar.x()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public void U(int i5) {
        if (((ij.j) this.f1760e).b() != i5) {
            throw ij.v.e();
        }
    }

    public void V(int i5) {
        if (((g) this.f1760e).b() != i5) {
            throw x.f();
        }
    }

    public void W(int i5) {
        if ((this.f1757b & 7) != i5) {
            throw ij.v.b();
        }
    }

    public void X(int i5) {
        if ((this.f1757b & 7) != i5) {
            throw x.b();
        }
    }

    public final boolean Y() {
        int i5;
        int i6;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                if (gVar.c() || (i5 = this.f1757b) == this.f1758c) {
                    return false;
                }
                return gVar.E(i5);
            default:
                ij.j jVar = (ij.j) this.f1760e;
                if (jVar.c() || (i6 = this.f1757b) == this.f1758c) {
                    return false;
                }
                return jVar.y(i6);
        }
    }

    public final int a() {
        switch (this.a) {
            case 0:
                int i5 = this.f1759d;
                if (i5 != 0) {
                    this.f1757b = i5;
                    this.f1759d = 0;
                } else {
                    this.f1757b = ((g) this.f1760e).z();
                }
                int i6 = this.f1757b;
                if (i6 == 0 || i6 == this.f1758c) {
                    return Integer.MAX_VALUE;
                }
                return i6 >>> 3;
            default:
                int i10 = this.f1759d;
                if (i10 != 0) {
                    this.f1757b = i10;
                    this.f1759d = 0;
                } else {
                    this.f1757b = ((ij.j) this.f1760e).v();
                }
                int i11 = this.f1757b;
                if (i11 == 0 || i11 == this.f1758c) {
                    return Integer.MAX_VALUE;
                }
                return i11 >>> 3;
        }
    }

    public int b() {
        return this.f1757b;
    }

    public void c(ij.b bVar, ij.q0 q0Var, ij.l lVar) {
        W(3);
        d(bVar, q0Var, lVar);
    }

    public void d(Object obj, ij.q0 q0Var, ij.l lVar) {
        int i5 = this.f1758c;
        this.f1758c = ((this.f1757b >>> 3) << 3) | 4;
        try {
            q0Var.f(obj, this, lVar);
            if (this.f1757b == this.f1758c) {
            } else {
                throw new ij.v("Failed to parse the message.");
            }
        } finally {
            this.f1758c = i5;
        }
    }

    public void e(Object obj, ij.q0 q0Var, ij.l lVar) {
        ij.j jVar = (ij.j) this.f1760e;
        int w5 = jVar.w();
        if (jVar.a >= 100) {
            throw new ij.v("Protocol message had too many levels of nesting.  May be malicious.  Use setRecursionLimit() to increase the recursion depth limit.");
        }
        int e9 = jVar.e(w5);
        jVar.a++;
        q0Var.f(obj, this, lVar);
        jVar.a(0);
        jVar.a--;
        jVar.d(e9);
    }

    public boolean f() {
        X(0);
        return ((g) this.f1760e).f();
    }

    public final void g(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Boolean.valueOf(gVar.f()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Boolean.valueOf(gVar.f()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Boolean.valueOf(jVar.f()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Boolean.valueOf(jVar.f()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public f h() {
        X(2);
        g gVar = (g) this.f1760e;
        byte[] bArr = gVar.f1748d;
        int s2 = gVar.s();
        int i5 = gVar.f1749e;
        int i6 = gVar.f1751g;
        if (s2 <= i5 - i6 && s2 > 0) {
            f a = f.a(bArr, i6, s2);
            gVar.f1751g += s2;
            return a;
        }
        if (s2 == 0) {
            return f.f1741i;
        }
        byte[] o6 = gVar.o(s2);
        if (o6 != null) {
            return f.a(o6, 0, o6.length);
        }
        int i10 = gVar.f1751g;
        int i11 = gVar.f1749e;
        int i12 = i11 - i10;
        gVar.f1753i += i11;
        gVar.f1751g = 0;
        gVar.f1749e = 0;
        ArrayList p3 = gVar.p(s2 - i12);
        byte[] bArr2 = new byte[s2];
        System.arraycopy(bArr, i10, bArr2, 0, i12);
        Iterator it = p3.iterator();
        while (it.hasNext()) {
            byte[] bArr3 = (byte[]) it.next();
            System.arraycopy(bArr3, 0, bArr2, i12, bArr3.length);
            i12 += bArr3.length;
        }
        f fVar = f.f1741i;
        return new f(bArr2);
    }

    public ij.g i() {
        W(2);
        return ((ij.j) this.f1760e).g();
    }

    public final void j(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                if ((this.f1757b & 7) != 2) {
                    throw x.b();
                }
                do {
                    list.add(h());
                    if (gVar.c()) {
                        return;
                    } else {
                        z5 = gVar.z();
                    }
                } while (z5 == this.f1757b);
                this.f1759d = z5;
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                if ((this.f1757b & 7) != 2) {
                    throw ij.v.b();
                }
                do {
                    list.add(i());
                    if (jVar.c()) {
                        return;
                    } else {
                        v5 = jVar.v();
                    }
                } while (v5 == this.f1757b);
                this.f1759d = v5;
                return;
        }
    }

    public double k() {
        X(1);
        return ((g) this.f1760e).g();
    }

    public final void l(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 1) {
                    do {
                        list.add(Double.valueOf(gVar.g()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int A = gVar.A();
                if ((A & 7) != 0) {
                    throw x.e();
                }
                int b10 = gVar.b() + A;
                do {
                    list.add(Double.valueOf(gVar.g()));
                } while (gVar.b() < b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 1) {
                    do {
                        list.add(Double.valueOf(jVar.h()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int w5 = jVar.w();
                if ((w5 & 7) != 0) {
                    throw new ij.v("Failed to parse the message.");
                }
                int b11 = jVar.b() + w5;
                do {
                    list.add(Double.valueOf(jVar.h()));
                } while (jVar.b() < b11);
                return;
        }
    }

    public int m() {
        X(0);
        return ((g) this.f1760e).h();
    }

    public final void n(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 0) {
                    do {
                        list.add(Integer.valueOf(gVar.h()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int b10 = gVar.b() + gVar.A();
                do {
                    list.add(Integer.valueOf(gVar.h()));
                } while (gVar.b() < b10);
                V(b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 0) {
                    do {
                        list.add(Integer.valueOf(jVar.i()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int b11 = jVar.b() + jVar.w();
                do {
                    list.add(Integer.valueOf(jVar.i()));
                } while (jVar.b() < b11);
                U(b11);
                return;
        }
    }

    public Object o(ij.j1 j1Var, Class cls, ij.l lVar) {
        ij.j jVar = (ij.j) this.f1760e;
        switch (j1Var.ordinal()) {
            case 0:
                W(1);
                return Double.valueOf(jVar.h());
            case 1:
                W(5);
                return Float.valueOf(jVar.l());
            case 2:
                W(0);
                return Long.valueOf(jVar.n());
            case 3:
                W(0);
                return Long.valueOf(jVar.x());
            case 4:
                W(0);
                return Integer.valueOf(jVar.m());
            case 5:
                W(1);
                return Long.valueOf(jVar.k());
            case 6:
                W(5);
                return Integer.valueOf(jVar.j());
            case 7:
                W(0);
                return Boolean.valueOf(jVar.f());
            case 8:
                W(2);
                return jVar.u();
            case 9:
            default:
                throw new IllegalArgumentException("unsupported field type.");
            case 10:
                W(2);
                ij.q0 a = ij.n0.f10907c.a(cls);
                ij.r c6 = a.c();
                e(c6, a, lVar);
                a.a(c6);
                return c6;
            case 11:
                return i();
            case 12:
                W(0);
                return Integer.valueOf(jVar.w());
            case 13:
                W(0);
                return Integer.valueOf(jVar.i());
            case 14:
                W(5);
                return Integer.valueOf(jVar.p());
            case 15:
                W(1);
                return Long.valueOf(jVar.q());
            case 16:
                W(0);
                return Integer.valueOf(jVar.r());
            case 17:
                W(0);
                return Long.valueOf(jVar.s());
        }
    }

    public Object p(v1 v1Var, Class cls, l lVar) {
        switch (v1Var.ordinal()) {
            case 0:
                return Double.valueOf(k());
            case 1:
                return Float.valueOf(u());
            case 2:
                return Long.valueOf(B());
            case 3:
                return Long.valueOf(S());
            case 4:
                return Integer.valueOf(z());
            case 5:
                return Long.valueOf(s());
            case 6:
                return Integer.valueOf(q());
            case 7:
                return Boolean.valueOf(f());
            case 8:
                return P();
            case 9:
            default:
                throw new RuntimeException("unsupported field type.");
            case 10:
                X(2);
                return D(t0.f1812c.a(cls), lVar);
            case 11:
                return h();
            case 12:
                return Integer.valueOf(Q());
            case 13:
                return Integer.valueOf(m());
            case 14:
                return Integer.valueOf(F());
            case 15:
                return Long.valueOf(H());
            case 16:
                return Integer.valueOf(J());
            case 17:
                return Long.valueOf(L());
        }
    }

    public int q() {
        X(5);
        return ((g) this.f1760e).i();
    }

    public final void r(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 2) {
                    int A = gVar.A();
                    if ((A & 3) != 0) {
                        throw x.e();
                    }
                    int b10 = gVar.b() + A;
                    do {
                        list.add(Integer.valueOf(gVar.i()));
                    } while (gVar.b() < b10);
                    return;
                }
                if (i5 != 5) {
                    throw x.b();
                }
                do {
                    list.add(Integer.valueOf(gVar.i()));
                    if (gVar.c()) {
                        return;
                    } else {
                        z5 = gVar.z();
                    }
                } while (z5 == this.f1757b);
                this.f1759d = z5;
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 2) {
                    int w5 = jVar.w();
                    if ((w5 & 3) != 0) {
                        throw new ij.v("Failed to parse the message.");
                    }
                    int b11 = jVar.b() + w5;
                    do {
                        list.add(Integer.valueOf(jVar.j()));
                    } while (jVar.b() < b11);
                    return;
                }
                if (i6 != 5) {
                    throw ij.v.b();
                }
                do {
                    list.add(Integer.valueOf(jVar.j()));
                    if (jVar.c()) {
                        return;
                    } else {
                        v5 = jVar.v();
                    }
                } while (v5 == this.f1757b);
                this.f1759d = v5;
                return;
        }
    }

    public long s() {
        X(1);
        return ((g) this.f1760e).j();
    }

    public final void t(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 1) {
                    do {
                        list.add(Long.valueOf(gVar.j()));
                        if (gVar.c()) {
                            return;
                        } else {
                            z5 = gVar.z();
                        }
                    } while (z5 == this.f1757b);
                    this.f1759d = z5;
                    return;
                }
                if (i5 != 2) {
                    throw x.b();
                }
                int A = gVar.A();
                if ((A & 7) != 0) {
                    throw x.e();
                }
                int b10 = gVar.b() + A;
                do {
                    list.add(Long.valueOf(gVar.j()));
                } while (gVar.b() < b10);
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 1) {
                    do {
                        list.add(Long.valueOf(jVar.k()));
                        if (jVar.c()) {
                            return;
                        } else {
                            v5 = jVar.v();
                        }
                    } while (v5 == this.f1757b);
                    this.f1759d = v5;
                    return;
                }
                if (i6 != 2) {
                    throw ij.v.b();
                }
                int w5 = jVar.w();
                if ((w5 & 7) != 0) {
                    throw new ij.v("Failed to parse the message.");
                }
                int b11 = jVar.b() + w5;
                do {
                    list.add(Long.valueOf(jVar.k()));
                } while (jVar.b() < b11);
                return;
        }
    }

    public float u() {
        X(5);
        return ((g) this.f1760e).k();
    }

    public final void v(List list) {
        int z5;
        int v5;
        switch (this.a) {
            case 0:
                g gVar = (g) this.f1760e;
                int i5 = this.f1757b & 7;
                if (i5 == 2) {
                    int A = gVar.A();
                    if ((A & 3) != 0) {
                        throw x.e();
                    }
                    int b10 = gVar.b() + A;
                    do {
                        list.add(Float.valueOf(gVar.k()));
                    } while (gVar.b() < b10);
                    return;
                }
                if (i5 != 5) {
                    throw x.b();
                }
                do {
                    list.add(Float.valueOf(gVar.k()));
                    if (gVar.c()) {
                        return;
                    } else {
                        z5 = gVar.z();
                    }
                } while (z5 == this.f1757b);
                this.f1759d = z5;
                return;
            default:
                ij.j jVar = (ij.j) this.f1760e;
                int i6 = this.f1757b & 7;
                if (i6 == 2) {
                    int w5 = jVar.w();
                    if ((w5 & 3) != 0) {
                        throw new ij.v("Failed to parse the message.");
                    }
                    int b11 = jVar.b() + w5;
                    do {
                        list.add(Float.valueOf(jVar.l()));
                    } while (jVar.b() < b11);
                    return;
                }
                if (i6 != 5) {
                    throw ij.v.b();
                }
                do {
                    list.add(Float.valueOf(jVar.l()));
                    if (jVar.c()) {
                        return;
                    } else {
                        v5 = jVar.v();
                    }
                } while (v5 == this.f1757b);
                this.f1759d = v5;
                return;
        }
    }

    public Object w(w0 w0Var, l lVar) {
        int i5 = this.f1758c;
        this.f1758c = ((this.f1757b >>> 3) << 3) | 4;
        try {
            Object c6 = w0Var.c();
            w0Var.i(c6, this, lVar);
            w0Var.a(c6);
            if (this.f1757b == this.f1758c) {
                return c6;
            }
            throw x.e();
        } finally {
            this.f1758c = i5;
        }
    }

    public Object x(w0 w0Var, l lVar) {
        X(3);
        return w(w0Var, lVar);
    }

    public void y(List list, w0 w0Var, l lVar) {
        int z5;
        g gVar = (g) this.f1760e;
        int i5 = this.f1757b;
        if ((i5 & 7) != 3) {
            throw x.b();
        }
        do {
            list.add(w(w0Var, lVar));
            if (gVar.c() || this.f1759d != 0) {
                return;
            } else {
                z5 = gVar.z();
            }
        } while (z5 == i5);
        this.f1759d = z5;
    }

    public int z() {
        X(0);
        return ((g) this.f1760e).l();
    }

    public h(g gVar) {
        Charset charset = v.a;
        this.f1760e = gVar;
        gVar.f1746b = this;
    }
}
