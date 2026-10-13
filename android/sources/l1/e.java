package l1;

import android.os.Bundle;
import android.view.accessibility.AccessibilityNodeInfo;
import android.view.accessibility.AccessibilityNodeProvider;
import androidx.core.view.accessibility.AccessibilityNodeInfoCompat;
import androidx.core.view.accessibility.AccessibilityNodeProviderCompat;
import java.util.List;

/* loaded from: classes.dex */
public class e extends AccessibilityNodeProvider {
    public final AccessibilityNodeProviderCompat a;

    public e(AccessibilityNodeProviderCompat accessibilityNodeProviderCompat) {
        this.a = accessibilityNodeProviderCompat;
    }

    @Override // android.view.accessibility.AccessibilityNodeProvider
    public final AccessibilityNodeInfo createAccessibilityNodeInfo(int i5) {
        AccessibilityNodeInfoCompat a = this.a.a(i5);
        if (a == null) {
            return null;
        }
        return a.a;
    }

    @Override // android.view.accessibility.AccessibilityNodeProvider
    public final List findAccessibilityNodeInfosByText(String str, int i5) {
        this.a.getClass();
        return null;
    }

    @Override // android.view.accessibility.AccessibilityNodeProvider
    public final AccessibilityNodeInfo findFocus(int i5) {
        AccessibilityNodeInfoCompat b10 = this.a.b(i5);
        if (b10 == null) {
            return null;
        }
        return b10.a;
    }

    @Override // android.view.accessibility.AccessibilityNodeProvider
    public final boolean performAction(int i5, int i6, Bundle bundle) {
        return this.a.c(i5, i6, bundle);
    }
}
