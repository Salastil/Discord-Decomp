package oh;

import com.google.android.material.internal.CheckableImageButton;

/* loaded from: classes3.dex */
public final class d extends o {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f15896e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(n nVar, int i5) {
        super(nVar);
        this.f15896e = i5;
    }

    @Override // oh.o
    public void q() {
        switch (this.f15896e) {
            case 0:
                n nVar = this.f15921b;
                nVar.L = null;
                CheckableImageButton checkableImageButton = nVar.f15920y;
                checkableImageButton.setOnLongClickListener(null);
                io.sentry.config.a.J(checkableImageButton, null);
                break;
        }
    }
}
