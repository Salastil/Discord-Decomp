package m2;

import android.text.Editable;
import k2.w;

/* loaded from: classes.dex */
public final class a extends Editable.Factory {
    public static final Object a = new Object();

    /* renamed from: b, reason: collision with root package name */
    public static volatile a f14316b;

    /* renamed from: c, reason: collision with root package name */
    public static Class f14317c;

    @Override // android.text.Editable.Factory
    public final Editable newEditable(CharSequence charSequence) {
        Class cls = f14317c;
        return cls != null ? new w(cls, charSequence) : super.newEditable(charSequence);
    }
}
