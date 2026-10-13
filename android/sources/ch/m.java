package ch;

import android.content.Context;
import android.text.TextPaint;
import java.lang.ref.WeakReference;

/* loaded from: classes3.dex */
public final class m {

    /* renamed from: c, reason: collision with root package name */
    public float f3555c;

    /* renamed from: d, reason: collision with root package name */
    public float f3556d;

    /* renamed from: f, reason: collision with root package name */
    public final WeakReference f3558f;

    /* renamed from: g, reason: collision with root package name */
    public ih.e f3559g;
    public final TextPaint a = new TextPaint(1);

    /* renamed from: b, reason: collision with root package name */
    public final k f3554b = new k(0, this);

    /* renamed from: e, reason: collision with root package name */
    public boolean f3557e = true;

    public m(l lVar) {
        this.f3558f = new WeakReference(null);
        this.f3558f = new WeakReference(lVar);
    }

    public final void a(String str) {
        TextPaint textPaint = this.a;
        this.f3555c = str == null ? 0.0f : textPaint.measureText((CharSequence) str, 0, str.length());
        this.f3556d = str != null ? Math.abs(textPaint.getFontMetrics().ascent) : 0.0f;
        this.f3557e = false;
    }

    public final void b(ih.e eVar, Context context) {
        if (this.f3559g != eVar) {
            this.f3559g = eVar;
            if (eVar != null) {
                TextPaint textPaint = this.a;
                k kVar = this.f3554b;
                eVar.e(context, textPaint, kVar);
                l lVar = (l) this.f3558f.get();
                if (lVar != null) {
                    textPaint.drawableState = lVar.getState();
                }
                eVar.d(context, textPaint, kVar);
                this.f3557e = true;
            }
            l lVar2 = (l) this.f3558f.get();
            if (lVar2 != null) {
                lVar2.a();
                lVar2.onStateChange(lVar2.getState());
            }
        }
    }
}
