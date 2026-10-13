package androidx.core.view;

import android.text.TextUtils;
import android.view.View;

/* loaded from: classes.dex */
public final class e0 extends g0 {

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f1575w;

    public e0(int i5, Class cls, int i6, int i10, int i11) {
        this.f1575w = i11;
        this.f1591d = i5;
        this.f1594v = cls;
        this.f1593i = i6;
        this.f1592e = i10;
    }

    @Override // androidx.core.view.g0
    public final Object c(View view) {
        switch (this.f1575w) {
            case 0:
                return Boolean.valueOf(m0.c(view));
            case 1:
                return m0.a(view);
            case 2:
                return o0.b(view);
            default:
                return Boolean.valueOf(m0.b(view));
        }
    }

    @Override // androidx.core.view.g0
    public final void d(View view, Object obj) {
        switch (this.f1575w) {
            case 0:
                m0.f(view, ((Boolean) obj).booleanValue());
                break;
            case 1:
                m0.e(view, (CharSequence) obj);
                break;
            case 2:
                o0.e(view, (CharSequence) obj);
                break;
            default:
                m0.d(view, ((Boolean) obj).booleanValue());
                break;
        }
    }

    @Override // androidx.core.view.g0
    public final boolean g(Object obj, Object obj2) {
        boolean equals;
        switch (this.f1575w) {
            case 0:
                Boolean bool = (Boolean) obj;
                Boolean bool2 = (Boolean) obj2;
                return !((bool != null && bool.booleanValue()) == (bool2 != null && bool2.booleanValue()));
            case 1:
                equals = TextUtils.equals((CharSequence) obj, (CharSequence) obj2);
                break;
            case 2:
                equals = TextUtils.equals((CharSequence) obj, (CharSequence) obj2);
                break;
            default:
                Boolean bool3 = (Boolean) obj;
                Boolean bool4 = (Boolean) obj2;
                return !((bool3 != null && bool3.booleanValue()) == (bool4 != null && bool4.booleanValue()));
        }
        return !equals;
    }
}
