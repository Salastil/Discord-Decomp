package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class p implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10527d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10528e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ String f10529i;

    public /* synthetic */ p(AnalyticsListener$EventTime analyticsListener$EventTime, String str, int i5) {
        this.f10527d = i5;
        this.f10528e = analyticsListener$EventTime;
        this.f10529i = str;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10527d) {
            case 0:
                ((b) obj).onAudioDecoderReleased(this.f10528e, this.f10529i);
                break;
            default:
                ((b) obj).onVideoDecoderReleased(this.f10528e, this.f10529i);
                break;
        }
    }
}
