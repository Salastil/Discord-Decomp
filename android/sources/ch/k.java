package ch;

import android.graphics.Typeface;
import com.google.android.material.chip.Chip;

/* loaded from: classes3.dex */
public final class k extends android.support.v4.media.session.b {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f3552b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ Object f3553c;

    public /* synthetic */ k(int i5, Object obj) {
        this.f3552b = i5;
        this.f3553c = obj;
    }

    @Override // android.support.v4.media.session.b
    public final void s(int i5) {
        switch (this.f3552b) {
            case 0:
                m mVar = (m) this.f3553c;
                mVar.f3557e = true;
                l lVar = (l) mVar.f3558f.get();
                if (lVar != null) {
                    lVar.a();
                    break;
                }
                break;
        }
    }

    @Override // android.support.v4.media.session.b
    public final void t(Typeface typeface, boolean z5) {
        switch (this.f3552b) {
            case 0:
                if (!z5) {
                    m mVar = (m) this.f3553c;
                    mVar.f3557e = true;
                    l lVar = (l) mVar.f3558f.get();
                    if (lVar != null) {
                        lVar.a();
                        break;
                    }
                }
                break;
            default:
                Chip chip = (Chip) this.f3553c;
                xg.e eVar = chip.f6003w;
                chip.setText(eVar.f20439j1 ? eVar.f20442l0 : chip.getText());
                chip.requestLayout();
                chip.invalidate();
                break;
        }
    }

    private final void H(int i5) {
    }
}
