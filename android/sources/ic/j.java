package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.source.MediaLoadData;

/* loaded from: classes3.dex */
public final /* synthetic */ class j implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10507d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10508e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ MediaLoadData f10509i;

    public /* synthetic */ j(AnalyticsListener$EventTime analyticsListener$EventTime, MediaLoadData mediaLoadData, int i5) {
        this.f10507d = i5;
        this.f10508e = analyticsListener$EventTime;
        this.f10509i = mediaLoadData;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10507d) {
            case 0:
                ((b) obj).onDownstreamFormatChanged(this.f10508e, this.f10509i);
                break;
            default:
                ((b) obj).onUpstreamDiscarded(this.f10508e, this.f10509i);
                break;
        }
    }
}
