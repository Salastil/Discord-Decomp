package kotlin.reflect;

import ki.b;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class KVisibility {

    /* renamed from: d, reason: collision with root package name */
    public static final KVisibility f13551d;

    /* renamed from: e, reason: collision with root package name */
    public static final KVisibility f13552e;

    /* renamed from: i, reason: collision with root package name */
    public static final KVisibility f13553i;

    /* renamed from: v, reason: collision with root package name */
    public static final KVisibility f13554v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ KVisibility[] f13555w;

    static {
        KVisibility kVisibility = new KVisibility("PUBLIC", 0);
        f13551d = kVisibility;
        KVisibility kVisibility2 = new KVisibility("PROTECTED", 1);
        f13552e = kVisibility2;
        KVisibility kVisibility3 = new KVisibility("INTERNAL", 2);
        f13553i = kVisibility3;
        KVisibility kVisibility4 = new KVisibility("PRIVATE", 3);
        f13554v = kVisibility4;
        KVisibility[] kVisibilityArr = {kVisibility, kVisibility2, kVisibility3, kVisibility4};
        f13555w = kVisibilityArr;
        b.p(kVisibilityArr);
    }

    public static KVisibility valueOf(String str) {
        return (KVisibility) Enum.valueOf(KVisibility.class, str);
    }

    public static KVisibility[] values() {
        return (KVisibility[]) f13555w.clone();
    }
}
