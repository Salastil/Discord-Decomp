package ge;

import com.google.android.exoplayer2.trackselection.TrackSelectionParameters;
import fi.c0;
import fi.e0;
import fi.r0;
import java.util.HashMap;
import java.util.HashSet;

/* loaded from: classes3.dex */
public class t {

    /* renamed from: e, reason: collision with root package name */
    public int f9210e;

    /* renamed from: f, reason: collision with root package name */
    public int f9211f;

    /* renamed from: g, reason: collision with root package name */
    public int f9212g;

    /* renamed from: h, reason: collision with root package name */
    public int f9213h;

    /* renamed from: l, reason: collision with root package name */
    public e0 f9215l;

    /* renamed from: m, reason: collision with root package name */
    public int f9216m;

    /* renamed from: n, reason: collision with root package name */
    public e0 f9217n;

    /* renamed from: o, reason: collision with root package name */
    public int f9218o;

    /* renamed from: p, reason: collision with root package name */
    public int f9219p;

    /* renamed from: q, reason: collision with root package name */
    public int f9220q;

    /* renamed from: r, reason: collision with root package name */
    public e0 f9221r;

    /* renamed from: s, reason: collision with root package name */
    public e0 f9222s;

    /* renamed from: t, reason: collision with root package name */
    public int f9223t;

    /* renamed from: u, reason: collision with root package name */
    public int f9224u;

    /* renamed from: v, reason: collision with root package name */
    public boolean f9225v;

    /* renamed from: w, reason: collision with root package name */
    public boolean f9226w;

    /* renamed from: x, reason: collision with root package name */
    public boolean f9227x;

    /* renamed from: y, reason: collision with root package name */
    public HashMap f9228y;

    /* renamed from: z, reason: collision with root package name */
    public HashSet f9229z;
    public int a = Integer.MAX_VALUE;

    /* renamed from: b, reason: collision with root package name */
    public int f9207b = Integer.MAX_VALUE;

    /* renamed from: c, reason: collision with root package name */
    public int f9208c = Integer.MAX_VALUE;

    /* renamed from: d, reason: collision with root package name */
    public int f9209d = Integer.MAX_VALUE;

    /* renamed from: i, reason: collision with root package name */
    public int f9214i = Integer.MAX_VALUE;
    public int j = Integer.MAX_VALUE;
    public boolean k = true;

    public t() {
        c0 c0Var = e0.f8656e;
        r0 r0Var = r0.f8704w;
        this.f9215l = r0Var;
        this.f9216m = 0;
        this.f9217n = r0Var;
        this.f9218o = 0;
        this.f9219p = Integer.MAX_VALUE;
        this.f9220q = Integer.MAX_VALUE;
        this.f9221r = r0Var;
        this.f9222s = r0Var;
        this.f9223t = 0;
        this.f9224u = 0;
        this.f9225v = false;
        this.f9226w = false;
        this.f9227x = false;
        this.f9228y = new HashMap();
        this.f9229z = new HashSet();
    }

    public final void a(TrackSelectionParameters trackSelectionParameters) {
        this.a = trackSelectionParameters.f5468d;
        this.f9207b = trackSelectionParameters.f5469e;
        this.f9208c = trackSelectionParameters.f5470i;
        this.f9209d = trackSelectionParameters.f5471v;
        this.f9210e = trackSelectionParameters.f5472w;
        this.f9211f = trackSelectionParameters.f5473x;
        this.f9212g = trackSelectionParameters.f5474y;
        this.f9213h = trackSelectionParameters.E;
        this.f9214i = trackSelectionParameters.F;
        this.j = trackSelectionParameters.G;
        this.k = trackSelectionParameters.H;
        this.f9215l = trackSelectionParameters.I;
        this.f9216m = trackSelectionParameters.J;
        this.f9217n = trackSelectionParameters.K;
        this.f9218o = trackSelectionParameters.L;
        this.f9219p = trackSelectionParameters.M;
        this.f9220q = trackSelectionParameters.N;
        this.f9221r = trackSelectionParameters.O;
        this.f9222s = trackSelectionParameters.P;
        this.f9223t = trackSelectionParameters.Q;
        this.f9224u = trackSelectionParameters.R;
        this.f9225v = trackSelectionParameters.S;
        this.f9226w = trackSelectionParameters.T;
        this.f9227x = trackSelectionParameters.U;
        this.f9229z = new HashSet(trackSelectionParameters.W);
        this.f9228y = new HashMap(trackSelectionParameters.V);
    }

    public t b(int i5, int i6) {
        this.f9214i = i5;
        this.j = i6;
        this.k = true;
        return this;
    }
}
