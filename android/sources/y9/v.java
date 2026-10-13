package y9;

import com.facebook.react.views.scroll.ReactScrollViewHelper;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class v {

    /* renamed from: d, reason: collision with root package name */
    public static final v f20748d;

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ v[] f20749e;

    static {
        v vVar = new v("AUTO", 0);
        f20748d = vVar;
        f20749e = new v[]{vVar, new v("ALWAYS", 1), new v("NEVER", 2), new v("EXCEPTZERO", 3)};
    }

    public static v valueOf(String str) {
        return (v) Enum.valueOf(v.class, str);
    }

    public static v[] values() {
        return (v[]) f20749e.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "auto";
        }
        if (ordinal == 1) {
            return ReactScrollViewHelper.OVER_SCROLL_ALWAYS;
        }
        if (ordinal == 2) {
            return ReactScrollViewHelper.OVER_SCROLL_NEVER;
        }
        if (ordinal == 3) {
            return "exceptZero";
        }
        throw new IllegalArgumentException();
    }
}
