package androidx.recyclerview.widget;

import androidx.recyclerview.widget.GridLayoutManager;

/* loaded from: classes.dex */
public final class e0 extends GridLayoutManager.SpanSizeLookup {
    @Override // androidx.recyclerview.widget.GridLayoutManager.SpanSizeLookup
    public final int getSpanIndex(int i5, int i6) {
        return i5 % i6;
    }

    @Override // androidx.recyclerview.widget.GridLayoutManager.SpanSizeLookup
    public final int getSpanSize(int i5) {
        return 1;
    }
}
