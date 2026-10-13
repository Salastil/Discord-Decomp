package nd;

import com.google.android.exoplayer2.Timeline;
import hc.s1;

/* loaded from: classes3.dex */
public final class m extends j {

    /* renamed from: w, reason: collision with root package name */
    public static final Object f15137w = new Object();

    /* renamed from: i, reason: collision with root package name */
    public final Object f15138i;

    /* renamed from: v, reason: collision with root package name */
    public final Object f15139v;

    public m(Timeline timeline, Object obj, Object obj2) {
        super(timeline);
        this.f15138i = obj;
        this.f15139v = obj2;
    }

    @Override // nd.j, com.google.android.exoplayer2.Timeline
    public final int b(Object obj) {
        Object obj2;
        if (f15137w.equals(obj) && (obj2 = this.f15139v) != null) {
            obj = obj2;
        }
        return this.f15114e.b(obj);
    }

    @Override // nd.j, com.google.android.exoplayer2.Timeline
    public final s1 f(int i5, s1 s1Var, boolean z5) {
        this.f15114e.f(i5, s1Var, z5);
        if (ke.d0.a(s1Var.f9870e, this.f15139v) && z5) {
            s1Var.f9870e = f15137w;
        }
        return s1Var;
    }

    @Override // nd.j, com.google.android.exoplayer2.Timeline
    public final Object l(int i5) {
        Object l6 = this.f15114e.l(i5);
        return ke.d0.a(l6, this.f15139v) ? f15137w : l6;
    }

    @Override // nd.j, com.google.android.exoplayer2.Timeline
    public final Timeline.Window m(int i5, Timeline.Window window, long j) {
        this.f15114e.m(i5, window, j);
        if (ke.d0.a(window.f5292d, this.f15138i)) {
            window.f5292d = Timeline.Window.O;
        }
        return window;
    }
}
