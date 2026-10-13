package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class h implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10501d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10502e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f10503i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f10504v;

    public /* synthetic */ h(AnalyticsListener$EventTime analyticsListener$EventTime, boolean z5, int i5, int i6) {
        this.f10501d = i6;
        this.f10502e = analyticsListener$EventTime;
        this.f10503i = z5;
        this.f10504v = i5;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10501d) {
            case 0:
                ((b) obj).onPlayerStateChanged(this.f10502e, this.f10503i, this.f10504v);
                break;
            default:
                ((b) obj).onPlayWhenReadyChanged(this.f10502e, this.f10503i, this.f10504v);
                break;
        }
    }
}
