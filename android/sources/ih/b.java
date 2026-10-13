package ih;

import android.graphics.Typeface;

/* loaded from: classes3.dex */
public final class b extends android.support.v4.media.session.b {

    /* renamed from: b, reason: collision with root package name */
    public final Typeface f10793b;

    /* renamed from: c, reason: collision with root package name */
    public final a f10794c;

    /* renamed from: d, reason: collision with root package name */
    public boolean f10795d;

    public b(a aVar, Typeface typeface) {
        this.f10793b = typeface;
        this.f10794c = aVar;
    }

    @Override // android.support.v4.media.session.b
    public final void s(int i5) {
        if (this.f10795d) {
            return;
        }
        this.f10794c.t(this.f10793b);
    }

    @Override // android.support.v4.media.session.b
    public final void t(Typeface typeface, boolean z5) {
        if (this.f10795d) {
            return;
        }
        this.f10794c.t(typeface);
    }
}
