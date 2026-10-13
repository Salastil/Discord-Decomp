package xh;

import android.os.Bundle;
import di.a0;
import java.util.Objects;

/* loaded from: classes3.dex */
public final class n extends m {

    /* renamed from: i, reason: collision with root package name */
    public final a0 f20486i;
    public final /* synthetic */ com.google.android.play.core.integrity.c j;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public n(com.google.android.play.core.integrity.c cVar, jg.g gVar) {
        super(cVar, gVar);
        Objects.requireNonNull(cVar);
        this.j = cVar;
        this.f20486i = new a0("OnWarmUpIntegrityTokenCallback");
    }

    @Override // xh.m, di.w
    public final void j(Bundle bundle) {
        super.j(bundle);
        this.f20486i.b("onWarmUpExpressIntegrityToken", new Object[0]);
        ze.e a = this.j.f6179d.a(bundle);
        jg.g gVar = this.f20484g;
        if (a != null) {
            gVar.c(a);
        } else {
            gVar.d(Long.valueOf(bundle.getLong("warm.up.sid")));
        }
    }
}
