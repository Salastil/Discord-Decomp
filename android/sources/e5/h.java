package e5;

import com.google.android.exoplayer2.SimpleExoPlayer;

/* loaded from: classes.dex */
public final class h implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8017d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i f8018e;

    public /* synthetic */ h(i iVar, int i5) {
        this.f8017d = i5;
        this.f8018e = iVar;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f8017d) {
            case 0:
                i iVar = this.f8018e;
                SimpleExoPlayer simpleExoPlayer = iVar.F;
                if (simpleExoPlayer != null && simpleExoPlayer.g()) {
                    iVar.q(false);
                }
                iVar.setKeepScreenOn(false);
                break;
            case 1:
                i iVar2 = this.f8018e;
                SimpleExoPlayer simpleExoPlayer2 = iVar2.F;
                if (simpleExoPlayer2 != null) {
                    simpleExoPlayer2.f0(iVar2.R * 0.8f);
                    break;
                }
                break;
            default:
                i iVar3 = this.f8018e;
                SimpleExoPlayer simpleExoPlayer3 = iVar3.F;
                if (simpleExoPlayer3 != null) {
                    simpleExoPlayer3.f0(iVar3.R * 1.0f);
                    break;
                }
                break;
        }
    }
}
