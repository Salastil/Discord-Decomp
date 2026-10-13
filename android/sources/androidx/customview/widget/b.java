package androidx.customview.widget;

import android.graphics.Rect;
import java.util.Comparator;

/* loaded from: classes.dex */
public final class b implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final Rect f1714d = new Rect();

    /* renamed from: e, reason: collision with root package name */
    public final Rect f1715e = new Rect();

    /* renamed from: i, reason: collision with root package name */
    public final boolean f1716i;

    /* renamed from: v, reason: collision with root package name */
    public final FocusStrategy$BoundsAdapter f1717v;

    public b(boolean z5, FocusStrategy$BoundsAdapter focusStrategy$BoundsAdapter) {
        this.f1716i = z5;
        this.f1717v = focusStrategy$BoundsAdapter;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        FocusStrategy$BoundsAdapter focusStrategy$BoundsAdapter = this.f1717v;
        Rect rect = this.f1714d;
        focusStrategy$BoundsAdapter.o(obj, rect);
        Rect rect2 = this.f1715e;
        focusStrategy$BoundsAdapter.o(obj2, rect2);
        int i5 = rect.top;
        int i6 = rect2.top;
        if (i5 < i6) {
            return -1;
        }
        if (i5 > i6) {
            return 1;
        }
        int i10 = rect.left;
        int i11 = rect2.left;
        boolean z5 = this.f1716i;
        if (i10 < i11) {
            return z5 ? 1 : -1;
        }
        if (i10 > i11) {
            return z5 ? -1 : 1;
        }
        int i12 = rect.bottom;
        int i13 = rect2.bottom;
        if (i12 < i13) {
            return -1;
        }
        if (i12 > i13) {
            return 1;
        }
        int i14 = rect.right;
        int i15 = rect2.right;
        if (i14 < i15) {
            return z5 ? 1 : -1;
        }
        if (i14 > i15) {
            return z5 ? -1 : 1;
        }
        return 0;
    }
}
