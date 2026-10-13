package com.reactnativecommunity.webview;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class m {

    /* renamed from: d, reason: collision with root package name */
    public static final m f6656d;

    /* renamed from: e, reason: collision with root package name */
    public static final m f6657e;

    /* renamed from: i, reason: collision with root package name */
    public static final /* synthetic */ m[] f6658i;

    /* JADX INFO: Fake field, exist only in values array */
    m EF0;

    static {
        m mVar = new m("DEFAULT", 0);
        m mVar2 = new m("IMAGE", 1);
        f6656d = mVar2;
        m mVar3 = new m("VIDEO", 2);
        f6657e = mVar3;
        f6658i = new m[]{mVar, mVar2, mVar3};
    }

    public static m valueOf(String str) {
        return (m) Enum.valueOf(m.class, str);
    }

    public static m[] values() {
        return (m[]) f6658i.clone();
    }
}
