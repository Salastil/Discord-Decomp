package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class f implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10492d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10493e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f10494i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ long f10495v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ long f10496w;

    public /* synthetic */ f(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j, long j5, int i6) {
        this.f10492d = i6;
        this.f10493e = analyticsListener$EventTime;
        this.f10494i = i5;
        this.f10495v = j;
        this.f10496w = j5;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10492d) {
            case 0:
                ((b) obj).onAudioUnderrun(this.f10493e, this.f10494i, this.f10495v, this.f10496w);
                break;
            default:
                ((b) obj).onBandwidthEstimate(this.f10493e, this.f10494i, this.f10495v, this.f10496w);
                break;
        }
    }
}
