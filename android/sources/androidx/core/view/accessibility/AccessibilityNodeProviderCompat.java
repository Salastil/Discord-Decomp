package androidx.core.view.accessibility;

import android.os.Build;
import android.os.Bundle;
import android.view.accessibility.AccessibilityNodeProvider;

/* loaded from: classes.dex */
public class AccessibilityNodeProviderCompat {
    public final AccessibilityNodeProvider a;

    public AccessibilityNodeProviderCompat() {
        if (Build.VERSION.SDK_INT >= 26) {
            this.a = new l1.f(this);
        } else {
            this.a = new l1.e(this);
        }
    }

    public AccessibilityNodeInfoCompat a(int i5) {
        return null;
    }

    public AccessibilityNodeInfoCompat b(int i5) {
        return null;
    }

    public boolean c(int i5, int i6, Bundle bundle) {
        return false;
    }

    public AccessibilityNodeProviderCompat(AccessibilityNodeProvider accessibilityNodeProvider) {
        this.a = accessibilityNodeProvider;
    }
}
