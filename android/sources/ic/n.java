package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.decoder.DecoderCounters;

/* loaded from: classes3.dex */
public final /* synthetic */ class n implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10521d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10522e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ DecoderCounters f10523i;

    public /* synthetic */ n(AnalyticsListener$EventTime analyticsListener$EventTime, DecoderCounters decoderCounters, int i5) {
        this.f10521d = i5;
        this.f10522e = analyticsListener$EventTime;
        this.f10523i = decoderCounters;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10521d) {
            case 0:
                ((b) obj).onVideoEnabled(this.f10522e, this.f10523i);
                break;
            case 1:
                ((b) obj).onAudioDisabled(this.f10522e, this.f10523i);
                break;
            case 2:
                ((b) obj).onVideoDisabled(this.f10522e, this.f10523i);
                break;
            default:
                ((b) obj).onAudioEnabled(this.f10522e, this.f10523i);
                break;
        }
    }
}
