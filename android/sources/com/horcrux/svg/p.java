package com.horcrux.svg;

import com.discord.jank_stats.JankScreenContext;
import java.util.HashMap;

/* loaded from: classes3.dex */
public enum p {
    /* JADX INFO: Fake field, exist only in values array */
    UNKNOWN(JankScreenContext.UNKNOWN_SCREEN),
    /* JADX INFO: Fake field, exist only in values array */
    DUPLICATE("duplicate"),
    /* JADX INFO: Fake field, exist only in values array */
    WRAP("wrap"),
    /* JADX INFO: Fake field, exist only in values array */
    NONE("none");


    /* renamed from: e, reason: collision with root package name */
    public static final HashMap f6412e = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final String f6414d;

    static {
        for (p pVar : values()) {
            f6412e.put(pVar.f6414d, pVar);
        }
    }

    p(String str) {
        this.f6414d = str;
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f6414d;
    }
}
