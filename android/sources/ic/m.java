package ic;

import com.google.android.exoplayer2.PlaybackException;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class m implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10518d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10519e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ PlaybackException f10520i;

    public /* synthetic */ m(AnalyticsListener$EventTime analyticsListener$EventTime, PlaybackException playbackException, int i5) {
        this.f10518d = i5;
        this.f10519e = analyticsListener$EventTime;
        this.f10520i = playbackException;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10518d) {
            case 0:
                ((b) obj).onPlayerError(this.f10519e, this.f10520i);
                break;
            default:
                ((b) obj).onPlayerErrorChanged(this.f10519e, this.f10520i);
                break;
        }
    }
}
