package nd;

import com.google.android.exoplayer2.MediaItem;
import com.google.android.exoplayer2.MediaMetadata;
import com.google.android.exoplayer2.Timeline;
import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;

/* loaded from: classes3.dex */
public final class c0 extends g {
    public static final MediaItem O;
    public final a[] H;
    public final Timeline[] I;
    public final ArrayList J;
    public final j8.b K;
    public int L;
    public long[][] M;
    public bg.y0 N;

    static {
        hc.j0 j0Var = new hc.j0();
        fi.c0 c0Var = fi.e0.f8656e;
        fi.r0 r0Var = fi.r0.f8704w;
        List list = Collections.EMPTY_LIST;
        O = new MediaItem("MergingMediaSource", new hc.l0(j0Var), null, new hc.o0(-9223372036854775807L, -9223372036854775807L, -9223372036854775807L, -3.4028235E38f, -3.4028235E38f), MediaMetadata.f5241f0, hc.q0.f9843i);
    }

    public c0(a... aVarArr) {
        j8.b bVar = new j8.b(14, (byte) 0);
        this.H = aVarArr;
        this.K = bVar;
        this.J = new ArrayList(Arrays.asList(aVarArr));
        this.L = -1;
        this.I = new Timeline[aVarArr.length];
        this.M = new long[0][];
        new HashMap();
        fi.p.c(8, "expectedKeys");
        fi.p.c(2, "expectedValuesPerKey");
        fi.t a = fi.t.a();
        new fi.m0();
        if (!a.isEmpty()) {
            throw new IllegalArgumentException();
        }
    }

    @Override // nd.a
    public final q b(s sVar, ie.q qVar, long j) {
        a[] aVarArr = this.H;
        int length = aVarArr.length;
        q[] qVarArr = new q[length];
        Timeline[] timelineArr = this.I;
        int b10 = timelineArr[0].b(sVar.a);
        for (int i5 = 0; i5 < length; i5++) {
            qVarArr[i5] = aVarArr[i5].b(sVar.b(timelineArr[i5].l(b10)), qVar, j - this.M[b10][i5]);
        }
        return new b0(this.K, this.M[b10], qVarArr);
    }

    @Override // nd.a
    public final MediaItem h() {
        a[] aVarArr = this.H;
        return aVarArr.length > 0 ? aVarArr[0].h() : O;
    }

    @Override // nd.a
    public final void j() {
        bg.y0 y0Var = this.N;
        if (y0Var != null) {
            throw y0Var;
        }
        Iterator it = this.E.values().iterator();
        while (it.hasNext()) {
            ((f) it.next()).a.j();
        }
    }

    @Override // nd.a
    public final void m(ie.u0 u0Var) {
        this.G = u0Var;
        this.F = ke.d0.m(null);
        int i5 = 0;
        while (true) {
            a[] aVarArr = this.H;
            if (i5 >= aVarArr.length) {
                return;
            }
            y(Integer.valueOf(i5), aVarArr[i5]);
            i5++;
        }
    }

    @Override // nd.a
    public final void o(q qVar) {
        b0 b0Var = (b0) qVar;
        int i5 = 0;
        while (true) {
            a[] aVarArr = this.H;
            if (i5 >= aVarArr.length) {
                return;
            }
            a aVar = aVarArr[i5];
            q qVar2 = b0Var.f15068d[i5];
            if (qVar2 instanceof z) {
                qVar2 = ((z) qVar2).f15203d;
            }
            aVar.o(qVar2);
            i5++;
        }
    }

    @Override // nd.g, nd.a
    public final void q() {
        super.q();
        Arrays.fill(this.I, (Object) null);
        this.L = -1;
        this.N = null;
        ArrayList arrayList = this.J;
        arrayList.clear();
        Collections.addAll(arrayList, this.H);
    }

    @Override // nd.g
    public final s t(Object obj, s sVar) {
        if (((Integer) obj).intValue() == 0) {
            return sVar;
        }
        return null;
    }

    @Override // nd.g
    public final void x(Object obj, a aVar, Timeline timeline) {
        Integer num = (Integer) obj;
        if (this.N != null) {
            return;
        }
        if (this.L == -1) {
            this.L = timeline.h();
        } else if (timeline.h() != this.L) {
            this.N = new bg.y0();
            return;
        }
        int length = this.M.length;
        Timeline[] timelineArr = this.I;
        if (length == 0) {
            this.M = (long[][]) Array.newInstance((Class<?>) Long.TYPE, this.L, timelineArr.length);
        }
        ArrayList arrayList = this.J;
        arrayList.remove(aVar);
        timelineArr[num.intValue()] = timeline;
        if (arrayList.isEmpty()) {
            n(timelineArr[0]);
        }
    }
}
