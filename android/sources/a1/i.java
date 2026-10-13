package a1;

import android.content.res.ColorStateList;
import android.content.res.Configuration;
import android.content.res.Resources;

/* loaded from: classes.dex */
public final class i {
    public final ColorStateList a;

    /* renamed from: b, reason: collision with root package name */
    public final Configuration f25b;

    /* renamed from: c, reason: collision with root package name */
    public final int f26c;

    public i(ColorStateList colorStateList, Configuration configuration, Resources.Theme theme) {
        this.a = colorStateList;
        this.f25b = configuration;
        this.f26c = theme == null ? 0 : theme.hashCode();
    }
}
