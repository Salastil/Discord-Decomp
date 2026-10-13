package com.reactnativecommunity.webview;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class n {

    /* renamed from: d, reason: collision with root package name */
    public static final n f6659d;

    /* renamed from: e, reason: collision with root package name */
    public static final n f6660e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ n[] f6661i;

    /* JADX INFO: Fake field, exist only in values array */
    n EF0;

    static {
        n nVar = new n("UNDECIDED", 0);
        n nVar2 = new n("SHOULD_OVERRIDE", 1);
        f6659d = nVar2;
        n nVar3 = new n("DO_NOT_OVERRIDE", 2);
        f6660e = nVar3;
        f6661i = new n[]{nVar, nVar2, nVar3};
    }

    public static n valueOf(String str) {
        return (n) Enum.valueOf(n.class, str);
    }

    public static n[] values() {
        return (n[]) f6661i.clone();
    }
}
