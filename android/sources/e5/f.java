package e5;

import android.view.View;
import com.google.android.exoplayer2.SimpleExoPlayer;

/* loaded from: classes.dex */
public final class f implements View.OnClickListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f8014d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ i f8015e;

    public /* synthetic */ f(i iVar, int i5) {
        this.f8014d = i5;
        this.f8015e = iVar;
    }

    @Override // android.view.View.OnClickListener
    public final void onClick(View view) {
        switch (this.f8014d) {
            case 0:
                i iVar = this.f8015e;
                if (iVar.F != null) {
                    iVar.j(iVar.f8042v);
                    if (!iVar.f8042v.d()) {
                        iVar.f8042v.e();
                        break;
                    } else {
                        iVar.f8042v.b();
                        break;
                    }
                }
                break;
            case 1:
                i iVar2 = this.f8015e;
                SimpleExoPlayer simpleExoPlayer = iVar2.F;
                if (simpleExoPlayer != null && simpleExoPlayer.w() == 4) {
                    iVar2.F.b0(5, 0L);
                }
                iVar2.p(false);
                break;
            default:
                this.f8015e.p(true);
                break;
        }
    }
}
