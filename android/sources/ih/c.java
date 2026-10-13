package ih;

import android.graphics.Typeface;

/* loaded from: classes3.dex */
public final class c extends a1.b {

    /* renamed from: h, reason: collision with root package name */
    public final /* synthetic */ android.support.v4.media.session.b f10796h;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ e f10797i;

    public c(e eVar, android.support.v4.media.session.b bVar) {
        this.f10797i = eVar;
        this.f10796h = bVar;
    }

    @Override // a1.b
    public final void g(int i5) {
        this.f10797i.f10812n = true;
        this.f10796h.s(i5);
    }

    @Override // a1.b
    public final void h(Typeface typeface) {
        e eVar = this.f10797i;
        eVar.f10814p = Typeface.create(typeface, eVar.f10804d);
        eVar.f10812n = true;
        this.f10796h.t(eVar.f10814p, false);
    }
}
