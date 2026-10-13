package xh;

import di.b0;
import java.util.Objects;

/* loaded from: classes3.dex */
public abstract class o extends b0 {

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ com.google.android.play.core.integrity.c f20487e;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public o(com.google.android.play.core.integrity.c cVar, jg.g gVar) {
        super(gVar);
        Objects.requireNonNull(cVar);
        this.f20487e = cVar;
    }

    @Override // di.b0
    public final void a(Exception exc) {
        if (!(exc instanceof di.d)) {
            super.a(exc);
        } else if (com.google.android.play.core.integrity.c.d(this.f20487e)) {
            super.a(new b(-2, exc));
        } else {
            super.a(new b(-9, exc));
        }
    }
}
