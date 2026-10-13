package k2;

import android.os.Build;
import android.text.Editable;
import android.text.SpanWatcher;
import android.text.Spannable;
import android.text.TextWatcher;
import java.util.concurrent.atomic.AtomicInteger;

/* loaded from: classes.dex */
public final class v implements TextWatcher, SpanWatcher {

    /* renamed from: d, reason: collision with root package name */
    public final Object f13154d;

    /* renamed from: e, reason: collision with root package name */
    public final AtomicInteger f13155e = new AtomicInteger(0);

    public v(Object obj) {
        this.f13154d = obj;
    }

    @Override // android.text.TextWatcher
    public final void afterTextChanged(Editable editable) {
        ((TextWatcher) this.f13154d).afterTextChanged(editable);
    }

    @Override // android.text.TextWatcher
    public final void beforeTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        ((TextWatcher) this.f13154d).beforeTextChanged(charSequence, i5, i6, i10);
    }

    @Override // android.text.SpanWatcher
    public final void onSpanAdded(Spannable spannable, Object obj, int i5, int i6) {
        if (this.f13155e.get() <= 0 || !(obj instanceof y)) {
            ((SpanWatcher) this.f13154d).onSpanAdded(spannable, obj, i5, i6);
        }
    }

    @Override // android.text.SpanWatcher
    public final void onSpanChanged(Spannable spannable, Object obj, int i5, int i6, int i10, int i11) {
        int i12;
        int i13;
        if (this.f13155e.get() <= 0 || !(obj instanceof y)) {
            if (Build.VERSION.SDK_INT < 28) {
                if (i5 > i6) {
                    i5 = 0;
                }
                if (i10 > i11) {
                    i12 = i5;
                    i13 = 0;
                    ((SpanWatcher) this.f13154d).onSpanChanged(spannable, obj, i12, i6, i13, i11);
                }
            }
            i12 = i5;
            i13 = i10;
            ((SpanWatcher) this.f13154d).onSpanChanged(spannable, obj, i12, i6, i13, i11);
        }
    }

    @Override // android.text.SpanWatcher
    public final void onSpanRemoved(Spannable spannable, Object obj, int i5, int i6) {
        if (this.f13155e.get() <= 0 || !(obj instanceof y)) {
            ((SpanWatcher) this.f13154d).onSpanRemoved(spannable, obj, i5, i6);
        }
    }

    @Override // android.text.TextWatcher
    public final void onTextChanged(CharSequence charSequence, int i5, int i6, int i10) {
        ((TextWatcher) this.f13154d).onTextChanged(charSequence, i5, i6, i10);
    }
}
