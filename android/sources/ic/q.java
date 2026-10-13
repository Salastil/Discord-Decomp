package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class q implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10530d = 0;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10531e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ long f10532i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f10533v;

    public /* synthetic */ q(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, long j) {
        this.f10531e = analyticsListener$EventTime;
        this.f10533v = i5;
        this.f10532i = j;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10530d) {
            case 0:
                ((b) obj).onDroppedVideoFrames(this.f10531e, this.f10533v, this.f10532i);
                break;
            default:
                ((b) obj).onVideoFrameProcessingOffset(this.f10531e, this.f10532i, this.f10533v);
                break;
        }
    }

    public /* synthetic */ q(AnalyticsListener$EventTime analyticsListener$EventTime, long j, int i5) {
        this.f10531e = analyticsListener$EventTime;
        this.f10532i = j;
        this.f10533v = i5;
    }
}
