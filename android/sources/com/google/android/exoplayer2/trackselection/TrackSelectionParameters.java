package com.google.android.exoplayer2.trackselection;

import fi.e0;
import fi.h0;
import fi.p;
import fi.w0;
import ge.t;
import hc.g;
import ke.d0;

/* loaded from: classes3.dex */
public class TrackSelectionParameters implements g {
    public final int E;
    public final int F;
    public final int G;
    public final boolean H;
    public final e0 I;
    public final int J;
    public final e0 K;
    public final int L;
    public final int M;
    public final int N;
    public final e0 O;
    public final e0 P;
    public final int Q;
    public final int R;
    public final boolean S;
    public final boolean T;
    public final boolean U;
    public final w0 V;
    public final h0 W;

    /* renamed from: d, reason: collision with root package name */
    public final int f5468d;

    /* renamed from: e, reason: collision with root package name */
    public final int f5469e;

    /* renamed from: i, reason: collision with root package name */
    public final int f5470i;

    /* renamed from: v, reason: collision with root package name */
    public final int f5471v;

    /* renamed from: w, reason: collision with root package name */
    public final int f5472w;

    /* renamed from: x, reason: collision with root package name */
    public final int f5473x;

    /* renamed from: y, reason: collision with root package name */
    public final int f5474y;

    static {
        new TrackSelectionParameters(new t());
        int i5 = d0.a;
        Integer.toString(1, 36);
        Integer.toString(2, 36);
        Integer.toString(3, 36);
        Integer.toString(4, 36);
        Integer.toString(5, 36);
        Integer.toString(6, 36);
        Integer.toString(7, 36);
        Integer.toString(8, 36);
        Integer.toString(9, 36);
        Integer.toString(10, 36);
        Integer.toString(11, 36);
        Integer.toString(12, 36);
        Integer.toString(13, 36);
        Integer.toString(14, 36);
        Integer.toString(15, 36);
        Integer.toString(16, 36);
        Integer.toString(17, 36);
        Integer.toString(18, 36);
        Integer.toString(19, 36);
        Integer.toString(20, 36);
        Integer.toString(21, 36);
        Integer.toString(22, 36);
        Integer.toString(23, 36);
        Integer.toString(24, 36);
        Integer.toString(25, 36);
        Integer.toString(26, 36);
    }

    public TrackSelectionParameters(t tVar) {
        this.f5468d = tVar.a;
        this.f5469e = tVar.f9207b;
        this.f5470i = tVar.f9208c;
        this.f5471v = tVar.f9209d;
        this.f5472w = tVar.f9210e;
        this.f5473x = tVar.f9211f;
        this.f5474y = tVar.f9212g;
        this.E = tVar.f9213h;
        this.F = tVar.f9214i;
        this.G = tVar.j;
        this.H = tVar.k;
        this.I = tVar.f9215l;
        this.J = tVar.f9216m;
        this.K = tVar.f9217n;
        this.L = tVar.f9218o;
        this.M = tVar.f9219p;
        this.N = tVar.f9220q;
        this.O = tVar.f9221r;
        this.P = tVar.f9222s;
        this.Q = tVar.f9223t;
        this.R = tVar.f9224u;
        this.S = tVar.f9225v;
        this.T = tVar.f9226w;
        this.U = tVar.f9227x;
        this.V = w0.a(tVar.f9228y);
        this.W = h0.m(tVar.f9229z);
    }

    public boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && getClass() == obj.getClass()) {
            TrackSelectionParameters trackSelectionParameters = (TrackSelectionParameters) obj;
            if (this.f5468d == trackSelectionParameters.f5468d && this.f5469e == trackSelectionParameters.f5469e && this.f5470i == trackSelectionParameters.f5470i && this.f5471v == trackSelectionParameters.f5471v && this.f5472w == trackSelectionParameters.f5472w && this.f5473x == trackSelectionParameters.f5473x && this.f5474y == trackSelectionParameters.f5474y && this.E == trackSelectionParameters.E && this.H == trackSelectionParameters.H && this.F == trackSelectionParameters.F && this.G == trackSelectionParameters.G && this.I.equals(trackSelectionParameters.I) && this.J == trackSelectionParameters.J && this.K.equals(trackSelectionParameters.K) && this.L == trackSelectionParameters.L && this.M == trackSelectionParameters.M && this.N == trackSelectionParameters.N && this.O.equals(trackSelectionParameters.O) && this.P.equals(trackSelectionParameters.P) && this.Q == trackSelectionParameters.Q && this.R == trackSelectionParameters.R && this.S == trackSelectionParameters.S && this.T == trackSelectionParameters.T && this.U == trackSelectionParameters.U) {
                w0 w0Var = trackSelectionParameters.V;
                w0 w0Var2 = this.V;
                w0Var2.getClass();
                if (p.e(w0Var2, w0Var) && this.W.equals(trackSelectionParameters.W)) {
                    return true;
                }
            }
        }
        return false;
    }

    public int hashCode() {
        return this.W.hashCode() + ((this.V.hashCode() + ((((((((((((this.P.hashCode() + ((this.O.hashCode() + ((((((((this.K.hashCode() + ((((this.I.hashCode() + ((((((((((((((((((((((this.f5468d + 31) * 31) + this.f5469e) * 31) + this.f5470i) * 31) + this.f5471v) * 31) + this.f5472w) * 31) + this.f5473x) * 31) + this.f5474y) * 31) + this.E) * 31) + (this.H ? 1 : 0)) * 31) + this.F) * 31) + this.G) * 31)) * 31) + this.J) * 31)) * 31) + this.L) * 31) + this.M) * 31) + this.N) * 31)) * 31)) * 31) + this.Q) * 31) + this.R) * 31) + (this.S ? 1 : 0)) * 31) + (this.T ? 1 : 0)) * 31) + (this.U ? 1 : 0)) * 31)) * 31);
    }
}
