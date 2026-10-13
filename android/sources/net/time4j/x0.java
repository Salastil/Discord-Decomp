package net.time4j;

/* loaded from: classes3.dex */
public final class x0 implements ks.j {

    /* renamed from: d, reason: collision with root package name */
    public final e0 f15394d;

    /* renamed from: e, reason: collision with root package name */
    public final int f15395e;

    /* renamed from: i, reason: collision with root package name */
    public final int f15396i;

    /* renamed from: v, reason: collision with root package name */
    public final int f15397v;

    public x0(e0 e0Var, int i5, int i6) {
        this.f15394d = e0Var;
        this.f15395e = e0Var.f15244d;
        this.f15396i = i5;
        this.f15397v = i6;
    }

    /* JADX WARN: Code restructure failed: missing block: B:123:0x0144, code lost:
    
        if (r10.f15414v == 0) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:129:0x015b, code lost:
    
        if (r12 == 0) goto L105;
     */
    /* JADX WARN: Code restructure failed: missing block: B:89:0x013f, code lost:
    
        if ((r10.f15414v % 1000000) == 0) goto L105;
     */
    /* JADX WARN: Removed duplicated region for block: B:120:0x01c8  */
    /* JADX WARN: Removed duplicated region for block: B:92:0x0162  */
    @Override // ks.j
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final z0 b(z0 z0Var, Integer num, boolean z5) {
        boolean z6;
        int i5;
        int i6;
        int intValue;
        int i10;
        if (num == null) {
            throw new IllegalArgumentException("Missing element value.");
        }
        e0 e0Var = this.f15394d;
        if (z5) {
            int intValue2 = num.intValue();
            if (e0Var == z0.S || e0Var == z0.R || e0Var == z0.Q) {
                return (z0) z0Var.l(w3.q.C(intValue2, ((Integer) z0Var.d(e0Var)).intValue()), t.f15314d);
            }
            if (e0Var == z0.T) {
                return (z0) z0Var.l(w3.q.C(intValue2, z0Var.f15412e), t.f15315e);
            }
            if (e0Var == z0.V) {
                return (z0) z0Var.l(w3.q.C(intValue2, z0Var.f15413i), t.f15316i);
            }
            if (e0Var == z0.X) {
                return (z0) z0Var.l(w3.q.C(intValue2, ((Integer) z0Var.d(r12)).intValue()), t.f15317v);
            }
            if (e0Var == z0.Y) {
                return (z0) z0Var.l(w3.q.C(intValue2, ((Integer) z0Var.d(r12)).intValue()), t.f15318w);
            }
            if (e0Var == z0.Z) {
                return (z0) z0Var.l(w3.q.C(intValue2, z0Var.f15414v), t.f15319x);
            }
            if (e0Var == z0.a0) {
                int n6 = w3.q.n(intValue2, 86400000);
                int i11 = z0Var.f15414v % 1000000;
                return (n6 == 0 && i11 == 0) ? intValue2 > 0 ? z0.K : z0.J : z0.m(n6, i11);
            }
            if (e0Var == z0.U) {
                int n10 = w3.q.n(intValue2, 1440);
                return (n10 == 0 && z0Var.w()) ? intValue2 > 0 ? z0.K : z0.J : b(z0Var, Integer.valueOf(n10), false);
            }
            if (e0Var != z0.W) {
                throw new UnsupportedOperationException(e0Var.name());
            }
            int n11 = w3.q.n(intValue2, 86400);
            return (n11 == 0 && z0Var.f15414v == 0) ? intValue2 > 0 ? z0.K : z0.J : b(z0Var, Integer.valueOf(n11), false);
        }
        if (num != null && (intValue = num.intValue()) >= this.f15396i && intValue <= (i10 = this.f15397v)) {
            int i12 = this.f15395e;
            if (intValue == i10) {
                if (i12 == 5) {
                    z6 = z0Var.v();
                } else if (i12 == 7) {
                    z6 = z0Var.w();
                } else if (i12 != 9) {
                    if (i12 == 13) {
                    }
                }
                if (z6) {
                    throw new IllegalArgumentException("Value out of range: " + num);
                }
                int i13 = z0Var.f15411d;
                byte b10 = z0Var.f15411d;
                int i14 = z0Var.f15414v;
                int i15 = z0Var.f15412e;
                int i16 = z0Var.f15413i;
                int intValue3 = num.intValue();
                switch (this.f15395e) {
                    case 1:
                        r1 = intValue3 != 12 ? intValue3 : 0;
                        if (b10 >= 12 && b10 != 24) {
                            r1 += 12;
                        }
                        i13 = r1;
                        return z0.y(i13, i15, i16, i14, true);
                    case 2:
                        if (intValue3 != 24) {
                            r1 = intValue3;
                        }
                        i13 = r1;
                        return z0.y(i13, i15, i16, i14, true);
                    case 3:
                        if (b10 >= 12 && b10 != 24) {
                            intValue3 += 12;
                        }
                    case 4:
                    case 5:
                        i13 = intValue3;
                        return z0.y(i13, i15, i16, i14, true);
                    case 6:
                        i15 = intValue3;
                        return z0.y(i13, i15, i16, i14, true);
                    case 7:
                        i13 = intValue3 / 60;
                        i15 = intValue3 % 60;
                        return z0.y(i13, i15, i16, i14, true);
                    case 8:
                        i16 = intValue3;
                        return z0.y(i13, i15, i16, i14, true);
                    case 9:
                        i13 = intValue3 / 3600;
                        int i17 = intValue3 % 3600;
                        i15 = i17 / 60;
                        i16 = i17 % 60;
                        return z0.y(i13, i15, i16, i14, true);
                    case 10:
                        i5 = intValue3 * 1000000;
                        i6 = i14 % 1000000;
                        i14 = i6 + i5;
                        return z0.y(i13, i15, i16, i14, true);
                    case 11:
                        i5 = intValue3 * 1000;
                        i6 = i14 % 1000;
                        i14 = i6 + i5;
                        return z0.y(i13, i15, i16, i14, true);
                    case 12:
                        i14 = intValue3;
                        return z0.y(i13, i15, i16, i14, true);
                    case 13:
                        return z0.m(intValue3, i14 % 1000000);
                    default:
                        throw new UnsupportedOperationException(e0Var.name());
                }
            }
            if (z0Var.f15411d == 24) {
                switch (i12) {
                    case 6:
                    case 8:
                    case 10:
                    case 11:
                    case 12:
                        break;
                    case 7:
                    case 9:
                    default:
                        z6 = true;
                        break;
                }
                if (z6) {
                }
            }
            z6 = true;
            if (z6) {
            }
        }
        z6 = false;
        if (z6) {
        }
    }

    @Override // ks.j
    public final Object c(ks.e eVar) {
        z0 z0Var = (z0) eVar;
        int i5 = 12;
        switch (this.f15395e) {
            case 1:
                int i6 = z0Var.f15411d % 12;
                if (i6 != 0) {
                    i5 = i6;
                    break;
                }
                break;
            case 2:
                i5 = z0Var.f15411d % 24;
                if (i5 == 0) {
                    i5 = 24;
                    break;
                }
                break;
            case 3:
                i5 = z0Var.f15411d % 12;
                break;
            case 4:
                i5 = z0Var.f15411d % 24;
                break;
            case 5:
                i5 = z0Var.f15411d;
                break;
            case 6:
                i5 = z0Var.f15412e;
                break;
            case 7:
                i5 = (z0Var.f15411d * 60) + z0Var.f15412e;
                break;
            case 8:
                i5 = z0Var.f15413i;
                break;
            case 9:
                i5 = (z0Var.f15412e * 60) + (z0Var.f15411d * 3600) + z0Var.f15413i;
                break;
            case 10:
                i5 = z0Var.f15414v / 1000000;
                break;
            case 11:
                i5 = z0Var.f15414v / 1000;
                break;
            case 12:
                i5 = z0Var.f15414v;
                break;
            case 13:
                i5 = (int) (z0.q(z0Var) / 1000000);
                break;
            default:
                throw new UnsupportedOperationException(this.f15394d.name());
        }
        return Integer.valueOf(i5);
    }

    @Override // ks.j
    public final Object d(ks.e eVar) {
        z0 z0Var = (z0) eVar;
        if (z0Var.f15411d == 24) {
            switch (this.f15395e) {
                case 6:
                case 8:
                case 10:
                case 11:
                case 12:
                    return 0;
            }
        }
        int i5 = z0Var.f15414v;
        e0 e0Var = z0.a0;
        int i6 = this.f15397v;
        e0 e0Var2 = this.f15394d;
        return ((e0Var2 != e0Var || i5 % 1000000 == 0) && (e0Var2 != z0.S || z0Var.v()) && ((e0Var2 != z0.U || z0Var.w()) && ((e0Var2 != z0.W || i5 == 0) && (e0Var2 != z0.f15401b0 || i5 % 1000 == 0)))) ? Integer.valueOf(i6) : Integer.valueOf(i6 - 1);
    }
}
