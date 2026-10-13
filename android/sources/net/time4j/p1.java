package net.time4j;

/* loaded from: classes3.dex */
public final class p1 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15299d;

    /* renamed from: e, reason: collision with root package name */
    public final q1 f15300e;

    public /* synthetic */ p1(q1 q1Var, int i5) {
        this.f15299d = i5;
        this.f15300e = q1Var;
    }

    public int a(w0 w0Var) {
        q1 q1Var = this.f15300e;
        int x5 = q1Var.m() ? w0Var.x() : w0Var.f15390i;
        int e9 = e(w0Var, 0);
        if (e9 > x5) {
            return (((f(w0Var, -1) + x5) - e(w0Var, -1)) / 7) + 1;
        }
        int i5 = ((x5 - e9) / 7) + 1;
        if (i5 >= 53 || (!q1Var.m() && i5 >= 5)) {
            if (f(w0Var, 0) + e(w0Var, 1) <= x5) {
                return 1;
            }
        }
        return i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:12:0x0046, code lost:
    
        if (r4 == false) goto L32;
     */
    /* JADX WARN: Code restructure failed: missing block: B:20:0x0042, code lost:
    
        if (r8 <= g(r2)) goto L25;
     */
    /* JADX WARN: Code restructure failed: missing block: B:36:0x00af, code lost:
    
        if (r8 <= h(r2, 1)) goto L41;
     */
    @Override // ks.j
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object b(ks.e eVar, Object obj, boolean z5) {
        boolean z6;
        switch (this.f15299d) {
            case 0:
                Integer num = (Integer) obj;
                u uVar = w0.J;
                w0 w0Var = (w0) eVar.d(uVar);
                if (num != null) {
                    if (!z5) {
                        int intValue = num.intValue();
                        w0 w0Var2 = (w0) eVar.d(uVar);
                        if (intValue >= h(w0Var2, -1)) {
                            break;
                        }
                    }
                    int intValue2 = num.intValue();
                    int h6 = h(w0Var, 0);
                    if (intValue2 != h6) {
                        int i5 = (intValue2 - h6) * 7;
                        l8.a aVar = w0.V;
                        w0Var = (w0) aVar.o(aVar.n(w0Var) + i5);
                    }
                    return eVar.h(uVar, w0Var);
                }
                throw new IllegalArgumentException("Invalid value: " + num + " (context=" + eVar + ")");
            default:
                Integer num2 = (Integer) obj;
                u uVar2 = w0.J;
                w0 w0Var3 = (w0) eVar.d(uVar2);
                if (num2 != null) {
                    if (!z5) {
                        if (num2 != null) {
                            int intValue3 = num2.intValue();
                            q1 q1Var = this.f15300e;
                            z6 = true;
                            if (!q1Var.m() || intValue3 < 1 || intValue3 > 52) {
                                if (!q1Var.m() || intValue3 == 53) {
                                    w0 w0Var4 = (w0) eVar.d(w0.J);
                                    if (intValue3 >= 1) {
                                        break;
                                    }
                                }
                            }
                        }
                        z6 = false;
                        break;
                    }
                    int intValue4 = num2.intValue();
                    int a = a(w0Var3);
                    if (intValue4 != a) {
                        int i6 = (intValue4 - a) * 7;
                        l8.a aVar2 = w0.V;
                        w0Var3 = (w0) aVar2.o(aVar2.n(w0Var3) + i6);
                    }
                    return eVar.h(uVar2, w0Var3);
                }
                throw new IllegalArgumentException("Invalid value: " + num2 + " (context=" + eVar + ")");
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        switch (this.f15299d) {
            case 0:
                return Integer.valueOf(h((w0) eVar.d(w0.J), 0));
            default:
                return Integer.valueOf(a((w0) eVar.d(w0.J)));
        }
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        switch (this.f15299d) {
            case 0:
                return Integer.valueOf(h((w0) eVar.d(w0.J), 1));
            default:
                return Integer.valueOf(g((w0) eVar.d(w0.J)));
        }
    }

    public int e(w0 w0Var, int i5) {
        n1 d6;
        q1 q1Var = this.f15300e;
        if (q1Var.m()) {
            d6 = n1.d(tn.g.k(w0Var.f15388d + i5, 1, 1));
        } else {
            int i6 = w0Var.f15388d;
            int i10 = w0Var.f15389e + i5;
            if (i10 == 0) {
                i6--;
                i10 = 12;
            } else if (i10 == 13) {
                i6++;
                i10 = 1;
            } else if (i10 == 14) {
                i6++;
                i10 = 2;
            }
            d6 = n1.d(tn.g.k(i6, i10, 1));
        }
        t1 t1Var = q1Var.this$0;
        int b10 = d6.b(t1Var);
        return b10 <= 8 - t1Var.f15326e ? 2 - b10 : 9 - b10;
    }

    public int f(w0 w0Var, int i5) {
        if (this.f15300e.m()) {
            return tn.g.p(w0Var.f15388d + i5) ? 366 : 365;
        }
        int i6 = w0Var.f15388d;
        int i10 = w0Var.f15389e + i5;
        if (i10 == 0) {
            i6--;
            i10 = 12;
        } else if (i10 == 13) {
            i6++;
            i10 = 1;
        }
        return tn.g.l(i6, i10);
    }

    public int g(w0 w0Var) {
        int x5 = this.f15300e.m() ? w0Var.x() : w0Var.f15390i;
        int e9 = e(w0Var, 0);
        if (e9 > x5) {
            return ((f(w0Var, -1) + e9) - e(w0Var, -1)) / 7;
        }
        int f2 = f(w0Var, 0) + e(w0Var, 1);
        if (f2 <= x5) {
            try {
                int e10 = e(w0Var, 1);
                f2 = e(w0Var, 2) + f(w0Var, 1);
                e9 = e10;
            } catch (RuntimeException unused) {
                f2 += 7;
            }
        }
        return (f2 - e9) / 7;
    }

    public int h(w0 w0Var, int i5) {
        q1 q1Var = this.f15300e;
        int x5 = q1Var.m() ? w0Var.x() : w0Var.f15390i;
        w0Var.getClass();
        long n6 = w0.V.n(w0Var);
        int i6 = w0Var.f15388d;
        t1 t1Var = t1.G;
        int b10 = n1.d(w3.q.o(7, (n6 - x5) + 6) + 1).b(q1Var.this$0);
        int i10 = b10 <= 8 - q1Var.this$0.f15326e ? 2 - b10 : 9 - b10;
        if (i5 == -1) {
            x5 = 1;
        } else if (i5 != 0) {
            if (i5 != 1) {
                throw new AssertionError(k0.d.i(i5, "Unexpected: "));
            }
            x5 = q1Var.m() ? tn.g.p(i6) ? 366 : 365 : tn.g.l(i6, w0Var.f15389e);
        }
        return w3.q.l(x5 - i10, 7) + 1;
    }
}
