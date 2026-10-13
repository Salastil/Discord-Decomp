package ih;

import android.content.Context;
import android.graphics.Typeface;
import android.text.TextPaint;

/* loaded from: classes3.dex */
public final class d extends android.support.v4.media.session.b {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Context f10798b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ TextPaint f10799c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ android.support.v4.media.session.b f10800d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f10801e;

    public d(e eVar, Context context, TextPaint textPaint, android.support.v4.media.session.b bVar) {
        this.f10801e = eVar;
        this.f10798b = context;
        this.f10799c = textPaint;
        this.f10800d = bVar;
    }

    @Override // android.support.v4.media.session.b
    public final void s(int i5) {
        this.f10800d.s(i5);
    }

    @Override // android.support.v4.media.session.b
    public final void t(Typeface typeface, boolean z5) {
        this.f10801e.f(this.f10798b, this.f10799c, typeface);
        this.f10800d.t(typeface, z5);
    }
}
