package com.facebook.imagepipeline.common;

import j8.c;
import ki.b;

/* JADX WARN: Failed to restore enum class, 'enum' modifier and super class removed */
/* JADX WARN: Unknown enum class pattern. Please report as an issue! */
/* loaded from: classes3.dex */
public final class Priority {

    /* renamed from: d, reason: collision with root package name */
    public static final c f4579d;

    /* renamed from: e, reason: collision with root package name */
    public static final Priority f4580e;

    /* renamed from: i, reason: collision with root package name */
    public static final Priority f4581i;

    /* renamed from: v, reason: collision with root package name */
    public static final Priority f4582v;

    /* renamed from: w, reason: collision with root package name */
    public static final /* synthetic */ Priority[] f4583w;

    static {
        Priority priority = new Priority("LOW", 0);
        f4580e = priority;
        Priority priority2 = new Priority("MEDIUM", 1);
        f4581i = priority2;
        Priority priority3 = new Priority("HIGH", 2);
        f4582v = priority3;
        Priority[] priorityArr = {priority, priority2, priority3};
        f4583w = priorityArr;
        b.p(priorityArr);
        f4579d = new c();
    }

    public static Priority valueOf(String str) {
        return (Priority) Enum.valueOf(Priority.class, str);
    }

    public static Priority[] values() {
        return (Priority[]) f4583w.clone();
    }
}
