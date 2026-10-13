package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class i implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10505d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10506e;

    public /* synthetic */ i(AnalyticsListener$EventTime analyticsListener$EventTime, int i5) {
        this.f10505d = i5;
        this.f10506e = analyticsListener$EventTime;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10505d) {
            case 0:
                ((b) obj).onSeekStarted(this.f10506e);
                break;
            case 1:
                ((b) obj).onDrmSessionReleased(this.f10506e);
                break;
            case 2:
                ((b) obj).onPlayerReleased(this.f10506e);
                break;
            case 3:
                ((b) obj).onDrmKeysLoaded(this.f10506e);
                break;
            default:
                ((b) obj).onDrmKeysRestored(this.f10506e);
                break;
        }
    }
}
