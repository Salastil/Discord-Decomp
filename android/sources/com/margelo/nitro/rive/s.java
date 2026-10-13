package com.margelo.nitro.rive;

import app.rive.runtime.kotlin.core.File;
import java.util.LinkedHashMap;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s {
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public final LinkedHashMap f6592b;

    /* renamed from: c, reason: collision with root package name */
    public final w1 f6593c;

    public s(File file, LinkedHashMap cache, w1 w1Var) {
        Intrinsics.checkNotNullParameter(file, "file");
        Intrinsics.checkNotNullParameter(cache, "cache");
        this.a = file;
        this.f6592b = cache;
        this.f6593c = w1Var;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof s)) {
            return false;
        }
        s sVar = (s) obj;
        return Intrinsics.areEqual(this.a, sVar.a) && Intrinsics.areEqual(this.f6592b, sVar.f6592b) && Intrinsics.areEqual(this.f6593c, sVar.f6593c);
    }

    public final int hashCode() {
        int hashCode = (this.f6592b.hashCode() + (this.a.hashCode() * 31)) * 31;
        w1 w1Var = this.f6593c;
        return hashCode + (w1Var == null ? 0 : w1Var.hashCode());
    }

    public final String toString() {
        return "FileAndCache(file=" + this.a + ", cache=" + this.f6592b + ", loader=" + this.f6593c + ")";
    }
}
