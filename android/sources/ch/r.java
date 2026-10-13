package ch;

import android.view.View;
import androidx.core.view.WindowInsetsCompat;

/* loaded from: classes3.dex */
public final class r implements androidx.core.view.r {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ t f3563d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ u f3564e;

    public r(t tVar, u uVar) {
        this.f3563d = tVar;
        this.f3564e = uVar;
    }

    @Override // androidx.core.view.r
    public final WindowInsetsCompat a(View view, WindowInsetsCompat windowInsetsCompat) {
        u uVar = new u();
        u uVar2 = this.f3564e;
        uVar.f3566b = uVar2.f3566b;
        uVar.f3567c = uVar2.f3567c;
        uVar.f3568d = uVar2.f3568d;
        uVar.f3569e = uVar2.f3569e;
        return this.f3563d.i(view, windowInsetsCompat, uVar);
    }
}
