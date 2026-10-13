package th;

import android.os.Bundle;

/* loaded from: classes3.dex */
public final class k extends h {

    /* renamed from: i, reason: collision with root package name */
    public final int f18489i;
    public final String j;
    public final int k;

    /* renamed from: l, reason: collision with root package name */
    public final /* synthetic */ m f18490l;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public k(m mVar, jg.g gVar, int i5, String str, int i6) {
        super(mVar, gVar);
        this.f18490l = mVar;
        this.f18489i = i5;
        this.j = str;
        this.k = i6;
    }

    @Override // th.h, uh.l
    public final void n(Bundle bundle) {
        m mVar = this.f18490l;
        mVar.f18506d.d(this.f18461g);
        m.f18502g.b("onError(%d), retrying notifyModuleCompleted...", Integer.valueOf(bundle.getInt("error_code")));
        int i5 = this.k;
        if (i5 > 0) {
            mVar.j(this.f18489i, i5 - 1, this.j);
        }
    }
}
