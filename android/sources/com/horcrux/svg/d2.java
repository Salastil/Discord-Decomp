package com.horcrux.svg;

import java.util.HashMap;

/* loaded from: classes3.dex */
public enum d2 {
    Normal("normal"),
    Bold("bold"),
    w100("100"),
    w200("200"),
    w300("300"),
    /* JADX INFO: Fake field, exist only in values array */
    w400("400"),
    w500("500"),
    w600("600"),
    /* JADX INFO: Fake field, exist only in values array */
    w700("700"),
    w800("800"),
    w900("900"),
    Bolder("bolder"),
    Lighter("lighter");

    public static final HashMap J = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final String f6333d;

    static {
        for (d2 d2Var : values()) {
            J.put(d2Var.f6333d, d2Var);
        }
    }

    d2(String str) {
        this.f6333d = str;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f6333d;
    }
}
