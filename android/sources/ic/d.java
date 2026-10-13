package ic;

import android.content.Context;
import android.content.SharedPreferences;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class d implements ke.j, jg.d {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10485d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f10486e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ boolean f10487i;

    public /* synthetic */ d(Object obj, boolean z5, int i5) {
        this.f10485d = i5;
        this.f10486e = obj;
        this.f10487i = z5;
    }

    @Override // ke.j
    public void invoke(Object obj) {
        switch (this.f10485d) {
            case 0:
                ((b) obj).onShuffleModeChanged((AnalyticsListener$EventTime) this.f10486e, this.f10487i);
                break;
            case 1:
                ((b) obj).onSkipSilenceEnabledChanged((AnalyticsListener$EventTime) this.f10486e, this.f10487i);
                break;
            case 2:
                AnalyticsListener$EventTime analyticsListener$EventTime = (AnalyticsListener$EventTime) this.f10486e;
                b bVar = (b) obj;
                boolean z5 = this.f10487i;
                bVar.onLoadingChanged(analyticsListener$EventTime, z5);
                bVar.onIsLoadingChanged(analyticsListener$EventTime, z5);
                break;
            default:
                ((b) obj).onIsPlayingChanged((AnalyticsListener$EventTime) this.f10486e, this.f10487i);
                break;
        }
    }

    @Override // jg.d
    public void onSuccess(Object obj) {
        SharedPreferences.Editor edit = com.facebook.imagepipeline.nativecode.c.D((Context) this.f10486e).edit();
        edit.putBoolean("proxy_retention", this.f10487i);
        edit.apply();
    }
}
