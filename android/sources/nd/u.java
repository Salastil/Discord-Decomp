package nd;

import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;

/* loaded from: classes3.dex */
public final /* synthetic */ class u implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15173d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ a1.d f15174e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f15175i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ LoadEventInfo f15176v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ MediaLoadData f15177w;

    public /* synthetic */ u(a1.d dVar, x xVar, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, int i5) {
        this.f15173d = i5;
        this.f15174e = dVar;
        this.f15175i = xVar;
        this.f15176v = loadEventInfo;
        this.f15177w = mediaLoadData;
    }

    /* JADX WARN: Type inference failed for: r2v0, types: [java.lang.Object, nd.x] */
    /* JADX WARN: Type inference failed for: r2v1, types: [java.lang.Object, nd.x] */
    /* JADX WARN: Type inference failed for: r2v2, types: [java.lang.Object, nd.x] */
    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f15173d) {
            case 0:
                a1.d dVar = this.f15174e;
                this.f15175i.y(dVar.f14e, (s) dVar.f15i, this.f15176v, this.f15177w);
                break;
            case 1:
                a1.d dVar2 = this.f15174e;
                this.f15175i.f(dVar2.f14e, (s) dVar2.f15i, this.f15176v, this.f15177w);
                break;
            default:
                a1.d dVar3 = this.f15174e;
                this.f15175i.b(dVar3.f14e, (s) dVar3.f15i, this.f15176v, this.f15177w);
                break;
        }
    }
}
