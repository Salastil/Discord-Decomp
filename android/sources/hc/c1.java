package hc;

import android.util.Pair;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;
import java.io.IOException;

/* loaded from: classes3.dex */
public final /* synthetic */ class c1 implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9643d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ LoadEventInfo f9644e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ MediaLoadData f9645i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ IOException f9646v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ boolean f9647w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Object f9648x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ Object f9649y;

    public /* synthetic */ c1(Object obj, Object obj2, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, IOException iOException, boolean z5, int i5) {
        this.f9643d = i5;
        this.f9648x = obj;
        this.f9649y = obj2;
        this.f9644e = loadEventInfo;
        this.f9645i = mediaLoadData;
        this.f9646v = iOException;
        this.f9647w = z5;
    }

    /* JADX WARN: Type inference failed for: r1v3, types: [java.lang.Object, nd.x] */
    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f9643d) {
            case 0:
                io.sentry.internal.debugmeta.c cVar = (io.sentry.internal.debugmeta.c) this.f9648x;
                Pair pair = (Pair) this.f9649y;
                ((ic.u) ((ic.a) ((f1) cVar.f11623i).f9700i)).v(((Integer) pair.first).intValue(), (nd.s) pair.second, this.f9644e, this.f9645i, this.f9646v, this.f9647w);
                break;
            default:
                a1.d dVar = (a1.d) this.f9648x;
                this.f9649y.v(dVar.f14e, (nd.s) dVar.f15i, this.f9644e, this.f9645i, this.f9646v, this.f9647w);
                break;
        }
    }
}
