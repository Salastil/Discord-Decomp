package jc;

import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;

/* loaded from: classes3.dex */
public final /* synthetic */ class o implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12587d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ String f12588e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ long f12589i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ long f12590v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ Object f12591w;

    public /* synthetic */ o(Object obj, String str, long j, long j5, int i5) {
        this.f12587d = i5;
        this.f12591w = obj;
        this.f12588e = str;
        this.f12589i = j;
        this.f12590v = j5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f12587d;
        Object obj = this.f12591w;
        switch (i5) {
            case 0:
                hc.w wVar = (hc.w) ((e4.c) obj).f7940i;
                int i6 = ke.d0.a;
                ic.u uVar = (ic.u) wVar.f9929d.f5368q;
                final AnalyticsListener$EventTime j = uVar.j();
                final int i10 = 0;
                final String str = this.f12588e;
                final long j5 = this.f12590v;
                final long j7 = this.f12589i;
                uVar.k(j, 1008, new ke.j() { // from class: ic.c
                    @Override // ke.j
                    public final void invoke(Object obj2) {
                        switch (i10) {
                            case 0:
                                b bVar = (b) obj2;
                                AnalyticsListener$EventTime analyticsListener$EventTime = j;
                                String str2 = str;
                                long j10 = j5;
                                bVar.onAudioDecoderInitialized(analyticsListener$EventTime, str2, j10);
                                bVar.onAudioDecoderInitialized(analyticsListener$EventTime, str2, j7, j10);
                                break;
                            default:
                                b bVar2 = (b) obj2;
                                AnalyticsListener$EventTime analyticsListener$EventTime2 = j;
                                String str3 = str;
                                long j11 = j5;
                                bVar2.onVideoDecoderInitialized(analyticsListener$EventTime2, str3, j11);
                                bVar2.onVideoDecoderInitialized(analyticsListener$EventTime2, str3, j7, j11);
                                break;
                        }
                    }
                });
                break;
            default:
                hc.w wVar2 = (hc.w) ((e4.l) obj).f7960i;
                int i11 = ke.d0.a;
                ic.u uVar2 = (ic.u) wVar2.f9929d.f5368q;
                final AnalyticsListener$EventTime j10 = uVar2.j();
                final int i12 = 1;
                final String str2 = this.f12588e;
                final long j11 = this.f12590v;
                final long j12 = this.f12589i;
                uVar2.k(j10, 1016, new ke.j() { // from class: ic.c
                    @Override // ke.j
                    public final void invoke(Object obj2) {
                        switch (i12) {
                            case 0:
                                b bVar = (b) obj2;
                                AnalyticsListener$EventTime analyticsListener$EventTime = j10;
                                String str22 = str2;
                                long j102 = j11;
                                bVar.onAudioDecoderInitialized(analyticsListener$EventTime, str22, j102);
                                bVar.onAudioDecoderInitialized(analyticsListener$EventTime, str22, j12, j102);
                                break;
                            default:
                                b bVar2 = (b) obj2;
                                AnalyticsListener$EventTime analyticsListener$EventTime2 = j10;
                                String str3 = str2;
                                long j112 = j11;
                                bVar2.onVideoDecoderInitialized(analyticsListener$EventTime2, str3, j112);
                                bVar2.onVideoDecoderInitialized(analyticsListener$EventTime2, str3, j12, j112);
                                break;
                        }
                    }
                });
                break;
        }
    }
}
