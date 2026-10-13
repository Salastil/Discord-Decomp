package l1;

import android.view.accessibility.AccessibilityNodeInfo;

/* loaded from: classes.dex */
public final class d {
    public Object a = null;

    public static d a(int i5, int i6, int i10, int i11, boolean z5) {
        AccessibilityNodeInfo.CollectionItemInfo obtain = AccessibilityNodeInfo.CollectionItemInfo.obtain(i5, i6, i10, i11, false, z5);
        d dVar = new d();
        dVar.a = obtain;
        return dVar;
    }
}
