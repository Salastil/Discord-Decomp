package androidx.appcompat.widget;

import android.content.res.TypedArray;
import android.text.InputFilter;
import android.util.AttributeSet;
import android.widget.TextView;

/* loaded from: classes.dex */
public final class AppCompatEmojiTextHelper {
    public final TextView a;

    /* renamed from: b, reason: collision with root package name */
    public final u4.c f854b;

    public AppCompatEmojiTextHelper(TextView textView) {
        this.a = textView;
        u4.c cVar = new u4.c();
        cVar.f18811d = new m2.g(textView);
        this.f854b = cVar;
    }

    public final InputFilter[] a(InputFilter[] inputFilterArr) {
        return ((zk.a) this.f854b.f18811d).s(inputFilterArr);
    }

    public final void b(AttributeSet attributeSet, int i5) {
        TypedArray obtainStyledAttributes = this.a.getContext().obtainStyledAttributes(attributeSet, h.a.f9453i, i5, 0);
        try {
            boolean z5 = obtainStyledAttributes.hasValue(14) ? obtainStyledAttributes.getBoolean(14, true) : true;
            obtainStyledAttributes.recycle();
            d(z5);
        } catch (Throwable th2) {
            obtainStyledAttributes.recycle();
            throw th2;
        }
    }

    public final void c(boolean z5) {
        ((zk.a) this.f854b.f18811d).F(z5);
    }

    public final void d(boolean z5) {
        ((zk.a) this.f854b.f18811d).I(z5);
    }
}
