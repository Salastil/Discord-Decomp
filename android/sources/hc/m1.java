package hc;

import com.google.android.exoplayer2.Timeline;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;

/* loaded from: classes3.dex */
public final class m1 extends com.google.android.exoplayer2.a {
    public final int[] E;
    public final Timeline[] F;
    public final Object[] G;
    public final HashMap H;

    /* renamed from: w, reason: collision with root package name */
    public final int f9792w;

    /* renamed from: x, reason: collision with root package name */
    public final int f9793x;

    /* renamed from: y, reason: collision with root package name */
    public final int[] f9794y;

    public m1(Timeline[] timelineArr, Object[] objArr, nd.t0 t0Var) {
        super(t0Var);
        int length = timelineArr.length;
        this.F = timelineArr;
        this.f9794y = new int[length];
        this.E = new int[length];
        this.G = objArr;
        this.H = new HashMap();
        int length2 = timelineArr.length;
        int i5 = 0;
        int i6 = 0;
        int i10 = 0;
        int i11 = 0;
        while (i5 < length2) {
            Timeline timeline = timelineArr[i5];
            this.F[i11] = timeline;
            this.E[i11] = i6;
            this.f9794y[i11] = i10;
            i6 += timeline.o();
            i10 += this.F[i11].h();
            this.H.put(objArr[i11], Integer.valueOf(i11));
            i5++;
            i11++;
        }
        this.f9792w = i6;
        this.f9793x = i10;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int h() {
        return this.f9793x;
    }

    @Override // com.google.android.exoplayer2.Timeline
    public final int o() {
        return this.f9792w;
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public m1(ArrayList arrayList, nd.t0 t0Var) {
        this(r0, r1, t0Var);
        Timeline[] timelineArr = new Timeline[arrayList.size()];
        Iterator it = arrayList.iterator();
        int i5 = 0;
        int i6 = 0;
        while (it.hasNext()) {
            timelineArr[i6] = ((x0) it.next()).b();
            i6++;
        }
        Object[] objArr = new Object[arrayList.size()];
        Iterator it2 = arrayList.iterator();
        while (it2.hasNext()) {
            objArr[i5] = ((x0) it2.next()).a();
            i5++;
        }
    }
}
