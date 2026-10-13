package l1;

import android.os.Bundle;
import android.text.style.ClickableSpan;
import android.view.View;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;

/* loaded from: classes.dex */
public final class a extends ClickableSpan {

    /* renamed from: d, reason: collision with root package name */
    public final int f13698d;

    /* renamed from: e, reason: collision with root package name */
    public final AccessibilityNodeInfoCompat f13699e;

    /* renamed from: i, reason: collision with root package name */
    public final int f13700i;

    public a(int i5, AccessibilityNodeInfoCompat accessibilityNodeInfoCompat, int i6) {
        this.f13698d = i5;
        this.f13699e = accessibilityNodeInfoCompat;
        this.f13700i = i6;
    }

    @Override // android.text.style.ClickableSpan
    public final void onClick(View view) {
        Bundle bundle = new Bundle();
        bundle.putInt("ACCESSIBILITY_CLICKABLE_SPAN_ID", this.f13698d);
        this.f13699e.a.performAction(this.f13700i, bundle);
    }
}
