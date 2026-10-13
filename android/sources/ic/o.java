package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class o implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10524d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10525e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f10526i;

    public /* synthetic */ o(AnalyticsListener$EventTime analyticsListener$EventTime, int i5, int i6) {
        this.f10524d = i6;
        this.f10525e = analyticsListener$EventTime;
        this.f10526i = i5;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10524d) {
            case 0:
                ((b) obj).onPlaybackStateChanged(this.f10525e, this.f10526i);
                break;
            case 1:
                ((b) obj).onRepeatModeChanged(this.f10525e, this.f10526i);
                break;
            case 2:
                ((b) obj).onPlaybackSuppressionReasonChanged(this.f10525e, this.f10526i);
                break;
            case 3:
                ((b) obj).onTimelineChanged(this.f10525e, this.f10526i);
                break;
            default:
                b bVar = (b) obj;
                AnalyticsListener$EventTime analyticsListener$EventTime = this.f10525e;
                bVar.onDrmSessionAcquired(analyticsListener$EventTime);
                bVar.onDrmSessionAcquired(analyticsListener$EventTime, this.f10526i);
                break;
        }
    }
}
