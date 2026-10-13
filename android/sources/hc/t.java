package hc;

/* loaded from: classes3.dex */
public final /* synthetic */ class t implements ke.j {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f9876d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ boolean f9877e;

    public /* synthetic */ t(boolean z5, int i5) {
        this.f9876d = i5;
        this.f9877e = z5;
    }

    @Override // ke.j
    public final void invoke(Object obj) {
        switch (this.f9876d) {
            case 0:
                ((com.google.android.exoplayer2.h) obj).onShuffleModeEnabledChanged(this.f9877e);
                break;
            default:
                ((com.google.android.exoplayer2.h) obj).onSkipSilenceEnabledChanged(this.f9877e);
                break;
        }
    }
}
