package androidx.core.view;

import android.view.View;

/* loaded from: classes.dex */
public interface p {
    void onNestedPreScroll(View view, int i5, int i6, int[] iArr, int i10);

    void onNestedScroll(View view, int i5, int i6, int i10, int i11, int i12);

    void onNestedScrollAccepted(View view, View view2, int i5, int i6);

    boolean onStartNestedScroll(View view, View view2, int i5, int i6);

    void onStopNestedScroll(View view, int i5);
}
