package androidx.core.view;

import android.view.ScrollFeedbackProvider;
import androidx.core.widget.NestedScrollView;

/* loaded from: classes.dex */
public final class v implements w {

    /* renamed from: d, reason: collision with root package name */
    public final ScrollFeedbackProvider f1638d;

    public v(NestedScrollView nestedScrollView) {
        this.f1638d = ScrollFeedbackProvider.createProvider(nestedScrollView);
    }

    @Override // androidx.core.view.w
    public final void onScrollLimit(int i5, int i6, int i10, boolean z5) {
        this.f1638d.onScrollLimit(i5, i6, i10, z5);
    }

    @Override // androidx.core.view.w
    public final void onScrollProgress(int i5, int i6, int i10, int i11) {
        this.f1638d.onScrollProgress(i5, i6, i10, i11);
    }
}
