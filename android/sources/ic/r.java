package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class r implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10534d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10535e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Exception f10536i;

    public /* synthetic */ r(AnalyticsListener$EventTime analyticsListener$EventTime, Exception exc, int i5) {
        this.f10534d = i5;
        this.f10535e = analyticsListener$EventTime;
        this.f10536i = exc;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10534d) {
            case 0:
                ((b) obj).onAudioSinkError(this.f10535e, this.f10536i);
                break;
            case 1:
                ((b) obj).onDrmSessionManagerError(this.f10535e, this.f10536i);
                break;
            case 2:
                ((b) obj).onVideoCodecError(this.f10535e, this.f10536i);
                break;
            default:
                ((b) obj).onAudioCodecError(this.f10535e, this.f10536i);
                break;
        }
    }
}
