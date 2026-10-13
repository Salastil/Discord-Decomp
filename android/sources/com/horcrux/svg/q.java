package com.horcrux.svg;

import com.discord.jank_stats.JankScreenContext;
import java.util.HashMap;

/* loaded from: classes3.dex */
public enum q {
    /* JADX INFO: Fake field, exist only in values array */
    UNKNOWN(JankScreenContext.UNKNOWN_SCREEN),
    /* JADX INFO: Fake field, exist only in values array */
    NORMAL("normal"),
    MULTIPLY("multiply"),
    /* JADX INFO: Fake field, exist only in values array */
    SCREEN("screen"),
    /* JADX INFO: Fake field, exist only in values array */
    DARKEN("darken"),
    /* JADX INFO: Fake field, exist only in values array */
    LIGHTEN("lighten");


    /* renamed from: i, reason: collision with root package name */
    public static final HashMap f6416i = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final String f6418d;

    static {
        for (q qVar : values()) {
            f6416i.put(qVar.f6418d, qVar);
        }
    }

    q(String str) {
        this.f6418d = str;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f6418d;
    }
}
