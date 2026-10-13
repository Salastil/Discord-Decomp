package f3;

import android.content.ComponentName;
import androidx.core.content.pm.ShortcutInfoCompat;

/* loaded from: classes.dex */
public final class a implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final ShortcutInfoCompat f8309d;

    /* renamed from: e, reason: collision with root package name */
    public final ComponentName f8310e;

    public a(ShortcutInfoCompat shortcutInfoCompat, ComponentName componentName) {
        this.f8309d = shortcutInfoCompat;
        this.f8310e = componentName;
    }

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        return this.f8309d.f1509m - ((a) obj).f8309d.f1509m;
    }
}
