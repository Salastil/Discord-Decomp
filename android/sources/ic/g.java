package ic;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import com.google.android.exoplayer2.source.LoadEventInfo;
import com.google.android.exoplayer2.source.MediaLoadData;

/* loaded from: classes3.dex */
public final /* synthetic */ class g implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10497d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ AnalyticsListener$EventTime f10498e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ LoadEventInfo f10499i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ MediaLoadData f10500v;

    public /* synthetic */ g(AnalyticsListener$EventTime analyticsListener$EventTime, LoadEventInfo loadEventInfo, MediaLoadData mediaLoadData, int i5) {
        this.f10497d = i5;
        this.f10498e = analyticsListener$EventTime;
        this.f10499i = loadEventInfo;
        this.f10500v = mediaLoadData;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f10497d) {
            case 0:
                ((b) obj).onLoadCompleted(this.f10498e, this.f10499i, this.f10500v);
                break;
            case 1:
                ((b) obj).onLoadStarted(this.f10498e, this.f10499i, this.f10500v);
                break;
            default:
                ((b) obj).onLoadCanceled(this.f10498e, this.f10499i, this.f10500v);
                break;
        }
    }
}
