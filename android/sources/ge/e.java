package ge;

import android.content.res.Configuration;
import android.content.res.Resources;
import android.text.TextUtils;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.trackselection.DefaultTrackSelector;
import fi.e0;
import fi.p0;
import fi.q0;
import fi.x;
import java.util.Locale;
import ke.d0;
import nd.z0;

/* loaded from: classes3.dex */
public final class e extends m implements Comparable {
    public final com.google.android.exoplayer2.trackselection.a E;
    public final boolean F;
    public final int G;
    public final int H;
    public final int I;
    public final boolean J;
    public final int K;
    public final int L;
    public final boolean M;
    public final int N;
    public final int O;
    public final int P;
    public final int Q;
    public final boolean R;
    public final boolean S;

    /* renamed from: w, reason: collision with root package name */
    public final int f9176w;

    /* renamed from: x, reason: collision with root package name */
    public final boolean f9177x;

    /* renamed from: y, reason: collision with root package name */
    public final String f9178y;

    public e(int i5, z0 z0Var, int i6, com.google.android.exoplayer2.trackselection.a aVar, int i10, boolean z5, d dVar) {
        super(i5, z0Var, i6);
        e0 e0Var;
        int i11;
        int i12;
        String[] strArr;
        int i13;
        this.E = aVar;
        this.f9178y = DefaultTrackSelector.f(this.f9196v.f5229i);
        int i14 = 0;
        this.F = DefaultTrackSelector.d(i10, false);
        int i15 = 0;
        while (true) {
            e0 e0Var2 = aVar.K;
            e0Var = aVar.O;
            i11 = Integer.MAX_VALUE;
            if (i15 >= e0Var2.size()) {
                i12 = 0;
                i15 = Integer.MAX_VALUE;
                break;
            } else {
                i12 = DefaultTrackSelector.b(this.f9196v, (String) aVar.K.get(i15), false);
                if (i12 > 0) {
                    break;
                } else {
                    i15++;
                }
            }
        }
        this.H = i15;
        this.G = i12;
        int i16 = this.f9196v.f5231w;
        int i17 = aVar.L;
        this.I = (i16 == 0 || i16 != i17) ? Integer.bitCount(i16 & i17) : Integer.MAX_VALUE;
        Format format = this.f9196v;
        int i18 = format.f5231w;
        this.J = i18 == 0 || (i18 & 1) != 0;
        this.M = (format.f5230v & 1) != 0;
        int i19 = format.V;
        this.N = i19;
        this.O = format.W;
        int i20 = format.E;
        this.P = i20;
        this.f9177x = (i20 == -1 || i20 <= aVar.N) && (i19 == -1 || i19 <= aVar.M) && dVar.apply(format);
        Configuration configuration = Resources.getSystem().getConfiguration();
        int i21 = d0.a;
        if (i21 >= 24) {
            strArr = configuration.getLocales().toLanguageTags().split(",", -1);
        } else {
            Locale locale = configuration.locale;
            strArr = new String[]{i21 >= 21 ? locale.toLanguageTag() : locale.toString()};
        }
        for (int i22 = 0; i22 < strArr.length; i22++) {
            strArr[i22] = d0.J(strArr[i22]);
        }
        int i23 = 0;
        while (true) {
            if (i23 >= strArr.length) {
                i13 = 0;
                i23 = Integer.MAX_VALUE;
                break;
            } else {
                i13 = DefaultTrackSelector.b(this.f9196v, strArr[i23], false);
                if (i13 > 0) {
                    break;
                } else {
                    i23++;
                }
            }
        }
        this.K = i23;
        this.L = i13;
        int i24 = 0;
        while (true) {
            if (i24 >= e0Var.size()) {
                break;
            }
            String str = this.f9196v.I;
            if (str != null && str.equals(e0Var.get(i24))) {
                i11 = i24;
                break;
            }
            i24++;
        }
        this.Q = i11;
        this.R = (i10 & 384) == 128;
        this.S = (i10 & 64) == 64;
        boolean z6 = this.f9177x;
        com.google.android.exoplayer2.trackselection.a aVar2 = this.E;
        if (DefaultTrackSelector.d(i10, aVar2.h0) && (z6 || aVar2.f5477b0)) {
            i14 = (!DefaultTrackSelector.d(i10, false) || !z6 || this.f9196v.E == -1 || aVar2.U || aVar2.T || (!aVar2.f5484j0 && z5)) ? 1 : 2;
        }
        this.f9176w = i14;
    }

    @Override // ge.m
    public final int a() {
        return this.f9176w;
    }

    @Override // ge.m
    public final boolean b(m mVar) {
        int i5;
        String str;
        int i6;
        e eVar = (e) mVar;
        Format format = eVar.f9196v;
        com.google.android.exoplayer2.trackselection.a aVar = this.E;
        boolean z5 = aVar.f5480e0;
        Format format2 = this.f9196v;
        if (!z5 && ((i6 = format2.V) == -1 || i6 != format.V)) {
            return false;
        }
        if (!aVar.f5478c0 && ((str = format2.I) == null || !TextUtils.equals(str, format.I))) {
            return false;
        }
        if (!aVar.f5479d0 && ((i5 = format2.W) == -1 || i5 != format.W)) {
            return false;
        }
        if (aVar.f5481f0) {
            return true;
        }
        return this.R == eVar.R && this.S == eVar.S;
    }

    @Override // java.lang.Comparable
    /* renamed from: c, reason: merged with bridge method [inline-methods] */
    public final int compareTo(e eVar) {
        boolean z5 = this.F;
        boolean z6 = this.f9177x;
        q0 b10 = (z6 && z5) ? DefaultTrackSelector.k : DefaultTrackSelector.k.b();
        boolean z7 = eVar.F;
        int i5 = eVar.P;
        x c6 = x.a.c(z5, z7);
        Integer valueOf = Integer.valueOf(this.H);
        Integer valueOf2 = Integer.valueOf(eVar.H);
        p0 p0Var = p0.f8694i;
        x b11 = c6.b(valueOf, valueOf2, p0Var).a(this.G, eVar.G).a(this.I, eVar.I).c(this.M, eVar.M).c(this.J, eVar.J).b(Integer.valueOf(this.K), Integer.valueOf(eVar.K), p0Var).a(this.L, eVar.L).c(z6, eVar.f9177x).b(Integer.valueOf(this.Q), Integer.valueOf(eVar.Q), p0Var);
        int i6 = this.P;
        x b12 = b11.b(Integer.valueOf(i6), Integer.valueOf(i5), this.E.T ? DefaultTrackSelector.k.b() : DefaultTrackSelector.f5456l).c(this.R, eVar.R).c(this.S, eVar.S).b(Integer.valueOf(this.N), Integer.valueOf(eVar.N), b10).b(Integer.valueOf(this.O), Integer.valueOf(eVar.O), b10);
        Integer valueOf3 = Integer.valueOf(i6);
        Integer valueOf4 = Integer.valueOf(i5);
        if (!d0.a(this.f9178y, eVar.f9178y)) {
            b10 = DefaultTrackSelector.f5456l;
        }
        return b12.b(valueOf3, valueOf4, b10).e();
    }
}
