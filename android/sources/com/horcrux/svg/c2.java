package com.horcrux.svg;

import com.facebook.react.uimanager.ViewProps;
import java.util.HashMap;

/* loaded from: classes3.dex */
public enum c2 {
    baseline("baseline"),
    /* JADX INFO: Fake field, exist only in values array */
    textBottom("text-bottom"),
    /* JADX INFO: Fake field, exist only in values array */
    alphabetic("alphabetic"),
    /* JADX INFO: Fake field, exist only in values array */
    ideographic("ideographic"),
    /* JADX INFO: Fake field, exist only in values array */
    middle("middle"),
    /* JADX INFO: Fake field, exist only in values array */
    central("central"),
    /* JADX INFO: Fake field, exist only in values array */
    mathematical("mathematical"),
    /* JADX INFO: Fake field, exist only in values array */
    textTop("text-top"),
    /* JADX INFO: Fake field, exist only in values array */
    bottom(ViewProps.BOTTOM),
    /* JADX INFO: Fake field, exist only in values array */
    center("center"),
    /* JADX INFO: Fake field, exist only in values array */
    top(ViewProps.TOP),
    /* JADX INFO: Fake field, exist only in values array */
    textBeforeEdge("text-before-edge"),
    /* JADX INFO: Fake field, exist only in values array */
    textAfterEdge("text-after-edge"),
    /* JADX INFO: Fake field, exist only in values array */
    beforeEdge("before-edge"),
    /* JADX INFO: Fake field, exist only in values array */
    afterEdge("after-edge"),
    /* JADX INFO: Fake field, exist only in values array */
    hanging("hanging");


    /* renamed from: i, reason: collision with root package name */
    public static final HashMap f6320i = new HashMap();

    /* renamed from: d, reason: collision with root package name */
    public final String f6322d;

    static {
        for (c2 c2Var : values()) {
            f6320i.put(c2Var.f6322d, c2Var);
        }
    }

    c2(String str) {
        this.f6322d = str;
    }

    public static c2 a(String str) {
        HashMap hashMap = f6320i;
        if (hashMap.containsKey(str)) {
            return (c2) hashMap.get(str);
        }
        throw new IllegalArgumentException(a3.e.k("Unknown String Value: ", str));
    }

    @Override // java.lang.Enum
    public final String toString() {
        return this.f6322d;
    }
}
