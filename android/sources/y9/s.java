package y9;

import com.facebook.react.devsupport.StackTraceHelper;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class s {

    /* renamed from: d, reason: collision with root package name */
    public static final s f20738d;

    /* renamed from: e, reason: collision with root package name */
    public static final s f20739e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ s[] f20740i;

    static {
        s sVar = new s("SYMBOL", 0);
        f20738d = sVar;
        s sVar2 = new s("NARROWSYMBOL", 1);
        s sVar3 = new s("CODE", 2);
        f20739e = sVar3;
        f20740i = new s[]{sVar, sVar2, sVar3, new s("NAME", 3)};
    }

    public static s valueOf(String str) {
        return (s) Enum.valueOf(s.class, str);
    }

    public static s[] values() {
        return (s[]) f20740i.clone();
    }

    @Override // java.lang.Enum
    public final String toString() {
        int ordinal = ordinal();
        if (ordinal == 0) {
            return "symbol";
        }
        if (ordinal == 1) {
            return "narrowSymbol";
        }
        if (ordinal == 2) {
            return "code";
        }
        if (ordinal == 3) {
            return StackTraceHelper.NAME_KEY;
        }
        throw new IllegalArgumentException();
    }
}
