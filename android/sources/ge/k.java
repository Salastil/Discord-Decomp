package ge;

import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import fi.e0;
import fi.p0;
import fi.x;
import nd.z0;

/* loaded from: classes3.dex */
public final class k extends m implements Comparable {
    public final boolean E;
    public final int F;
    public final int G;
    public final int H;
    public final int I;
    public final boolean J;

    /* renamed from: w, reason: collision with root package name */
    public final int f9190w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f9191x;

    /* renamed from: y, reason: collision with root package name */
    public final boolean f9192y;

    public k(int i5, z0 z0Var, int i6, com.google.android.exoplayer2.trackselection.a aVar, int i10, String str) {
        super(i5, z0Var, i6);
        int i11;
        int i12 = 0;
        this.f9191x = DefaultTrackSelector.d(i10, false);
        int i13 = this.f9196v.f5230v;
        int i14 = aVar.R;
        e0 e0Var = aVar.P;
        int i15 = i13 & (~i14);
        this.f9192y = (i15 & 1) != 0;
        this.E = (i15 & 2) != 0;
        e0 s2 = e0Var.isEmpty() ? e0.s("") : e0Var;
        int i16 = 0;
        while (true) {
            if (i16 >= s2.size()) {
                i11 = 0;
                i16 = Integer.MAX_VALUE;
                break;
            } else {
                i11 = DefaultTrackSelector.b(this.f9196v, (String) s2.get(i16), aVar.S);
                if (i11 > 0) {
                    break;
                } else {
                    i16++;
                }
            }
        }
        this.F = i16;
        this.G = i11;
        int i17 = this.f9196v.f5231w;
        int i18 = aVar.Q;
        int bitCount = (i17 == 0 || i17 != i18) ? Integer.bitCount(i17 & i18) : Integer.MAX_VALUE;
        this.H = bitCount;
        this.J = (this.f9196v.f5231w & 1088) != 0;
        int b10 = DefaultTrackSelector.b(this.f9196v, str, DefaultTrackSelector.f(str) == null);
        this.I = b10;
        boolean z5 = i11 > 0 || (e0Var.isEmpty() && bitCount > 0) || this.f9192y || (this.E && b10 > 0);
        if (DefaultTrackSelector.d(i10, aVar.h0) && z5) {
            i12 = 1;
        }
        this.f9190w = i12;
    }

    @Override // ge.m
    public final int a() {
        return this.f9190w;
    }

    @Override // ge.m
    public final /* bridge */ /* synthetic */ boolean b(m mVar) {
        return false;
    }

    @Override // java.lang.Comparable
    /* renamed from: c, reason: merged with bridge method [inline-methods] */
    public final int compareTo(k kVar) {
        x c6 = x.a.c(this.f9191x, kVar.f9191x);
        Integer valueOf = Integer.valueOf(this.F);
        Integer valueOf2 = Integer.valueOf(kVar.F);
        p0 p0Var = p0.f8693e;
        p0 p0Var2 = p0.f8694i;
        x b10 = c6.b(valueOf, valueOf2, p0Var2);
        int i5 = kVar.G;
        int i6 = this.G;
        x a = b10.a(i6, i5);
        int i10 = kVar.H;
        int i11 = this.H;
        x c8 = a.a(i11, i10).c(this.f9192y, kVar.f9192y);
        Boolean valueOf3 = Boolean.valueOf(this.E);
        Boolean valueOf4 = Boolean.valueOf(kVar.E);
        if (i6 != 0) {
            p0Var = p0Var2;
        }
        x a10 = c8.b(valueOf3, valueOf4, p0Var).a(this.I, kVar.I);
        if (i11 == 0) {
            a10 = a10.d(this.J, kVar.J);
        }
        return a10.e();
    }
}
